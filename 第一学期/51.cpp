#include<stdio.h>
#define N 100
void reverse(int a[],int n);
void input(int a[],int n);
int main()
{
	int a[N];
	input(a,51);
	reverse(a,51);
	return 0;
} 


void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=i;
	}
}


void reverse(int a[],int n)
{
	int i;
	printf("逆序输出的数组为：\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%-4d\t",a[i]);
	}
}
