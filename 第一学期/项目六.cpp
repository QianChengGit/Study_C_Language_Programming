#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void displayMenu();
int login();
void pan(int score[]);
void outputScore(int score[],int length);
int inputScore(int score[],int length);
void queryScore(int score[],int length);
void strtScore(int score[],int length);
int main(){
	char x;
	displayMenu();
	int score[100]={0};
	//if(login())
	for(;;){
    pan(score);
     }
    //else exit(0);
}
void displayMenu(){
	printf("*************************************************************\n");
	printf("*                     学生成绩管理系统                      *       \n");
	printf("*                                                           *   \n");
	printf("*                          1.录入                           *       \n");
	printf("*                          2.输出                           *            \n");
	printf("*                          3.查询                           *           \n");
	printf("*                          4.排序                           *                \n");
	printf("*                          5.结束                           *      \n");
	printf("*                          6.清屏                                *    \n");
	printf("*                                                           *    \n");
	printf("*************************************************************\n");
}
int login(){
        char s[100];
        int i;
	    printf("输入验证口令\n吃鸡吗？\n");
	    for(i=0;;i++){
        gets(s);
       if(strcmp(s,"吃")==0)
		{
		return 1;}
		else 
		{
			printf("再来一次\n");
		}
		printf("还有%d次机会\n",5-i);
		if((5-i)==0)  return 0;
     	}
}
void pan(int score[]){
	int i;
	static int x;
	printf("请选择你的操作（1，2，3，4，5，6）\t");
	scanf("%d",&i);
	switch(i)
	{
		case 1:x=inputScore(score,100);break;
		case 2:outputScore(score,x);break;
		case 3:queryScore(score,x);break;
		case 4:strtScore(score,x);break;
		case 6:system("cls");displayMenu();break;
		case 5:exit(0);break;
	}
}
int inputScore(int score[],int length){
	 int i=0;
	printf("请输入成绩（以-1结束）\n");
	for(;i<length;i++){
	  printf("第%d个学生的成绩为:",i+1);
	  scanf("%d",&score[i]);
	  if(score[i]==-1)break;
	}	
	return i;
}
void outputScore(int score[],int length){
	int i;
	for(i=0;i<length;i++){
	  printf("第%d个学生的成绩为:%d\n",i+1,score[i]);
	}	
}
void queryScore(int score[],int length){
	int xScore,i,t=0;
    printf("请输入查询的成绩\n");
    scanf("%d",&xScore);
    for(i=0;i<length;i++){
    	if(score[i]==xScore) {
    		printf("位置是%d\n",i+1); 
			t++;
    	}
    }
    if(t==0)
    printf("没有找到指定成绩\n");
     }
void strtScore(int score[],int x){
	int i,j,t;
	for(i=0;i<=x-1;i++){
		for(j=i+1;j<=x;j++){
			if(score[i]<score[j]){
				t=score[i];
				score[i]=score[j];
				score[j]=t;
			}
		}
	}
	for(i=0;i<x;i++)
	printf(" %d",score[i]);
}
	

