#include<stdio.h>
int main()
{
	int low;
	printf("«Î ‰»Î–– ˝\n");
	scanf("%d",&low);
	for(int i=1;i<=low;i++)
	{
		for(int j=low-1;j>=i;j--)
		{
			printf(" ");
		}
		for(int j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
