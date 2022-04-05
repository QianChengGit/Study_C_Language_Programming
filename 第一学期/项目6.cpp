#include<stdio.h>
#include<process.h>
#include<string.h>
void displayMenu();
int login();
int inputScore(int *ps,int length);
void outputScore(int *ps,int length);
int queryScore(int *ps,int length,int xScore);
void sortScore(int *ps,int length);
int main()
{
	int score[100];
	int *ps,length,xScore,x,j;
	ps=score;

	if(login()==0)
	{
		printf("口令错误，不允许进入本系统!\n");
		exit(0);
	}//口令
	
	displayMenu();//菜单
	 
	j=inputScore(ps,length);//录入
	displayMenu();//菜单
	 outputScore(ps,length);//输出
	
	scanf("%d",&x);
	int index=queryScore(ps,length,xScore);//查询 
	if(index==-1)
		printf("%d 未找到！\n",x);
	else
		printf("%d 的位置是%d! \n",x,index);


//	sortScore(ps,length);//排序 
	return 0;
} 

int login()
{
	char password[8];
	static char key[8]="wszx520";
	int count=0;
	int s=0;
	do
	{
		count++;
		printf("请输入口令(wszx520)：");
    	scanf("%s",password);
		if(strcmp(password,key)==0)
		{
			s=1;
		}
	}
	while(s==0 && count<2);
	return s;
}//口令 

void displayMenu()
{
	int *ps,length,xScore,i,j;
	length=j-1;//(将j的值传递过来并赋值给length) 
	printf("**************************\n");
	printf("*    学生成绩管理系统    *\n");
	printf("**************************\n");
	printf("*         1.录入         *\n");
	printf("*         2.输出         *\n");
	printf("*         3.查询         *\n");
	printf("*         4.排序         *\n");
	printf("**************************\n");
	printf("*         5.结束         *\n");
	printf("**************************\n");
		
	int x;
	printf("输入选择(1,2,3,4,5),输入5退出:\n");
	x=getchar();
	while(x!=0)
    {
		 
		char choice;
		scanf("%c",&choice);
	switch(choice)
	{ 
		case'1':inputScore(ps,length);break;
		case'2':outputScore(ps,length);break;
		case'3':queryScore(ps,length,xScore);break;	
		case'4':sortScore(ps,length);break;
		
	}
	printf("输入选择(1,2,3,4,5),输入5退出:\n");	
    }//菜单循环  
	
}//菜单 

int inputScore(int *ps,int length)
{
	int tmp;
	printf("请输入学生的成绩：\n");
	do
	{
		printf("输入第%d个学生成绩:\n",length+1);
		scanf("%d",&tmp);
		if(tmp>=0 && tmp<=100)
		{
			*(ps+length)=tmp;
			length++;
		} 
	}
	while(tmp!=-1 );
	return length;
}//录入 

void outputScore(int *ps,int length)
{
	int i,j;
	length=j-1;
	printf("录入的成绩为：");
	for(i=0;i<length;i++)
	{
		printf("%d ",*ps++);
	} 
}//输出 

int queryScore(int *ps,int length,int xScore)
{
	int i,result=-1;
	int a[i];
	a[i]=*ps;
	for(i=0;i<length;i++)
	{
		if(a[i]==xScore)
		{
			result=i;
			break;
		}
	}
	return result;
//	int i,j=0,find=0;
//	int  score[i];
//	score[i]=*ps;
//	for(i=0;i<length;i++)
//	{
//		if(xScore==score[i])
//		{
//			findScore[j]=i;
//			j++;
//			find=1;
//		}
//	}
//	if(find==0)
//	{
//		return -1;
//	}
//	else
//	{
//		return j;
//	}
	
	
}

//查询 

void sortScore(int*ps,int length)
{
	//int i,j,x;
		//if(style=='d')
		//{
			//for(i=0;i<n-1;i++)
			//{
				//for(j=i+1;j<n;j++)
			//	{
				//	if(a[i]<a[j])
				///	{
				///		x=a[i];
				//		a[i]=a[j];
				//		a[j]=x;
				//	}
			//	}	
			//}
			//for(i=0;i<n;i++)
		//	{
		//		printf(" %d",a[i]);
		//	}	
		//}//降序 

		//if(style=='a')
	//	{
	//		for(i=0;i<n-1;i++)
	///		{	
	//			for(j=i+1;j<n;j++)
	//			{
	//				if(a[i]>a[j])
	//				{
	//					x=a[i];
	//					a[i]=a[j];
	//					a[j]=x;
	//				}
	//			}
	//		}
	///		for(i=0;i<n;i++)
	//		{
	//			printf(" %d",a[i]);
	//		}	
	//	}	
		//升序 
}//排序 

