#include"stdio.h"
#include"stdlib.h"
typedef struct node
{
	int data;
	struct node *next;
	
} Node;//������������ 

Node *creat(int n)
{
	Node *head,*p,*q;
	int j;
	head=(Node *)malloc(sizeof(Node));
	head->next=NULL;
	q=head;
	for(j=1;j<=n;j++)
	{
		p=(Node *)malloc(sizeof(Node));
		p->data=j;
		q->next=p;
		q=p;
	}
	q->next=head->next;
	return(head);
}//������ͷ 


void ysfh(Node *head,int n,int m,int i)
{
	int j,t=n;
	Node *p,*q;
	q=head;
	p=head->next;
	for(j=1;j<=i-1;j++)
	{
		q=p;
		p=p->next;
	}
	while(t>0)
	{
		for(j=2;j<m;j++)
		{
			q=p;
			p=p->next;
			
		}
		printf("%4d",p->data);
		t--;
		q->next=p->next;
		free(p);
		p=q->next;
	}
	
	
}// 

int main()
{
	Node *head;
	int n,m,i;
	printf("������μ���Ϸ������n��");
	scanf("%d",&n);
	printf("������������m��") ;
	scanf("%d",&m);
	printf("�����뱨����ʼλ��i��");
	scanf("%d",&i);
	head=creat(n);
	printf("%d���˱���%d���ӵ�%d��ʼ������Ϊ��\n",n,m,i);
	ysfh(head,n,m,i);
}




