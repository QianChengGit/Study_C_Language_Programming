#include<stdio.h>
int main()
{
	int i=1,n=1,j,x=0,a[100];
	printf("请输入一组数：");
	for(i=1;i<n+1;i++)
	{
		scanf("%d",&x);
		if(x<0)
		{
			break;
		}
		a[i]=x;
		n++;
	} 
	for(i=1;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x; 
			}
		}
	}
	for(i=1;i<=n-1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
