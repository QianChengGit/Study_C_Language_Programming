#include<stdio.h>
int main()
{
	int a[20],i;
	for(i=0;i<20;i++)
	{
		printf("�������%d������",i+1);
		scanf("%d",&a[i]);
		if(a[i]==-1)
		{
			printf("�������Ϊ��%d",i); 
			return 0;
		}
	}	
}
