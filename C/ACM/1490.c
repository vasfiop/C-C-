/*
Description
ָ�����鶼���㶨����ˣ��Ϳ���᲻���ã�ע��������ϵͳ�У�һ������ռ�����ֽڣ�
������ƽʱ����ϵͳ�е������ֽڣ����������Լ�����������ʱ�Ƚ�ǰ2λ�����ύϵͳʱӦ�Ƚϴ���ǰ3λ��������ǰ2λ
char *strs[407]={"��","Ǯ","��","��","��","��","֣","��","��","��","��",
"��","��","��","��","��","��","��","��","��","��","��","ʩ","��","��",
"��","��","��","��","κ","��","��","��","л","��","��","��","ˮ","�",
"��","��","��","��","��","��","��","��","��","³","Τ","��","��","��",
"��","��","��","��","��","Ԭ","��","ۺ","��","ʷ","��","��","��","�",
"Ѧ","��","��","��","��","��","��","��","��","��","��","��","��","��",
"��","ʱ","��","Ƥ","��","��","��","��","��","Ԫ","��","��","��","ƽ",
"��","��","��","��","��","Ҧ","��","տ","��","��","ë","��","��","��",
"��","��","�","��","��","��","��","̸","��","é","��","��","��","��",
"��","��","ף","��","��","��","��","��","��","ϯ","��","��","ǿ","��",
"·","¦","Σ","��","ͯ","��","��","÷","ʢ","��","��","��","��","��",
"��","��","��","��","��","��","��","��","��","��","��","֧","��","��",
"��","¬","Ī","��","��","��","��","��","��","Ӧ","��","��","��","��",
"��","��","��","��","��","��","��","��","ʯ","��","��","ť","��","��",
"��","��","��","��","½","��","��","��","��","�","��","��","��","��",
"��","��","��","��","��","��","��","��","��","��","��","��","��","��",
"��","��","��","��","��","ɽ","��","��","��","�","��","ȫ","ۭ","��",
"��","��","��","��","��","��","��","��","��","��","��","��","��","��",
"��","��","��","��","ղ","��","��","Ҷ","��","˾","��","۬","��","��",
"��","ӡ","��","��","��","��","̨","��","��","��","��","��","��","׿",
"��","��","��","��","��","��١","��","��","��","˫","��","ݷ","��","��",
"̷","��","��","��","��","��","��","��","Ƚ","��","۪","Ӻ","ȴ","�","ɣ",
"��","�","ţ","��","ͨ","��","��","��","��","ۣ","��","��","ũ","��","��",
"ׯ","��","��","��","��","��","Ľ","��","��","ϰ","��","��","��","��","��",
"��","��","��","��","��","��","��","��","��","��","��","��","��","��","��",
"��","��","��","��","��","»","��","��","Ź","�","��","��","ε","Խ","��",
"¡","ʦ","��","��","��","��","��","��","��","��","��","��","��","��","��",
"��","��","��","��","ɳ","ؿ","��","��","��","��","��","��","��","��","��","��",
"��","��","��","��","Ȩ","��","��","��","��","��"};
Input
����n����������n����n������
Output
���ÿ���˵����ϵı��
Sample Input
4
�Ա�ɽ
Ǯ��ǿ
�����
������
Sample Output
1
2
3
4
*/
#include<stdio.h>
#include<stdlib.h>
char *strs[407]={"��","Ǯ","��","��","��","��","֣","��","��","��","��","��",
"��","��","��","��","��","��","��","��","��","��","ʩ","��","��","��","��",
"��","��","κ","��","��","��","л","��","��","��","ˮ","�",
"��","��","��","��","��","��","��","��","��","³","Τ","��","��","��",
"��","��","��","��","��","Ԭ","��","ۺ","��","ʷ","��","��","��","�",
"Ѧ","��","��","��","��","��","��","��","��","��","��","��","��","��",
"��","ʱ","��","Ƥ","��","��","��","��","��","Ԫ","��","��","��","ƽ",
"��","��","��","��","��","Ҧ","��","տ","��","��","ë","��","��","��",
"��","��","�","��","��","��","��","̸","��","é","��","��","��","��",
"��","��","ף","��","��","��","��","��","��","ϯ","��","��","ǿ","��",
"·","¦","Σ","��","ͯ","��","��","÷","ʢ","��","��","��","��","��",
"��","��","��","��","��","��","��","��","��","��","��","֧","��","��",
"��","¬","Ī","��","��","��","��","��","��","Ӧ","��","��","��","��",
"��","��","��","��","��","��","��","��","ʯ","��","��","ť","��","��",
"��","��","��","��","½","��","��","��","��","�","��","��","��","��",
"��","��","��","��","��","��","��","��","��","��","��","��","��","��",
"��","��","��","��","��","ɽ","��","��","��","�","��","ȫ","ۭ","��",
"��","��","��","��","��","��","��","��","��","��","��","��","��","��",
"��","��","��","��","ղ","��","��","Ҷ","��","˾","��","۬","��","��",
"��","ӡ","��","��","��","��","̨","��","��","��","��","��","��","׿",
"��","��","��","��","��","��١","��","��","��","˫","��","ݷ","��","��",
"̷","��","��","��","��","��","��","��","Ƚ","��","۪","Ӻ","ȴ","�","ɣ",
"��","�","ţ","��","ͨ","��","��","��","��","ۣ","��","��","ũ","��","��",
"ׯ","��","��","��","��","��","Ľ","��","��","ϰ","��","��","��","��","��",
"��","��","��","��","��","��","��","��","��","��","��","��","��","��","��",
"��","��","��","��","��","»","��","��","Ź","�","��","��","ε","Խ","��",
"¡","ʦ","��","��","��","��","��","��","��","��","��","��","��","��","��",
"��","��","��","��","ɳ","ؿ","��","��","��","��","��","��","��","��","��","��",
"��","��","��","��","Ȩ","��","��","��","��","��"};
int main(int argc, char const *argv[])
{
    int n;
    char str[10];
    int a,b;

    scanf("%d",&n);
    fflush(stdin);
    for(a=0;a<n;a++)
    {
        gets(str);
        fflush(stdin);
        for(b=0;b<407;b++)
            if(strs[b][0]==str[0])
            {
                printf("%d\n",b+1);
                break;
            }
    }

    return 0;
}
