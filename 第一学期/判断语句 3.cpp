#include<stdio.h>
int main()
{
	int number1,number2,sum;
	printf("������������:");
	scanf("%d %d",&number1,&number2);
	sum=number1%number2;
	if(sum==0)
	printf("��һ�����ǵڶ������ı���!");
	else
	printf("��һ�������ǵڶ������ı���!");
	return 0;
	
}
