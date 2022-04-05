#include<stdio.h>
#define MAX 20

int n;
void creat(int a[])
{
	int i;
	printf("输入元素个数n:");
	scanf("%d",&n);
	printf("输入%d个元素：\n",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	} 
}


void out(int a[])
{
	int i;
	printf("数组元素有：\n");
	for(i=1;i<=n;i++)
	{
		printf("%5d",a[i]);
	}
	
}

void ins(int a[],int i,int x)
{
	int j;
	for(j=i;j<=n+1;j++)
	{
		a[i+1]=a[i];
	}
	a[i]=x;
	n=n+1;
}



void del(int a[],int i) 
{
	int j;
	for(j=i;j<=n-1;j++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
}

main()
{
	int v[MAX];
	int i,x,y;
    creat(v);
    out(v);
    printf("请输入插入位置和数据"); 
	//输入i和x
	scanf("%d %d",&i,&x);
	ins(v,i,x);
	out(v);
	printf("请输入删除位置");
	// 输入i 
	scanf("%d",&i); 
	del(v,i);//,&y
	printf("删除的元素是：",y);
	out(v);
}
