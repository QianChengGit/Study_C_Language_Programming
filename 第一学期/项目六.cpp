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
	printf("*                     ѧ���ɼ�����ϵͳ                      *       \n");
	printf("*                                                           *   \n");
	printf("*                          1.¼��                           *       \n");
	printf("*                          2.���                           *            \n");
	printf("*                          3.��ѯ                           *           \n");
	printf("*                          4.����                           *                \n");
	printf("*                          5.����                           *      \n");
	printf("*                          6.����                                *    \n");
	printf("*                                                           *    \n");
	printf("*************************************************************\n");
}
int login(){
        char s[100];
        int i;
	    printf("������֤����\n�Լ���\n");
	    for(i=0;;i++){
        gets(s);
       if(strcmp(s,"��")==0)
		{
		return 1;}
		else 
		{
			printf("����һ��\n");
		}
		printf("����%d�λ���\n",5-i);
		if((5-i)==0)  return 0;
     	}
}
void pan(int score[]){
	int i;
	static int x;
	printf("��ѡ����Ĳ�����1��2��3��4��5��6��\t");
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
	printf("������ɼ�����-1������\n");
	for(;i<length;i++){
	  printf("��%d��ѧ���ĳɼ�Ϊ:",i+1);
	  scanf("%d",&score[i]);
	  if(score[i]==-1)break;
	}	
	return i;
}
void outputScore(int score[],int length){
	int i;
	for(i=0;i<length;i++){
	  printf("��%d��ѧ���ĳɼ�Ϊ:%d\n",i+1,score[i]);
	}	
}
void queryScore(int score[],int length){
	int xScore,i,t=0;
    printf("�������ѯ�ĳɼ�\n");
    scanf("%d",&xScore);
    for(i=0;i<length;i++){
    	if(score[i]==xScore) {
    		printf("λ����%d\n",i+1); 
			t++;
    	}
    }
    if(t==0)
    printf("û���ҵ�ָ���ɼ�\n");
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
	

