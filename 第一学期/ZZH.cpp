# include<stdio.h>



int main()
{
	int password;
	printf("请输入口令:");
	scanf("%d",&password);
	if (password==123 || password==111)
		printf("密码正确，欢迎使用计算器！");
	else
		printf("密码不正确，不能使用计算器！");
		
	printf("+==========================+\n");
	printf("|==计==算==器==主==菜==单==|\n");
	printf("+==========================+\n");
	printf("|     A.   加法            |\n");
	printf("|     B.   减法            |\n");
	printf("|     C.   乘法            |\n");
	printf("|     D.   除法            |\n");
	printf("+--------------------------|\n");
	printf("|     E.   退出            |\n");
	printf("+==========================+\n");	
	
	char choice;
	void add();
	void substract();
	void divide();
	void multiplay(); 
	printf("请输入选择:");
	choice=getchar();
	switch(choice)
	{ 
		case'A':add();break;
		case'B':substract();break;
		case'C':multiplay();break;
		case'D':divide();break;
		
		default:printf("输入错误！\n");break;
	}
	 
	return 0;
	 
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
	printf("%d/%d=%5.1f \n",number1,number2,quotient);
}			//除法运算



void multiplay()
{
	int number1,number2;
	float product;
	printf("请输入两个数:");
	scanf("%d%d",&number1,&number2);
	product=(float) number1*(float) number2;
	printf("%d*%d=%5.1f\n",number1,number2,product);
	
}			//乘法运算



 









 
