# include<stdio.h>



int main()
{
	int password;
	printf("���������:");
	scanf("%d",&password);
	if (password==123 || password==111)
		printf("������ȷ����ӭʹ�ü�������");
	else
		printf("���벻��ȷ������ʹ�ü�������");
		
	printf("+==========================+\n");
	printf("|==��==��==��==��==��==��==|\n");
	printf("+==========================+\n");
	printf("|     A.   �ӷ�            |\n");
	printf("|     B.   ����            |\n");
	printf("|     C.   �˷�            |\n");
	printf("|     D.   ����            |\n");
	printf("+--------------------------|\n");
	printf("|     E.   �˳�            |\n");
	printf("+==========================+\n");	
	
	char choice;
	void add();
	void substract();
	void divide();
	void multiplay(); 
	printf("������ѡ��:");
	choice=getchar();
	switch(choice)
	{ 
		case'A':add();break;
		case'B':substract();break;
		case'C':multiplay();break;
		case'D':divide();break;
		
		default:printf("�������\n");break;
	}
	 
	return 0;
	 
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
	printf("%d/%d=%5.1f \n",number1,number2,quotient);
}			//��������



void multiplay()
{
	int number1,number2;
	float product;
	printf("������������:");
	scanf("%d%d",&number1,&number2);
	product=(float) number1*(float) number2;
	printf("%d*%d=%5.1f\n",number1,number2,product);
	
}			//�˷�����



 









 
