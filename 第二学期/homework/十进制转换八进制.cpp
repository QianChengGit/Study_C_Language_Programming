#include<stdio.h>
int main()
{
	int s[20];
	int n,e;
	int top=0;
	scanf("%d",&n);
	while(n)
	{
		s[top++]=n%8;
		n=n/8;
	}
	while(top!=0)
	{
		e=s[--top];
		printf("%d ",e);
	}
	return 0;
}
