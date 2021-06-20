/*模拟规则
新的随机生成出来的数字，和数组内之前的元素进行比较
如果有重复的，就重新随机，知道没有重复的
如果没有重复的就直接放入数组
*/
#include"head.h"

int main(int argc, char const *argv[])
{
    int *randnum;
    int i;
    time_t start;
    time_t finish;
    time_t sum=0;
    int find;
    ofstream file;

    file.open("随机函数测试数据.txt");
    if(!file.is_open())
    {
        cout<<"不能打开随机函数测试数据.txt"<<endl;
        exit(EXIT_FAILURE);
    }

    for(int a=0;a<FORSIZE;a++) 
    {
        cout<<"第"<<a<<"轮"<<endl;
        file<<"第"<<a<<"轮"<<endl;

        cout<<"初始化中..."<<endl;
        srand(time(0));
        randnum=new int[sizeof(int)*RANDSIZE];
        cout<<"初始化完毕"<<endl;

        cout<<"生成中..."<<endl;
        start=GetTickCount();
        i=0;
        while(i<RANDSIZE)
        {
            find=0;
            randnum[i]=rand();
            for(int b=0;b<i;b++)
                if(randnum[b]==randnum[i])
                {
                    find=1;
                    break;
                }
            if(find)
                continue;
            i++;
        }
        finish=GetTickCount();
        cout<<"生成完毕"<<endl;

        sum+=(finish-start);
        cout<<"耗时: "<<finish-start<<endl;
        file<<"耗时: "<<finish-start<<endl;
        cout<<endl;
        
        delete [] randnum;
    }
    cout<<"一共消耗时间: "<<sum<<endl;
    cout<<"平均消耗时间: "<<(double)sum/100<<endl;

    file<<"一共消耗时间: "<<sum<<endl;
    file<<"平均消耗时间: "<<(double)sum/100<<endl;

    file.close();

    // system("pause");
    system("shutdown -p");
    
    return 0;
}
