#include<stdio.h>
#define MAX 20

int n;
void creat(int a[])
{
	int i;
	printf("����Ԫ�ظ���n:");
	scanf("%d",&n);
	printf("����%d��Ԫ�أ�\n",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	} 
}


void out(int a[])
{
	int i;
	printf("����Ԫ���У�\n");
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
    printf("���������λ�ú�����"); 
	//����i��x
	scanf("%d %d",&i,&x);
	ins(v,i,x);
	out(v);
	printf("������ɾ��λ��");
	// ����i 
	scanf("%d",&i); 
	del(v,i);//,&y
	printf("ɾ����Ԫ���ǣ�",y);
	out(v);
}
