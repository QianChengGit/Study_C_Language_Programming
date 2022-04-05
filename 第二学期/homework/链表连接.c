#include "stdio.h"
#include "stdlib.h"
typedef struct node
{
	int data;
	struct node *next;
}Node;


Node *creat()/*建立带表头链表*/
{
	Node *head;
	Node *p,*q;
	int x;
	p=(Node *)malloc(sizeof(Node));
	p->next=NULL;
	head=p;
	q=head;
	printf("请输入数据元素，以0结束。\n");
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
	printf("线性链表中的%d个数据元素为：\n",n);
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
	printf("建立链表a：");
	heada=creat();
	printf("建立链表b：");
	headb=creat();
	printf("链表a：");
	out(heada);
	printf("链表b：");
	out(headb);
	headc=connet(heada,headb,headc);
	printf("链表c：");
	out(headc);
}

