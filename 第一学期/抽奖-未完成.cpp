#include<stdio.h>
void lottery(); 
int main()
{
	lottery;
	return 0;
}


void lottery()
{
	int ur1,ur2,ur3,ur4,ur5,ur6;
	do
	{
		printf("�������һ��������룺");
		scanf("%d",&ur1);
	}
	while(1)
	{
		if(ur1>0 && ur1<34)
			continue;
		else
			printf("����������");	
	}
	do
	{
		printf("������ڶ���������룺");
		scanf("%d",&ur2);
	}
	while(1)
	{
		if(ur2>0 && ur2<34 && ur2!=ur1)
			continue;
		else
			printf("����������");	
	}
}
