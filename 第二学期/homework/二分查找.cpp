#include<stdio.h>
#define MAX 100
typedef struct node{
	int key; 
} NODE; 

int binsearch(NODE r[MAX],int k , int n){
	int t=1,h=n,m;
	while(t<=h){
		m=(t+h)/2;
		if(k==r[m].key)
			return(m);
		else if(k>r[m].key) 
			t=m+1;
		else
			h=m-1; 
	} 
		return(-1); 
} 

main(){
	NODE a[MAX];
	int i,k;
	for(i=1;i<=10;i++) 
		scanf("%d",&a[i].key);
	scanf("%d",&k);
	i=binsearch(a,k,10);
	if(i!=-1)
		printf("%d的下标是%d\n",k,i);
	else
		printf("无此元素\n"); 
} 
