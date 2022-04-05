#include"stdio.h"
#include"stdlib.h"
typedef struct node
{
	int data;
	struct node *next;
	
} Node;//定义链表类型 

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
}//建立表头 


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
	printf("请输入参加游戏的人数n：");
	scanf("%d",&n);
	printf("请输入所报数m：") ;
	scanf("%d",&m);
	printf("请输入报数起始位置i：");
	scanf("%d",&i);
	head=creat(n);
	printf("%d个人报数%d，从第%d开始的序列为：\n",n,m,i);
	ysfh(head,n,m,i);
}




