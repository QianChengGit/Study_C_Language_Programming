#include<stdio.h>
void stor(int stu[],int *ph);
char*myStrcpy(char*str1,char*str2);
int main()
{
	int stu[10],i,x;
	int *ph;
	
	char tar1[100],tar2[100];
	printf("�������ַ�����\n");
	//gets(tar1);
	gets(tar2);
	myStrcpy(tar1,tar2);
	printf("���ƺ���ַ���str1:\n");
	puts(tar1);
	//�ַ��� 
	
	printf("������10��ѧ���ɼ���\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&stu[i]);
	} 
	ph=&stu[0];
	//��ָ�������� 
	printf("���ָ���ŵ�����:\n");
	for(i=0;i<10;i++)
	printf("%d ",*ph++);
	printf("\n");
	// ��ָ��������� 
	ph=&stu[9];
	printf("���ָ�����������:\n");
	for(i=0;i<10;i++)
	printf("%d ",*ph--);
	printf("\n");
	//��ָ������ 
	printf("���ָ�뺯�����������:\n");
	stor(stu,ph);
	//����ָ�뺯��
	
	return 0;
}


void stor(int stu[],int *ph)
{
	int i;
	ph=&stu[9];
	for(i=0;i<10;i++)
	printf("%d ",*ph--);
	printf("\n");
}


char*myStrcpy(char*str1,char*str2)
{
	char *p;
	p=str1;
	while(*str2!='\0')
	{
		*p++=*str2++;//�����ַ��� 
	}
	*p='\0';
	return str1;
}

