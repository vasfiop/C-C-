/*ģ�����
�µ�������ɳ��������֣���������֮ǰ��Ԫ�ؽ��бȽ�
������ظ��ģ������������֪��û���ظ���
���û���ظ��ľ�ֱ�ӷ�������
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

    file.open("���������������.txt");
    if(!file.is_open())
    {
        cout<<"���ܴ����������������.txt"<<endl;
        exit(EXIT_FAILURE);
    }

    for(int a=0;a<FORSIZE;a++) 
    {
        cout<<"��"<<a<<"��"<<endl;
        file<<"��"<<a<<"��"<<endl;

        cout<<"��ʼ����..."<<endl;
        srand(time(0));
        randnum=new int[sizeof(int)*RANDSIZE];
        cout<<"��ʼ�����"<<endl;

        cout<<"������..."<<endl;
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
        cout<<"�������"<<endl;

        sum+=(finish-start);
        cout<<"��ʱ: "<<finish-start<<endl;
        file<<"��ʱ: "<<finish-start<<endl;
        cout<<endl;
        
        delete [] randnum;
    }
    cout<<"һ������ʱ��: "<<sum<<endl;
    cout<<"ƽ������ʱ��: "<<(double)sum/100<<endl;

    file<<"һ������ʱ��: "<<sum<<endl;
    file<<"ƽ������ʱ��: "<<(double)sum/100<<endl;

    file.close();

    // system("pause");
    system("shutdown -p");
    
    return 0;
}
