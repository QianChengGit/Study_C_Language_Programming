#include<stdio.h>
int main()
{
	int i,j,x;
	int a[11];
	printf("������10��ѧ���ɼ���");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		{
			break;
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]<a[j+1])
			{
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf(" %d",a[i]);
	} 
	printf("\n��������һ��ѧ���ɼ�:");
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[j]<a[j+1])
			{
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	for(i=0;i<11;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	printf("����");
	printf("\n");  
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i;j++)//ð�ݷ����� 
		{
			if(a[j]>a[j+1])
			{
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	for(i=0;i<11;i++)
	{
		printf(" %d",a[i]);
	}  
	return 0;
}
