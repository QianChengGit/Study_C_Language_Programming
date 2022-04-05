#include<stdio.h>
#define max 100

void continu(int num,int x){
	int a; 
	int top = 0,data[max];
	while(num!=0){
		a=num%x;
		data[top]=a;
		num=num/x;
		top++;
	}
		while(top!=0){top--;
			a=data[top] ; 
			if(a<10){
				printf("%d",a);
			}else{	
				a=a+55; 
				printf("%c",a);
			} 
		} 
}

main(){
	int num,x,y;
	printf("请输入数字：");
	scanf("%d",&num);
	printf("\n\n请选择要转换的进制(2/8/16):");
	scanf("%d",&x); 
	continu(num,x); 
	while(y!=0){
		printf("\n\n是否还要继续，输入1继续，输入0退出"); 
		scanf("%d",&y); 
		printf("\n\n") ; 
		printf("请输入数字：");
		scanf("%d",&num);
		printf("\n\n请选择要转换的进制(2/8/16):");
		scanf("%d",&x); 
		continu(num,x); 
	} 
} 
