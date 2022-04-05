#include<stdio.h>
int main()
{
	int x,m,n,i,sum,s,h=0;
	for(x=100;x<=1000;x++)
	{
		m=x/100;
		n=x%100/10;
		i=x%100%10;
		sum=m+n+i;
		s=sum%15;
		if(s==0)
		{	
			printf("%d \t",x);
			h++;
			if(h%10==0)
			{
				printf("\n");	
			}	
		}
	}
	return 0;
} 
