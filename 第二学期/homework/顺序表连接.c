#include<stdio.h>
#include<stdlib.h>
int creat(int a[])
{
	int i=0,x;
	scanf("%d",&x);
	while(x!=0)//输入数据 ，以0结束 
	{
		a[i]=x;
		//x放进数组里 
		scanf("%d",&x);
		i++;
	}
	return(i);//返回数组元素个数 
}

void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	  printf("%d ",a[i]);
	printf("\n\n");
}

int connet(int a[],int b[],int c[],int na,int nb)
{
	int nc;
	int i=0,j=0,k=0;
	while(i<na && j<nb)//a、b数组均未结束 
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<na)
	{
		c[k++]=a[i++];
	}
	while(j<nb)
	{
		c[k++]=b[j++];
	}
	nc=na+nb;
	return(nc);
}

main()
{
	int a[10],b[10],c[20];
	int na,nb,nc;
	
	printf("建立a数组：输入数据，以0结束。\n");
	na=creat(a);
	printf("a数组有%d个元素：\n",na);
	print(a,na);
	
	printf("建立b数组：输入数据，以0结束。\n");
	nb=creat(b);
	printf("b数组有%d个元素：\n",nb);
	print(b,nb);
	
	nc=connet(a,b,c,na,nb);
	printf("c数组有%d个元素：\n",nc);
	print(c,nc);
}
