#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef int datatype;
typedef struct Lnode
{
	datatype data;
	struct node *next;
}LNode,*LinkList;


LinkList Creat_LinkList1()
{
	LinkList head=NULL;
	Lnode *s;
	int x;
	scanf("%d",&x);
	while(x!=flag)
	{
		s=(Lnode *)malloc(sizeof(Lnode));
		s->data=x;
		s->next=head;
		head=s;
		scanf("%d",&x);
	}
	return head;
}//ͷ�巨 
LinkList Creat_LinkList2()
{
	LinkList L=NULL;
	Lnode *s,*r=NULL;
	int x;
	scanf("%d",&x);
	while(x!=flag)
	{
		s=(Lnode *)malloc(sizeof(Lnode));
		if(L==NULL)
		L=s;
		else r->next=s;
		r=s;
		scanf("%d",&x);
	}
	r->next=NULL;
	return L;
}//β�巨 

int Length_LinkList1(LinkList L)
{
	Lnode *p=L;
	int j=0;
	while(p->next)
	{
		p=p->next;
		j++;
	}
	return j;
}//���(LΪ��ͷ�ڵ㣩

int Length_LinkList1(LinkList L)
{
	Lnode *p=L;
	int j;
	for(p==NULL) return 0;
	j=1;
	while(p->next)
	{
		p=p->next;
		j++;
	}
	return j;
}//���(LΪ����ͷ�ڵ㣩
 
Lnode *Get_LinkList(LinkList L,int i);
{
	Lnode *p=L->next;
	int j=1;
	while(p!=NULL && j<i)
	{
		p=p->next;
		j++;
	} 
	if(j==i)
	return p;
	else
	return NULL;
} //����Ų��� 
 
Lnode *Get_LinkList(LinkList L,datatype x);
{
	Lnode *p=L->next;
	while(p!=NULL && p->data!=x)
	{
		p=p->next;
	} 
	return p;
} //��ֵ����

int Insert_LinkList(LinkList L,int i,datatype x)
{
	Londe *p,*s;
	p=Get_LinkList(L,i-1);
	if(p==NULL)
	{
		printf("����i����");
		return 0;
	}
	else
	{
		s=(Londe *)malloc(sizeof(Londe));
		s->data=x;
		s->next=p->next;
		p->next=s;
		return 1;
	}
}//����


int Del_LinkList(LinkList L,int i)
{
	LinkList p,s;
	p=Get_LinkList(L,i-1);
	if(p==NULL)
	{
		printf("��i-1���ڵ㲻����");
		return -1; 
	}
	else
	{
		if(p->next==NULL)
		{
			printf("��i���ڵ㲻����");
			return 0; 
		}
		else
		{
			s=p->next;
			p->next=s->next;
			free(s);
			return 1;
		}
	}
} 
//ɾ�� 

 
