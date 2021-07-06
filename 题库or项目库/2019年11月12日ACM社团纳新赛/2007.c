/*Description
ÿһ����������ֵ����������leslee�����������������ʱ�Ŀ��֣�leslee�տ��������Ŀʱ�˷ܵùر���idea������¯ʯ��˵�����õ��ϰ���������������ķ��������������ֵ��
�������������õ��ϰ壬��һ������f(x)=4*a*exp(-x)-b*x+6*c*ln(x)-d*sin(2*x)+e*sqrt(x)��
x��ȡֵ��ΧΪ[1,100]��xΪ���������������ֵ����Сֵ����������λС����
Input
����a��b��c��d��e�������
a��b��c��d��e��Ϊ��������0<=a,b,c,d,e<=10��
Output
���������Сֵ�����ֵ���м��ÿո������
Sample Input
2 9 9 7 6
Sample Output
-585.21 61.23
HINT
leslee:"ln�����ڴ�������log��"
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c,d,e,x;
    double fx,lastfx,bigfx,smalefx;

    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)!=EOF)
    {
        for(x=1;x<=100;x++)
        {
            lastfx=fx;
            fx=4*a*exp(-x)-b*x+6*c*log()-d*sin(2*x)+e*sqrt(x);
            if(fx>lastfx)
                bigfx=fx;
            else
                smalefx=lastfx;
        }
        printf("%f %f\n",bigfx,smalefx);
    }
    return 0;
}
