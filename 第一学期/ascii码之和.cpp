#include<stdio.h>
int main()
{	
	char ch1,ch2,x,y;
	int ch3,a,b;
	printf("请输入两个数字:");
	scanf("%c %c",&a,&b);
	ch1=a;
	ch2=b;
	printf("%c=%d\n%c=%d\n",ch1,ch1,ch2,ch2);
	x=ch1;
	y=ch2;
	ch3=x+y;
	printf("两个数字字符对应的ascii码之和为：%d",ch3);	
	return 0;	
}
