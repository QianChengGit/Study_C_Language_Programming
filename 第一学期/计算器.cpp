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
	printf("���������(123):");
	scanf("%d",&password);
	if (password==123)
	printf("������ȷ����ӭʹ�ü�������\n");
	else
	printf("���벻��ȷ������ʹ�ü�������\n"),
	exit(0);//
	printf("+==========================+\n");
	printf("|     A.   �ӷ�            |\n"); 
	printf("|     B.   ����            |\n");
	printf("|     C.   �˷�            |\n");
	printf("|     D.   ����            |\n");
	printf("|     E.   ����            |\n");
	printf("|     F.   �ۼ�            |\n");
	printf("|     G.   �׳�            |\n");
	printf("|     H.   �׳��ۼ�        |\n");
	printf("+--------------------------|\n");
	printf("|     I.   �˳�            |\n");
	printf("+==========================+\n");
	getchar();//
	
	char choice;
	int n,result; 
	printf("�������㷨ѡ��:");
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
			printf("������һ������n:");
			scanf("%d",&n);
			result=newSumFactor(n);
			printf("1!+2!+......+%d!=%d\n",n,result);
			break;
		default:printf("�������\n");break;
	}//
	
	int x;
	x=getchar();
	printf("����1����,����I�˳�:\n");
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
			printf("������һ������n:");
			scanf("%d",&n);
			result=newSumFactor(n);
			printf("1!+2!+......+%d!=%d\n",n,result);
			break;
		case'I':return 0;
	}
	
	}//�˵�ѭ�� 

	 
}			//���˵�ģ��


void add()
{
	int number1,number2;
	int sum;
	printf("������������:");
	scanf("%d%d",&number1,&number2);
	sum=number1+number2;
	printf("%d+%d=%d\n",number1,number2,sum);
	 
}			//�ӷ�����



void substract()
{
	int number1,number2;
	int sum;
	printf("������������:");
	scanf("%d%d",&number1,&number2);
	sum=number1-number2;
	printf("%d-%d=%d\n",number1,number2,sum);
	
}			//��������



void divide()
{
	int number1,number2;
	float quotient;
	printf("������������:");
	scanf("%d%d",&number1,&number2);
	quotient=(float) number1/(float) number2;
	printf("%d/%d=%-10.2f \n",number1,number2,quotient);
}			//��������



void multiplay()
{
	int number1,number2;
	float product;
	printf("������������:");
	scanf("%d%d",&number1,&number2);
	product=(float) number1*(float) number2;
	printf("%d*%d=%-10.2f\n",number1,number2,product);
	
}			//�˷�����


void complement()
{
	int number1,number2;
	int sum;
	printf("������������:");
	scanf("%d %d",&number1,&number2);
	sum=number1%number2;
	printf("%d\n",sum);
	
}			//�������� 


int getSum()
{
	int x,sum=0,n=0;
	printf("������10�����ۼ�:\n");
	while(n<10)
	{
		scanf("%d",&x);
		sum+=x;
		n++;
	}
	printf("%d",sum);
	return sum;
}			//�ۼ����� 

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
}//�׳��ۼ� 








 
