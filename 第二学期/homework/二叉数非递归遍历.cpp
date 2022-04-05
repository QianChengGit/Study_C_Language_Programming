#include<stdio.h>
#include<stdlib.h> 
#define max 1024
typedef struct node{
	char data;
	struct node *left_child,*right_child; 
} node;
node *nar[max];

node *setuptree(node *t){
	node *p;
	char x;
	int f,i,j,n;//f双亲，i循环变量，j节点编号，n共有几个节点 
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d,%c",&j,&x);
		p=(node*)malloc(sizeof(node));
		p->left_child=NULL;
		p->right_child=NULL;
		p->data=x;
		nar[i]=p; 
		if(j==1)	
			{t=p;} 
		else{
			f=j/2;
			if(j%2==0)	
				nar[f]->left_child=p; 
			else
				nar[f]->right_child=p; 
		} 
	} 
	return(t); 
}

void non_preorder(node *t){		//先序 
	node *p,*s[max];
	int top=0;
	p=t;
	if(t==NULL) 
		return;
	do{
		while(p!=NULL){
			printf("%c\t",p->data);
			if(p->right_child!=NULL)
				s[top++]=p->right_child;
			p=p->left_child; 
		} 
		if(top>0) p=s[--top]; 
	} while(p||top>0); 
} 

void non_inorder(node *t){		//中序 
	node *p,*s[max];
	int top=0;
	p=t;
	do{
		while(p!=NULL){
			s[top++]=p;
			p=p->left_child; 
		} 
		if(top>0){
			p=s[--top];
			printf("%c\t",p->data);
			p=p->right_child; 
		}  
	} while(top>0||p); 
} 

void postorder(node *t){
	int s2[max],top=0;
	node *p,*s1[max];
	p=t;
	do{
		while(p!=NULL)
		{
			s1[top]=p;s2[top++]=0;
			p=p->left_child;
		}	
		while((top>0)&&(s2[top-1])==1){
			p=s1[--top];
			printf("%c\t",p->data);
		}
		if(top>0){
			s2[top-1]=1;
			p=s1[top-1];
			p=p->right_child;
		}
	}while(top>0);
}
main(){
	node *t;
	printf("请输入共有多少个节点：");
	printf("\n"); 
	printf("请写出节点的编号和名字：\n");
	t=setuptree(t);
	non_preorder(t); 
	printf("\n"); 
	non_inorder(t); 
	printf("\n"); 
	postorder(t); 
} 
