#include<stdio.h>
int main()
{
	int number1,number2=4,number3=100;
	int sum,sum2;
	printf("���������:");
	scanf("%d",&number1);
	sum=number1%number2 ;
	sum2=number1%number3;
	printf("%d\n",sum);
	printf("%d\n",sum2);
	if(sum==0&&sum2!=0)
    printf("������\n");
	else
	printf("��������\n");
	return 0; 
}


