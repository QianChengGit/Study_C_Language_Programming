#include<stdio.h>
void stor(int stu[],int *ph);
char*myStrcpy(char*str1,char*str2);
int main()
{
	int stu[10],i,x;
	int *ph;
	
	char tar1[100],tar2[100];
	printf("请输入字符串：\n");
	//gets(tar1);
	gets(tar2);
	myStrcpy(tar1,tar2);
	printf("复制后的字符串str1:\n");
	puts(tar1);
	//字符串 
	
	printf("请输入10个学生成绩：\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&stu[i]);
	} 
	ph=&stu[0];
	//用指针存放数组 
	printf("输出指针存放的数组:\n");
	for(i=0;i<10;i++)
	printf("%d ",*ph++);
	printf("\n");
	// 用指针输出数组 
	ph=&stu[9];
	printf("输出指针排序的数组:\n");
	for(i=0;i<10;i++)
	printf("%d ",*ph--);
	printf("\n");
	//用指针排序 
	printf("输出指针函数排序的数组:\n");
	stor(stu,ph);
	//调用指针函数
	
	return 0;
}


void stor(int stu[],int *ph)
{
	int i;
	ph=&stu[9];
	for(i=0;i<10;i++)
	printf("%d ",*ph--);
	printf("\n");
}


char*myStrcpy(char*str1,char*str2)
{
	char *p;
	p=str1;
	while(*str2!='\0')
	{
		*p++=*str2++;//拷贝字符串 
	}
	*p='\0';
	return str1;
}

