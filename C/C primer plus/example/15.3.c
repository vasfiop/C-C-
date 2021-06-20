#include<stdio.h>
#include<stdbool.h>

//线的样式
#define SOLID	0
#define DOTTED	1
#define DASHED	2
//三原色
#define BLUE	4 //蓝100
#define GREEN	2 //绿010
#define RED		1//红001
//混合色
#define BLACK 	0 //黑色000
#define YELLOW	(RED|GREEN)//011 位操作 或运算符
#define MAGENTA (RED|BLUE)//101
#define CYAN	(GREEN|BLUE)//110
#define WHITE	(RED|GREEN|BLUE)//111

const char *colors[8]={"black","red","green","yellow","blue","magenta","cyan","white"};

struct box_props
{
	bool opaque:1;
	unsigned int fill_color:3;
		unsigned int:4;
	bool show_border:1;
	unsigned int border_color:3;
	unsigned int border_style:2;
		unsigned int:2;
};

void show_settings(const struct box_props *pb);

int main(void)
{
	//初始化box_props 结构
	struct box_props box={true,YELLOW,true,GREEN,DASHED};

	printf("Original box settings:\n");
	show_settings(&box);

	box.opaque=false;
	box.fill_color=WHITE;
	box.border_color=MAGENTA;
	box.border_style=SOLID;
	printf("\nModified box settings:\n");
	show_settings(&box);

	return 0;
}
void show_settings(const struct box_props*pb)
{
	printf("Box is %s.\n",pb->opaque==true?"opaque":"transparent");
	printf("The fill color is %s.\n",colors[pb->fill_color]);
	printf("Border %s.\n",pb->show_border==true?"shown":"not down");
	printf("The border color is %s.\n",colors[pb->border_color]);
	printf("The border style is ");
	switch(pb->border_style)
	{
		case SOLID:	printf("solid.\n");break;
		case DOTTED:printf("dotted.\n");break;
		case DASHED:printf("dashed.\n");break;
		default:	printf("unknown type.\n");
	}
}
