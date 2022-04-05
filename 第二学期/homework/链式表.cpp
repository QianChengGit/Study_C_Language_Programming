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
}//头插法 
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
}//尾插法 

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
}//求表长(L为带头节点）

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
}//求表长(L为不带头节点）
 
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
} //按序号查找 
 
Lnode *Get_LinkList(LinkList L,datatype x);
{
	Lnode *p=L->next;
	while(p!=NULL && p->data!=x)
	{
		p=p->next;
	} 
	return p;
} //按值查找

int Insert_LinkList(LinkList L,int i,datatype x)
{
	Londe *p,*s;
	p=Get_LinkList(L,i-1);
	if(p==NULL)
	{
		printf("参数i错误");
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
}//插入


int Del_LinkList(LinkList L,int i)
{
	LinkList p,s;
	p=Get_LinkList(L,i-1);
	if(p==NULL)
	{
		printf("第i-1个节点不存在");
		return -1; 
	}
	else
	{
		if(p->next==NULL)
		{
			printf("第i个节点不存在");
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
//删除 

 
