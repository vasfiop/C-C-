/*AunSmile ��һ���ܳ��ܳ��ļ���, ������ z ������(1 <= z <= 10000),
�������� x ���ְ�(0 <= x < 5000), һ���������һ��,
�������е��ְ춼�ǲ����ڵ�,
��Ϊ AunSmile �����ְ�֮���ֵ㻨���ݲ�, ���������ס�ĸ����,
���� AunSmile ������ w ���ְ�(0 <= w <= 5000), ���ʱ��û�п��ǹ��ŵ��·Ų���, ������ֻ����������,
�������ڼ�Ȼ�Ѿ�������, ��Ӧ�ÿ�����, ���ļ����ܲ��ܷŵ�����.
input
��һ������������ z, x, w.
�ڶ��� x ��������ʾ�ְ��λ��, �������У�x=2, �ֱ��ڻ��ܵ� 0 �Ÿ�� 4�Ÿ� ��
output
�ܵĻ����true, ���ܵĻ����false.
Sample Input
5 2 1
0 4
Sample Output
true
*/
#include<stdio.h>
#include<stdlib.h>
int really(int how,int one,int two, int put_one, int put_two);
int main(void)
{
    int z,x,w;//����������һ���ְ죬�ڶ����ְ�
    int put1,put2;

    scanf("%d %d %d",&z,&x,&w);
    scanf("%d %d",&put1,&put2);
    //��һ�ΰڷŽ�β����  (2*w)-1+put1
    //ռ�ÿ�λ(2*w)+put1
    while(put2<=((x*2)-1+put1))
    {
        printf("��ĵڶ����ְ�ڷ�λ�ù��ڿ�ǰ������������.");
        scanf("%d",&put2);
    }
    if(really(z,x,w,put1,put2))
        printf("ture\n");
    else
        printf("flase\n");
    
    system("pause");
    return 0;
}
int really(int how,int one, int two, int put_one, int put_two)//�ж��Ƿ��ܷ���
{
    int all;

    all=((2*one)+put_one)+(two*2-1)+(put_two-(2*one-1)-1);
    if(all<=(how+1))
        return 1;
    else
        return 0;
}
