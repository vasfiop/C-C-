#include"all_file.h"

struct names//�û�������
{
	char first_name[40];
	char last_name[40];
	char name;
};

struct world//�û��ĵ�һ���ṹ
{
	struct names three;
	int number;
};
void maths(struct world modes);//a mode
void math(struct world *modes);//b mode
int main(void)
{
	struct world modes=
	{
		"Dribble",
		"Flossie",
		'M',
		302039823
	};
	maths(modes);
	math(&modes);

	return 0;

}
void maths(struct world modes)
{
	printf("%s, %s %c. -- %d\n",modes.three.first_name,modes.three.last_name,modes.three.name,modes.number);
}
void math(struct world *modes)
{
	printf("%s, %s %c. -- %d\n",modes->three.first_name,modes->three.last_name,modes->three.name,modes->number);
}
