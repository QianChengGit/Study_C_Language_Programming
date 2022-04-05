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
	printf("请输入学生人数，并选择排列方式：a升序，d降序：");
	scanf("%d %c",&n,&style); 
	sort(a,n,style);
	return 0;
}

//第一段 
void sort(int a[10])
{
	int i,j,x;
	printf("请输入10个学生成绩：");
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

//第二段 
void sort(int a[],int n)
{
	int i,j,x;
	printf("\n请再输入n个学生成绩(输入-1结束输入):");
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

//第三段  
char sort(int a[],int n,char style)
{
	int i,j,x;
	printf("\n请再输入%d个学生成绩(输入-1结束输入):",n);
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
		}//降序 

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
		//升序 
}
