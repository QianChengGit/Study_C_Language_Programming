#include<stdio.h>
int main()
{
	int number1,number2,sum;
	printf("请输入两个数:");
	scanf("%d %d",&number1,&number2);
	sum=number1%number2;
	if(sum==0)
	printf("第一个数是第二个数的倍数!");
	else
	printf("第一个数不是第二个数的倍数!");
	return 0;
	
}
