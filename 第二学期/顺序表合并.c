#include<stdio.h>
#include<stdlib.h>
int creat(int a[])
{
	int i=0,x;
	scanf("%d",&x);
	while(x!=0)//�������� ����0���� 
	{
		a[i]=x;
		//x�Ž������� 
		scanf("%d",&x);
		i++;
	}
	return(i);//��������Ԫ�ظ��� 
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
	while(i<na && j<nb)//a��b�����δ���� 
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
	
	printf("����a���飺�������ݣ���0������\n");
	na=creat(a);
	printf("a������%d��Ԫ�أ�\n",na);
	print(a,na);
	
	printf("����b���飺�������ݣ���0������\n");
	nb=creat(b);
	printf("b������%d��Ԫ�أ�\n",nb);
	print(b,nb);
	
	nc=connet(a,b,c,na,nb);
	printf("c������%d��Ԫ�أ�\n",nc);
	print(c,nc);
}
