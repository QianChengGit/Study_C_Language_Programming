#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct Node{
	int key;
	int num;
	struct Node *next;
}Node,*Link;

void InitList(Link &L)
{
	L=(Node*)malloc(sizeof(Node));
	if(!L)
	exit(1);
	L->key=0;
	L->num=0;
	L->next=L;
}

void Creatlinklist(int n,Link &L)
{
	Link p,q;
	q=L;
	for(int i=1;i<=n;i++){
		p=(Node*)malloc(sizeof(Node));
		if(!p)
		exit(1);
		scanf("%d",&p->key);
		p->num=i;
		L->next=p;
		L=p;
	}
	L->next=q->next;
	free(q);
}

Link Locate_m(Link &p,int m)
{
	Link q;
	for(int j=1;j<m;j++){
		p=p->next;
		q=p->next;
		m=q->key;
		return q;
	}
}

void Delete_m(Link &L,Link p,Link q)
{
	p->next=q->next;
	free(q);
}



main()
{
	Link L,p,q;
	int n,m;
	L=NULL;
	InitList(L);
	scanf("%d",&m);
	scanf("%d",&n);
	Creatlinklist(n,L);
	p=L;
	for(int i=1;i<=n;i++){
		q=Locate_m(p,m);
		printf("%d",q->num);
		Delete_m(L,p,q);
	}
	return 0;
}
