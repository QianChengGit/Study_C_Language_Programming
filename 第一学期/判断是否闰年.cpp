#include<stdio.h>
int main()
{
	int number1,number2=4,number3=100;
	int sum,sum2;
	printf("请输入年份:");
	scanf("%d",&number1);
	sum=number1%number2 ;
	sum2=number1%number3;
	printf("%d\n",sum);
	printf("%d\n",sum2);
	if(sum==0&&sum2!=0)
    printf("是闰年\n");
	else
	printf("不是闰年\n");
	return 0; 
}


