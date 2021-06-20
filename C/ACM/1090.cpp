/*
Description
有N个学生，每个学生的数据包括学号、姓名、3门课的成绩，从键盘输入N个学生的数据，要求打印出3门课的总平均成绩，
以及最高分的学生的数据（包括学号、姓名、3门课成绩）

Input
学生数量N占一行每个学生的学号、姓名、三科成绩占一行，空格分开。
Output
各门课的平均成绩 最高分的学生的数据（包括学号、姓名、3门课成绩）

Sample Input
2
1 blue 90 80 70
b clan 80 70 60
Sample Output
85 75 65
1 blue 90 80 70
*/
#include<iostream>
using namespace std;
struct student
{
    string id;
    string name;
    int a;
    int b;
    int c;
    int max=0;
};
int main(int argc, char const *argv[])
{
    int n;
    student *s1;
    double avg_a,avg_b,avg_c;

    avg_a=avg_b=avg_c=0;
    (cin>>n).get();
    s1=new student[n];
    for(int i=0;i<n;i++)
    {
        cin>>s1[i].id;
        cin>>s1[i].name;
        (cin>>s1[i].a).get();
        (cin>>s1[i].b).get();
        (cin>>s1[i].c).get();
        s1[i].max=s1[i].a+s1[i].b+s1[i].c;
        avg_a+=s1[i].a;
        avg_b+=s1[i].b;
        avg_c+=s1[i].c;
    }
    cout<<avg_a/n<<" "<<avg_b/n<<" "<<avg_c/n<<endl;
    int maxp=0;
    for(int i=0;i<n;i++)
        if(s1[maxp].max<s1[i].max)
            maxp=i;
    cout<<s1[maxp].id<<" "<<s1[maxp].name<<" "<<s1[maxp].a<<" "<<s1[maxp].b<<" "<<s1[maxp].c<<endl;

    return 0;
}

