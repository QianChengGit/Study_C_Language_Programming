#include<stdio.h>
int main()
{
	int i,n,m=0,x,y,s=0;
	for(i=1;i<=300;i++)
	{
		n=i%2;
		if(n==0)
		{
			x=i%7 && i%17;
			if(x==0)
			{
				printf("%d\t",i);
				m++;
				y=m%5;
				if(y==0)
				{
					printf("\n");
				}
				s=s+i;	
			}			
		}				
	}
	printf("\ns=%d",s);
	return 0;
} 
