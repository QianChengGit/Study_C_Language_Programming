#include<stdio.h>
int d(int x[],int n);
void p(int y[],int n);
int s(int x[],int n,int ff);
void t(int a[],int n);
int main()
{
	int a[10],x,*ps,i;
	d(a,10);
	ps=&a[i];
	p(a,10);
	
	scanf("%d",&x);
	int index=s(a,10,x);
	if(index==-1)
		printf("%d 未找到！\n",x);
	else
		printf("%d 的位置是%d!\n",x,index);
	t(a,10);
	p(a,10);
	return 0;
}

int d(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	return i;	
}

void p(int y[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%5d",y[i]);
	printf("\n");
} 

int s(int x[],int n,int ff)
{
	int i,result=-1;
	for(i=0;i<n;i++)
	{
		if(x[i]==ff)
		{
			result=i;
			break;
		}
	}
	return result; 
}

void t(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			} 
		}
	}
}




