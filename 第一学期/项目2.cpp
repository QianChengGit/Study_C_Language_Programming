#include<stdio.h>
void sort(int a[10]);
void sort(int a[],int n);
char sort(int a[],int n,char style); 
int main()
{
	int i,j,n;
	int a[100];
	char style;
	
	sort(a);
	sort(a,n);
	printf("\n");
	printf("������ѧ����������ѡ�����з�ʽ��a����d����");
	scanf("%d %c",&n,&style); 
	sort(a,n,style);
	return 0;
}

//��һ�� 
void sort(int a[10])
{
	int i,j,x;
	printf("������10��ѧ���ɼ���");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		{
			break;
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf(" %d",a[i]);
	} 
}

//�ڶ��� 
void sort(int a[],int n)
{
	int i,j,x;
	printf("\n��������n��ѧ���ɼ�(����-1��������):");
	for(i=0;i<i+1;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		{
			break;
		}
		n=i+1;
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}

//������  
char sort(int a[],int n,char style)
{
	int i,j,x;
	printf("\n��������%d��ѧ���ɼ�(����-1��������):",n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		{
			break;
		}
		n=i+1;
	}
	
		if(style=='d')
		{
			for(i=0;i<n-1;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(a[i]<a[j])
					{
						x=a[i];
						a[i]=a[j];
						a[j]=x;
					}
				}	
			}
			for(i=0;i<n;i++)
			{
				printf(" %d",a[i]);
			}	
		}//���� 

		if(style=='a')
		{
			for(i=0;i<n-1;i++)
			{	
				for(j=i+1;j<n;j++)
				{
					if(a[i]>a[j])
					{
						x=a[i];
						a[i]=a[j];
						a[j]=x;
					}
				}
			}
			for(i=0;i<n;i++)
			{
				printf(" %d",a[i]);
			}	
		}	
		//���� 
}
