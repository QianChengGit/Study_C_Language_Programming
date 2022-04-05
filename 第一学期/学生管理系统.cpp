#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h> 
#define N sizeof(struct stdent)
struct stdent{
	char name[20];
	char log[30];
	int a;
	struct stdent *next;
};                                 //节点 
struct stdent *inputscore(){             //链表用于临时储存数据 
   struct stdent *p1,*p2,*head ;
   printf("请输入学生姓名,学号和成绩，以0(空格)0(空格)0结束\n");
   p1=(struct stdent *)malloc(N);
   scanf("%s",p1->name);
   scanf("%s",p1->log);
   scanf("%d",&p1->a);
   head=p2=p1;                          //指向开头 
   while(p1->a!=0){
    p1=(struct stdent *)malloc(N);
     scanf("%s",p1->name);
     scanf("%s",p1->log);
     scanf("%d",&p1->a);
      p2->next=p1;                          //p2始终跟着p1 
      p2=p1;
  }
   p2->next=NULL;
   return head;
}
void alldelent(){                
	FILE*fp;
	if((fp=fopen("save.txt","w"))==NULL){     //以W形式打开文件将自动清空文件内容  
		printf("文件打开失败");
		getch();
		exit(-1);
	}
	fclose(fp);
	printf("以删除所有内容任意键继续") ;      //防止清屏时瞬间删除影响效果，下面任意键同样的作用 
	getch(); 
}
void login(){                                //口令 
	char a[7],*p="123abc";
	 int i;
	 for(i=0;i<3;i++){
     	printf("你还能输入%d次口令(123abc)：\n",3-i);
    	gets(a);
	if(strcmp(p,a)==0)break;            //字符串进行比较相同返回0 
    	}
	if(strcmp(p,a)!=0)exit(-1);}           //如果三次后任然不相等则结束程序 
void  outputscore(){                      //输出所有数据 
	FILE*fp;
	char ch[30];
	char st[30];
	int i=0,a;
	if((fp=fopen("save.txt","r"))==NULL){
		printf("文件打开失败任意键退出");
		getch();
		exit(-1);
	}
      	printf("姓名\t  学号\t  成绩\n");
        rewind(fp);                    //将文件指针移动到文件开头 
	while(!feof(fp)){                 	//到文件末尾返回非零 
		fscanf(fp,"%s%s%d",ch,st,&a);
		printf("%s\t%s\t%d\n",ch,st,a);
	}
	fclose(fp);
	printf("任意键继续");
	getch();
	}
void save(struct stdent *head){
	struct stdent *p=head;
	static int i=0;
	FILE*fp;
	if((fp=fopen("save.txt","a+"))==NULL){         //打开文件将内容写在原来文件的尾部；如果没有文件则创一个文件 
		fp=fopen("save.txt","w+");
		}
	while(p->next!=NULL){                  //将链表中的内容存入文件，十个一换行 
			fprintf(fp,"\t%s\t%s\t%d\n",p->name,p->log,p->a);
			p=p->next;
	     	i++;
		if(i%10==0){
		i=0;
		printf("\n");
		}
	}
	fclose(fp);
}
void displayMent(){            //主菜单 
	printf("*_________________________________________*\n");
	printf("|             学生成绩管理系统            |\n");
	printf("|                1:录入                   |\n");
	printf("|                2:输出                   |\n");
	printf("|                3:查询                   |\n");
	printf("|                4:排序                   |\n");
	printf("|                5:删除                   |\n");
	printf("|                6:格式化数据             |\n");
	printf("|                7:结束                   |\n");  
    printf("*_________________________________________*\n");
}	
void delent (char a[]){
	int t,k=1;
	char n[30],m[30];
	FILE*fp;
	FILE*fpl;
	if((fp=fopen("save.txt","r+"))==NULL){
		printf("文件打开失败任意键退出");
		getch();
		exit(-1);
	}
    fpl=fopen("saves.txt","w");        //不需要判断是否存在因为以w打开会自动建立文件 
      rewind(fp);
	while(!feof(fp)){	                 //如果找到要删除的内容则跳过不复制给零时文件 
        	fscanf(fp,"%s%s%d",n,m,&t);
	       	if(strcmp(n,a)==0){
	      	fscanf(fp,"%s%s%d",n,m,&t);
	       	k=0;}
		   fprintf(fpl,"\t%s\t%s\t%d",n,m,t); 
}
if(k)
	printf("删除失败任意键继续\n");
else
  printf("删除成功任意键继续\n");
      fclose(fp);
      fclose(fpl);
        remove("save.txt");                            //删除原文件 
       rename( "saves.txt","save.txt");               //将零时文件改为原文件 
        getch();
 } 
void queryScore(){            //查找 
	FILE*fp;
	char a[20],n[30],tb[30],k;
	char tm[20];
	int i=1,m,b,ch; 
	while(i){
        	printf("请选择查找方式：\n(1)姓名查找\n(2)学号查找\n(3)分数查找\n");
        	scanf("%d",&ch);
		if((fp=fopen("save.txt","r"))==NULL){
	           	printf("文件打开失败任意键退出");
	           	getch();
	           	exit(-1);
                   	}
   	switch(ch){
       	case 1:
		        printf("输入姓名：");
		 	   scanf("%s",tm);
		          k=1;           //判断是否找到内容 
		           rewind(fp);
		  	while(!feof(fp)){
		     	fscanf(fp,"%s%s%d",a,n,&m);
		   	if(strcmp(a,tm)==0){
					printf("%s\t%s\t%d\n",a,n,m);
				printf("是否删除查找到的内容(0)是(9)否\n");
				scanf("%d",&k);
				 if(!k){
				 	fclose(fp);                //关闭文件后再进行传数据 
				 delent(a);
				 break;                           //因为文件已经关闭必须用beark跳出循环 
				 }
				k=0;
				} 	
		}
			if(k)printf("无你要查找的内容\n");
		      	fclose(fp);
			break;
		case 2:
				printf("输入学号：");
	     	    scanf("%s",tm);
	            k=1;
	             rewind(fp);
			while(!feof(fp)){
				fscanf(fp,"%s%s%d",a,n,&m);
					if(strcmp(n,tm)==0){
						printf("%s\t%s\t%d\n",a,n,m);
							printf("是否删除查找到的内容(0)是(9)否\n");
			            	scanf("%d",&k);
			              	 if(!k){
			                	 	fclose(fp);                //关闭文件后再进行传数据 
			                   	 delent(a);
			                  	 break;                           //因为文件已经关闭必须用beark跳出循环 
			                	 }
			                	k=0;
			               	}
					}	
			if(k)printf("无你要查找的内容\n");
			fclose(fp);
			break;
	case 3:
			printf("输入成绩：");
		   scanf("%d",&b);
		   k=1;
			while(!feof(fp)){
					fscanf(fp,"%s%s%d",a,n,&m);
					if(b==m){
						printf("%s\t%s\t%d\n",a,n,m);
							printf("是否删除查找到的内容(0)是(9)否\n");
				          scanf("%d",&k);
			              	 if(!k){
				                 	fclose(fp);                //关闭文件后再进行传数据 
			                     	 delent(a);
			                        	 break;                           //因为文件已经关闭必须用beark跳出循环 
			                            	 }
			                            	k=0;
			                              	} 	
			}
			if(k)printf("无你要查找的内容\n");
			fclose(fp);
			break;
		default:
			printf("无效选项");
	}
	printf("任意键继续\n");
	getch();
    system("cls");
    displayMent();
	printf("是否继续查找(9)继续(0)停止查询");
	scanf("%d",&i);
	}
	
}
void sortScore(){    //排序 
	FILE*fp;
	int x,a[10000]={0},i=0,k,t,j;
	char n[30],m[30];
	printf("成绩降序排列\n");
	if((fp=fopen("save.txt","r+"))==NULL){
		printf("文件打开失败任意键退出");
		getch();
		exit(-1);
	}
	while(!feof(fp)){      //将数据放入数组 
		fscanf(fp,"%s%s%d",n,m,&x);
		a[i]=x;
		i++;
	}
	for(j=0;j<i-1;j++){             //冒泡排序法进行排序 
		for(k=j+1;k<i;k++){
			if(a[k]>a[j]){
				t=a[k];
				a[k]=a[j];
				a[j]=t;
			}
		}
	}	
	j=0;
	for(k=0;k<i+1;k++){               //找到与数组相等的则输出 
    	rewind(fp);
	while(!feof(fp)){
		fscanf(fp,"%s%s%d",n,m,&x);
		if(x==a[j]){
			printf("%s\t%s\t%d\n",n,m,x);
			j++;
		}
	}
  }
    printf("任意键继续\n"); 
    getch();
}

void choice(struct stdent*head){                       //主菜单选择 
	int a,i=1;
	char n[30];
while(i){
	printf("请选择你的操作：");
	scanf("%d",&a);
	switch(a){
		case 1:
		  head=inputscore();
	      save(head);
	      break;
	    case 2:
	      outputscore();
	      break;
	   	case 3:
	       	queryScore();
	       	break;
	   	case 4:
	       	sortScore();
	       	break;
	    case 5:
	    	printf("输入需删除内容对应名字\n");
	    	scanf("%s",n);
	    	delent(n);break;
	    case 6:
	    	alldelent();break;
	  default:
	         exit(-1); 
	}
	system("cls");
	displayMent();
	printf("是否继续(9)继续(0)结束");
    scanf("%d",&i); 
	}
}
int main(){
	struct stdent *head;
	login();
	displayMent();
	choice(head);

}

