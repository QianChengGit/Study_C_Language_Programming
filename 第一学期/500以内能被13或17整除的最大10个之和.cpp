#include<stdio.h>
int main()
{
	int x,y,n=10,m=0,i=0;
	for(x=1;x<=500;x++)
	{
		y=x%13 && x%17;
		if(y==0)
		{
			i++;
			if(i>=55)
			{
				m=m+x; 
				printf("%d ",x);
			}
		}
	}
	printf("\n后10个之和为:%d",m);
	return 0;
} 
