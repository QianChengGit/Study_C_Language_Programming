# include<stdio.h>
#include<stdlib.h>
# include<conio.h>

	void add();
	void substract();
	void divide();
	void multiplay();
	void complement();
	int  getSum();
	double newSumFactor(int n);
int main()
{
	int password;
	int sumResult;
	printf("请输入口令(123):");
	scanf("%d",&password);
	if (password==123)
	printf("密码正确，欢迎使用计算器！\n");
	else
	printf("密码不正确，不能使用计算器！\n"),
	exit(0);//
	printf("+==========================+\n");
	printf("|     A.   加法            |\n"); 
	printf("|     B.   减法            |\n");
	printf("|     C.   乘法            |\n");
	printf("|     D.   除法            |\n");
	printf("|     E.   求余            |\n");
	printf("|     F.   累加            |\n");
	printf("|     G.   阶乘            |\n");
	printf("|     H.   阶乘累加        |\n");
	printf("+--------------------------|\n");
	printf("|     I.   退出            |\n");
	printf("+==========================+\n");
	getchar();//
	
	char choice;
	int n,result; 
	printf("请输入算法选择:");
	choice=getchar();
	switch(choice)
	{ 
		case'A':add();break;
		case'B':substract();break;
		case'C':multiplay();break;
		case'D':divide();break;
		case'E':complement();break;
		case'F':getSum();break;
		case'H':
			printf("请输入一个整数n:");
			scanf("%d",&n);
			result=newSumFactor(n);
			printf("1!+2!+......+%d!=%d\n",n,result);
			break;
		default:printf("输入错误！\n");break;
	}//
	
	int x;
	x=getchar();
	printf("输入1继续,输入I退出:\n");
	while(x!=0)
	{	char choice;
		int n,result;
		
		scanf("%c",&choice);
	switch(choice)
	{ 
		case'A':add();break;
		case'B':substract();break;
		case'C':multiplay();break;
		case'D':divide();break;
		case'E':complement();break;
		case'F':getSum();break;
		case'H':
			printf("请输入一个整数n:");
			scanf("%d",&n);
			result=newSumFactor(n);
			printf("1!+2!+......+%d!=%d\n",n,result);
			break;
		case'I':return 0;
	}
	
	}//菜单循环 

	 
}			//主菜单模块


void add()
{
	int number1,number2;
	int sum;
	printf("请输入两个数:");
	scanf("%d%d",&number1,&number2);
	sum=number1+number2;
	printf("%d+%d=%d\n",number1,number2,sum);
	 
}			//加法运算



void substract()
{
	int number1,number2;
	int sum;
	printf("请输入两个数:");
	scanf("%d%d",&number1,&number2);
	sum=number1-number2;
	printf("%d-%d=%d\n",number1,number2,sum);
	
}			//减法运算



void divide()
{
	int number1,number2;
	float quotient;
	printf("请输入两个数:");
	scanf("%d%d",&number1,&number2);
	quotient=(float) number1/(float) number2;
	printf("%d/%d=%-10.2f \n",number1,number2,quotient);
}			//除法运算



void multiplay()
{
	int number1,number2;
	float product;
	printf("请输入两个数:");
	scanf("%d%d",&number1,&number2);
	product=(float) number1*(float) number2;
	printf("%d*%d=%-10.2f\n",number1,number2,product);
	
}			//乘法运算


void complement()
{
	int number1,number2;
	int sum;
	printf("请输入两个数:");
	scanf("%d %d",&number1,&number2);
	sum=number1%number2;
	printf("%d\n",sum);
	
}			//求余运算 


int getSum()
{
	int x,sum=0,n=0;
	printf("请输入10个数累加:\n");
	while(n<10)
	{
		scanf("%d",&x);
		sum+=x;
		n++;
	}
	printf("%d",sum);
	return sum;
}			//累加运算 

double newSumFactor(int n)
{

	int s,f;
	int i,j;
	s=0;
	for(i=1;i<=n;i++)
	{
		f=1;
		for(j=1;j<=i;j++)
		{
			f*=j;
		}
		s+=f;
	}
	return s;
}//阶乘累加 








 
