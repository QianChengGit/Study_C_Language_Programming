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
		printf("������󣬲�������뱾ϵͳ!\n");
		exit(0);
	}//����
	
	displayMenu();//�˵�
	 
	j=inputScore(ps,length);//¼��
	displayMenu();//�˵�
	 outputScore(ps,length);//���
	
	scanf("%d",&x);
	int index=queryScore(ps,length,xScore);//��ѯ 
	if(index==-1)
		printf("%d δ�ҵ���\n",x);
	else
		printf("%d ��λ����%d! \n",x,index);


//	sortScore(ps,length);//���� 
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
		printf("���������(wszx520)��");
    	scanf("%s",password);
		if(strcmp(password,key)==0)
		{
			s=1;
		}
	}
	while(s==0 && count<2);
	return s;
}//���� 

void displayMenu()
{
	int *ps,length,xScore,i,j;
	length=j-1;//(��j��ֵ���ݹ�������ֵ��length) 
	printf("**************************\n");
	printf("*    ѧ���ɼ�����ϵͳ    *\n");
	printf("**************************\n");
	printf("*         1.¼��         *\n");
	printf("*         2.���         *\n");
	printf("*         3.��ѯ         *\n");
	printf("*         4.����         *\n");
	printf("**************************\n");
	printf("*         5.����         *\n");
	printf("**************************\n");
		
	int x;
	printf("����ѡ��(1,2,3,4,5),����5�˳�:\n");
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
	printf("����ѡ��(1,2,3,4,5),����5�˳�:\n");	
    }//�˵�ѭ��  
	
}//�˵� 

int inputScore(int *ps,int length)
{
	int tmp;
	printf("������ѧ���ĳɼ���\n");
	do
	{
		printf("�����%d��ѧ���ɼ�:\n",length+1);
		scanf("%d",&tmp);
		if(tmp>=0 && tmp<=100)
		{
			*(ps+length)=tmp;
			length++;
		} 
	}
	while(tmp!=-1 );
	return length;
}//¼�� 

void outputScore(int *ps,int length)
{
	int i,j;
	length=j-1;
	printf("¼��ĳɼ�Ϊ��");
	for(i=0;i<length;i++)
	{
		printf("%d ",*ps++);
	} 
}//��� 

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

//��ѯ 

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
		//}//���� 

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
		//���� 
}//���� 

