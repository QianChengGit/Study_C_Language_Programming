#include<stdio.h>


int main()
{
	int i=0,j=0,x;
	scanf("%d",&x);
	while(x!=0)
	{
		if(x>0)
		i++;
		else
		j++;
		scanf("%d",&x);
	}
	printf("i=%d  j=%d",i,j);
	return 0;
	
}  
