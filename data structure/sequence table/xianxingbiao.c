#include<stdio.h>
#include<stdlib.h>

int Search(int *num,int x);//����x��λ�ã����û�з���-1
int Input(int *num,int x);//Ϊ�����Ԫ��
int Insert(int *num,int i,int x,int size,int number_size);//�ѽڵ�x�����ڵ�i��λ���ϣ��ɹ�����1��ʧ�ܷ���0
int Find(int *num,int i,int *x,int size);//Ѱ�ҵ�i���ڵ㣬���ݸ�x���ɹ�����1��ʧ�ܷ���0
int Delete(int *num,int i,int *x,int number_size);//ɾ����i���ڵ㣬���Ҵ��ݸ�x���ɹ�����1��ʧ�ܷ���0
void Printf(int *num,int size);//���

int main(int argc, char const *argv[])
{
    int size;
    int number_size;
    int *list;
    int find;
    int answer;
    int number,gps;

    printf("���Ա�ĳ��ȣ�");
    scanf("%d",&size);
    if((list=(int *)malloc(sizeof(int)*size))==NULL)
    {
        printf("list����ʧ�ܣ�\n");
        exit(EXIT_FAILURE);
    }
    for(int a=0;a<size;a++)
        list[a]=0;
    Printf(list,size);

    printf("��������С�ڵ���%d�����֣�����list��:\n",size);
    number_size=Input(list,size);
    printf("��������ɣ�\n");
    Printf(list,number_size);

    printf("����ȴ�����Ԫ��:");
    scanf("%d",&find);
    if((find=Search(list,find))==-1)
        printf("δ�ҵ���Ԫ�ء�\n");
    else 
        printf("�Ѿ��ҵ���Ԫ�أ�λ�ã�%d.\n",find);
    
    printf("������һ���ڵ�λ�ã��ѽڵ��ϵ����ִ��ݸ�find��\n");
    scanf("%d",&find);
    if(Find(list,find,&answer,number_size)==0)
    {
        printf("��ȡ�ڵ�Ԫ��ʧ��.\n");
        exit(EXIT_FAILURE);
    }
    printf("��ȡ�ɹ���\n");
    printf("��ȡԪ���ǣ�%d\n",answer);

    printf("������2�����֣���һ���ǲ����Ԫ�أ��ڶ����ǲ���Ľڵ�:");
    scanf("%d %d",&number,&gps);
    if(Insert(list,gps,number,size,number_size)==0)
    {
        printf("�ڵ����ʧ��.\n");
        exit(EXIT_FAILURE);
    }
    number_size++;
    printf("����Ԫ�سɹ���\n");
    Printf(list,number_size);

    printf("������һ���ڵ㣬����ɾ�����������ݸ�answer.\n");
    scanf("%d",&number);
    if(Delete(list,number,&answer,number_size)==0)
    {
        printf("ɾ������ʧ�ܣ�\n");
        exit(EXIT_FAILURE);
    }
    printf("ɾ������ɣ�\n");
    printf("ɾ����Ԫ���ǣ�%d\n",answer);
    number_size--;
    Printf(list,number_size);
    
    return 0;
}
void Printf(int *num,int size)
{
    int a;

    for(a=0;a<size;a++)
        printf("%d ",num[a]);
    printf("\n");
}
int Delete(int *num,int i,int *x,int number_size)
{
    int a;
    
    if(i>=number_size||i<0)
        return 0;
    (*x)=num[i];
    for(a=i;a<number_size-1;a++)
        num[a]=num[a+1];
    return 1;
}
int Insert(int *num,int i,int x,int size,int number_size)
{
    int a;
    
    if(number_size==size)
        return 0;
    if(i>=number_size)
        return 0;
    for(a=number_size;a>i;a--)
        num[a]=num[a-1];
    num[i]=x;
    return  1;
}
int Find(int *num,int i,int *x,int size)
{
    int a;

    if(i>=size||i<0)
        return 0;
    (*x)=num[i];
    return 1;
}
int Input(int *num,int x)
{
    int a;
    int count;
    
    a=count=0;
    while(scanf("%d",&num[a])!=EOF)
    {
        count++;
        a++;
    }
        
    return count--;
}
int Search(int *num,int x)
{
    int a,find;
    find=-1;

    for(a=0;a<x;a++)
        if(num[a]==x)
        {
            find=a;
            break;
        }

    return find;
}
