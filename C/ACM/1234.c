/*
Description
盐是对人类生存具有重要意义的物质之一。
当中国古人从肉食为主转向谷食为主的时候，吃盐的需求就发生了，因为动物血肉里面包含有足够人体所需的盐分，
而谷 物本身不包含盐分。在长达几十万年的旧石器时代，人类以狩猎为生，身体早已适应了肉食带来的微量元素组合。
到了新石器时代晚期的2300 BC前后，在今鲁西豫东地区，中国古人才发展出五谷农业并开始以谷食为主的生活，这样，
以食盐为基本调味品的饮食改变了原先适应已久的微量元素组合，直接 导致了与吃盐有关的新型疾病的产生。为了治疗吃盐引起的新型疾病，针灸术就应运而生了。
盐的英文是salt，现在极缺，请找出输入中所有包含salt的行，不管大小写，是salt就要。
Input
若干行包含salt SALT sAlt等等的英文
Output
所有包含salt这个部分的行
Sample Input
Salt is necessary
Water is not sAlt
as salT as you can make it
soy-bean sauce can be saLt
soy-bean sauce only
bean soy-bean sauce 
Sample Output
Salt is necessary
Water is not sAlt
as salT as you can make it
soy-bean sauce can be saLt
*/
#include<stdio.h>
#include<string.h>
char word[6]="salt";
int main(int argc, char const *argv[])
{
    char str[1000][1000];
    int n;
    int a,b,c;
    int find;

    scanf("%d",&n);
    fflush(stdin);
    for(a=0;a<n;a++)
    {
        gets(str[a]);
        fflush(stdin);
    }
    for(a=0;a<n;a++)
        for(b=0;b<strlen(str[a]);b++)
            if(str[a][b]=='s'||str[a][b]=='S')
            {
                for(c=1,b++,find=1;c<4;c++,b++)
                {
                    if(str[a][b]!=word[c]&&str[a][b]!=word[c]-32)
                        find=0;
                }
                b--;
                if(find)
                {
                    puts(str[a]);
                    b=strlen(str[a]);
                }
            }

    return 0;
}
