#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int main()
{
	int i,x,n,j=1;
	srand(time(0));
	n=rand()%100+1;
	printf("%d\n",n);
	printf("第1次：\n"); 
	scanf("%d",&x);
	for(i=1;i<=j;i++)
	{
		
		if(x!=n)
		{
			printf("第%d次：\n",j+1);
			scanf("%d",&x); 
		} 
		else if(x==n) 
		{
			printf("恭喜你猜对了！\n"); 
			break; 
		}
		j++;
		
	}
	printf("正确答案是%d",x);
	return 0; 
} 
