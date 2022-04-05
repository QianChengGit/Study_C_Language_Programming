#include<stdio.h>
#include<time.h>
#include<stdlib.h> 
int main()
{
	int x,i;
	srand((int)time(0));
	x=rand()%100;
	if(x>=1&&x<=100)
	{ 
		for(i=1;i<=100;i++)
		{
			printf("%d\t",x);
		} 
	} 
	return 0;
	
} 
