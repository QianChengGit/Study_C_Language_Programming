#include<stdio.h>
int main()
{
	int x,y;
	float b;
	printf("��ѡ���ͣ�1=������2=������3=ɣ����):\n");
	scanf("%d",&y);
	if(y!=1&&y!=2&&y!=3)
	printf("�������!");
	printf("�����빫����:");
	scanf("%d",&x);

	if(y==1)
	{
		if(x<=3)
		b=7;
		else
		b=2.1*(x-3)+7;
		printf("%.1f",b);}
	else if(y==2)
	{
		if(x<=3)
		b=8;
		else
		b=2.4*(x-3)+8;
		printf("%.1f",b);}	
	else
	{
		if(x<=3)
		b=9;
		else
		b=2.7*(x-3)+9;
		printf("%.1f",b);}
	return 0;
	
}
