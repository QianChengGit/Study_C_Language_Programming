#include<stdio.h>
#include<stdlib.h>
#define MaxSize 20
typedef int datatype;
typedef struct list
{
	datatype data[MaxSize];
	int last;
} seqlist;

int insert_seqlist(seqlist *l,datatype x,int i)
{
	int j;
	if((*l).last>MaxSize){
		printf("溢出\n");
		return 0;
	}
	else if((i<1)||(i>(*l).last+1))
	{
		printf("位置有误！\n");
		return 0;
	} 
	else
	{
		for(j=(*l).last-1;j>=i-1;j--)
		{
			(*l).data[j+1]=(*l).data[j];
			(*l).data[i-1]=x;
			(*l).last=(*l).last+1;
			return 1;
		} 
	} 
} 

int search_seqlist(seqlist *l,datatype x)
{
	int j;
	for(j=0;j<(*l).last-1;j++)
	{
		if((*l).data[j]==x)
		{
			return j+1;
		}
		return 0;
	}
	 
} 

int del_seqlist(seqlist *l,int i)
{
	int j;
	if(i>MaxSize){
		printf("超出线性表范围！\n");
		return 0;
	}
	else if(i<1||i>(*l).last){
		printf("该节点不存在！\n");
		return 0;
	}
	else
	{
		for(j=i-1;j<(*l).last;j++){
			(*l).data[j]=(*l).data[j+1];
			(*l).last--;
			return 1;
		}
	} 
}

void prf_seqlist(seqlist *l){
	int j;
	for(j=1;j<(*l).last;j++){
		printf("%d ",(*l).data[j-1]);
		if(j%4==0){
			printf("\n");
		}
	}
	printf("\n");
}


int main(){
	seqlist *l;
	(*l).last=0;
	int a;
	int j;
	int locate;
	for(j=1;j<10;j++){
		printf("please input number:");
		scanf("%d",&a);
		insert_seqlist(l,a,j);
	}
	prf_seqlist(l);
	locate=search_seqlist(l,5);
	del_seqlist(l,locate);
	prf_seqlist(l);
	system("pause");
	return 0;
}






