#include "stdio.h"
#include "stdlib.h"
typedef struct node
{
	int data;
	struct node *next;
}Node;


Node *creat()/*��������ͷ����*/
{
	Node *head;
	Node *p,*q;
	int x;
	p=(Node *)malloc(sizeof(Node));
	p->next=NULL;
	head=p;
	q=head;
	printf("����������Ԫ�أ���0������\n");
	scanf("%d",&x);
	while()
	{
		
	}
	q->next=NULL;
	return(head);
}

int length(Node *head)
{
	Node *p=;
	int j=0;
	while()
	{

		j++;
	}
	return j;
}


void out(Node *head)
{
	Node *p=;
	int n;
	n=length(head);
	printf("���������е�%d������Ԫ��Ϊ��\n",n);
	while()
	{
		printf("%5d",p->);
		p=
	}
	printf("\n\n");
}

Node *connet(Node *heada,Node *headb,Node *headc)
{
	Node *p,*q,*t;
	p=heada->next;
	q=headb->next;
	headc=heada;
	t=headc;
	while()
	{
		if()
		{
			
		}
		else
		{
			
		}
	}
	if(p)
	  t->next=;
	else
	  t->next=;
	return(headc);
}

main()
{
	Node *heada,*headb,*headc;
	printf("��������a��");
	heada=creat();
	printf("��������b��");
	headb=creat();
	printf("����a��");
	out(heada);
	printf("����b��");
	out(headb);
	headc=connet(heada,headb,headc);
	printf("����c��");
	out(headc);
}

