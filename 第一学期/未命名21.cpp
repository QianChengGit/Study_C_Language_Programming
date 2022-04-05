#include<stdio.h>
int main()
{
	int a[20],i;
	for(i=0;i<20;i++)
	{
		printf("请输入第%d个数：",i+1);
		scanf("%d",&a[i]);
		if(a[i]==-1)
		{
			printf("输入个数为：%d",i); 
			return 0;
		}
	}	
}
