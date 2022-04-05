#include <stdio.h>
#include "stdlib.h"
#define MAX 50
typedef struct node{
	int row;
	int col;
	int val;
}NODE; 
NODE ma[MAX],mb[MAX];
int z;

int first(int a ,int b){
	int x;
	int a1[a][b];
	printf("请输入A稀疏数组：\n");
	for(int i = 1 ; i <= a ; i++){
		for(int j = 1 ; j <= b ; j++){
			scanf("%5d",&x);
			a1[i][j] = x;
			if(a1[i][j] !=0)
				z++;
		}
	} 
	printf("A的三元组表：\n");
	NODE ma[MAX];
	int k=0;
	ma[0].row = a;
	ma[0].col = b;
	ma[0].val = z;
	for(int i = 1 ; i <= a ; i++){
		for(int j = 1 ; j <= b ; j++){
			if(a1[i][j] != 0 ){
				k++;
				ma[k].row = i;
				ma[k].col = j;
				ma[k].val = a1[i][j];
				
			}
		}
	} 
	for(k = 0 ; k<=z ; k++){
		printf("%5d%5d%5d",ma[k].row,ma[k].col,ma[k].val);
		printf("\n");
	}
	printf("\n");
	printf("B的三元组表：\n");
	NODE mb[MAX];
	int f = 0;
	int m=ma[0].row;
	int n=ma[0].col;
	int t=ma[0].val;
	mb[0].row = n;
	mb[0].col = m;
	mb[0].val = t;
	for(int j = 1 ; j<=n ; j++){
		for(int i = 1 ; i<=t ; i++){
			if(ma[i].col == j){
				f++;
				mb[f].row = ma[i].col;
				mb[f].col = ma[i].row;
				mb[f].val = ma[i].val;
				 
			}
		}
	}
	for(f = 0 ; f<=z ; f++){
		printf("%5d%5d%5d",mb[f].row,mb[f].col,mb[f].val);
		printf("\n");
	}
	
	printf("B的稀疏数组：\n");
	int b1[MAX][MAX];
	int kb = 0,n1,m1;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j<= m ; j++){
			b1[i][j] = 0; 
		} 
	} 
	for(kb = 1 ; kb <=z ; kb++){
			n1 = mb[kb].row;
			m1 = mb[kb].col;
			b1[n1][m1] = mb[kb].val; 
	} 
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j<= m ; j++){
			printf("%5d",b1[i][j]); 
		} 
		printf("\n"); 
	} 
}

main(){
	int a,b;
	printf("请输入需要几行几列数组：");
	scanf("%d%d",&a,&b);
	first(a,b);
}
