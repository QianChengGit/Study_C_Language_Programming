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
};                                 //�ڵ� 
struct stdent *inputscore(){             //����������ʱ�������� 
   struct stdent *p1,*p2,*head ;
   printf("������ѧ������,ѧ�źͳɼ�����0(�ո�)0(�ո�)0����\n");
   p1=(struct stdent *)malloc(N);
   scanf("%s",p1->name);
   scanf("%s",p1->log);
   scanf("%d",&p1->a);
   head=p2=p1;                          //ָ��ͷ 
   while(p1->a!=0){
    p1=(struct stdent *)malloc(N);
     scanf("%s",p1->name);
     scanf("%s",p1->log);
     scanf("%d",&p1->a);
      p2->next=p1;                          //p2ʼ�ո���p1 
      p2=p1;
  }
   p2->next=NULL;
   return head;
}
void alldelent(){                
	FILE*fp;
	if((fp=fopen("save.txt","w"))==NULL){     //��W��ʽ���ļ����Զ�����ļ�����  
		printf("�ļ���ʧ��");
		getch();
		exit(-1);
	}
	fclose(fp);
	printf("��ɾ�������������������") ;      //��ֹ����ʱ˲��ɾ��Ӱ��Ч�������������ͬ�������� 
	getch(); 
}
void login(){                                //���� 
	char a[7],*p="123abc";
	 int i;
	 for(i=0;i<3;i++){
     	printf("�㻹������%d�ο���(123abc)��\n",3-i);
    	gets(a);
	if(strcmp(p,a)==0)break;            //�ַ������бȽ���ͬ����0 
    	}
	if(strcmp(p,a)!=0)exit(-1);}           //������κ���Ȼ�������������� 
void  outputscore(){                      //����������� 
	FILE*fp;
	char ch[30];
	char st[30];
	int i=0,a;
	if((fp=fopen("save.txt","r"))==NULL){
		printf("�ļ���ʧ��������˳�");
		getch();
		exit(-1);
	}
      	printf("����\t  ѧ��\t  �ɼ�\n");
        rewind(fp);                    //���ļ�ָ���ƶ����ļ���ͷ 
	while(!feof(fp)){                 	//���ļ�ĩβ���ط��� 
		fscanf(fp,"%s%s%d",ch,st,&a);
		printf("%s\t%s\t%d\n",ch,st,a);
	}
	fclose(fp);
	printf("���������");
	getch();
	}
void save(struct stdent *head){
	struct stdent *p=head;
	static int i=0;
	FILE*fp;
	if((fp=fopen("save.txt","a+"))==NULL){         //���ļ�������д��ԭ���ļ���β�������û���ļ���һ���ļ� 
		fp=fopen("save.txt","w+");
		}
	while(p->next!=NULL){                  //�������е����ݴ����ļ���ʮ��һ���� 
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
void displayMent(){            //���˵� 
	printf("*_________________________________________*\n");
	printf("|             ѧ���ɼ�����ϵͳ            |\n");
	printf("|                1:¼��                   |\n");
	printf("|                2:���                   |\n");
	printf("|                3:��ѯ                   |\n");
	printf("|                4:����                   |\n");
	printf("|                5:ɾ��                   |\n");
	printf("|                6:��ʽ������             |\n");
	printf("|                7:����                   |\n");  
    printf("*_________________________________________*\n");
}	
void delent (char a[]){
	int t,k=1;
	char n[30],m[30];
	FILE*fp;
	FILE*fpl;
	if((fp=fopen("save.txt","r+"))==NULL){
		printf("�ļ���ʧ��������˳�");
		getch();
		exit(-1);
	}
    fpl=fopen("saves.txt","w");        //����Ҫ�ж��Ƿ������Ϊ��w�򿪻��Զ������ļ� 
      rewind(fp);
	while(!feof(fp)){	                 //����ҵ�Ҫɾ�������������������Ƹ���ʱ�ļ� 
        	fscanf(fp,"%s%s%d",n,m,&t);
	       	if(strcmp(n,a)==0){
	      	fscanf(fp,"%s%s%d",n,m,&t);
	       	k=0;}
		   fprintf(fpl,"\t%s\t%s\t%d",n,m,t); 
}
if(k)
	printf("ɾ��ʧ�����������\n");
else
  printf("ɾ���ɹ����������\n");
      fclose(fp);
      fclose(fpl);
        remove("save.txt");                            //ɾ��ԭ�ļ� 
       rename( "saves.txt","save.txt");               //����ʱ�ļ���Ϊԭ�ļ� 
        getch();
 } 
void queryScore(){            //���� 
	FILE*fp;
	char a[20],n[30],tb[30],k;
	char tm[20];
	int i=1,m,b,ch; 
	while(i){
        	printf("��ѡ����ҷ�ʽ��\n(1)��������\n(2)ѧ�Ų���\n(3)��������\n");
        	scanf("%d",&ch);
		if((fp=fopen("save.txt","r"))==NULL){
	           	printf("�ļ���ʧ��������˳�");
	           	getch();
	           	exit(-1);
                   	}
   	switch(ch){
       	case 1:
		        printf("����������");
		 	   scanf("%s",tm);
		          k=1;           //�ж��Ƿ��ҵ����� 
		           rewind(fp);
		  	while(!feof(fp)){
		     	fscanf(fp,"%s%s%d",a,n,&m);
		   	if(strcmp(a,tm)==0){
					printf("%s\t%s\t%d\n",a,n,m);
				printf("�Ƿ�ɾ�����ҵ�������(0)��(9)��\n");
				scanf("%d",&k);
				 if(!k){
				 	fclose(fp);                //�ر��ļ����ٽ��д����� 
				 delent(a);
				 break;                           //��Ϊ�ļ��Ѿ��رձ�����beark����ѭ�� 
				 }
				k=0;
				} 	
		}
			if(k)printf("����Ҫ���ҵ�����\n");
		      	fclose(fp);
			break;
		case 2:
				printf("����ѧ�ţ�");
	     	    scanf("%s",tm);
	            k=1;
	             rewind(fp);
			while(!feof(fp)){
				fscanf(fp,"%s%s%d",a,n,&m);
					if(strcmp(n,tm)==0){
						printf("%s\t%s\t%d\n",a,n,m);
							printf("�Ƿ�ɾ�����ҵ�������(0)��(9)��\n");
			            	scanf("%d",&k);
			              	 if(!k){
			                	 	fclose(fp);                //�ر��ļ����ٽ��д����� 
			                   	 delent(a);
			                  	 break;                           //��Ϊ�ļ��Ѿ��رձ�����beark����ѭ�� 
			                	 }
			                	k=0;
			               	}
					}	
			if(k)printf("����Ҫ���ҵ�����\n");
			fclose(fp);
			break;
	case 3:
			printf("����ɼ���");
		   scanf("%d",&b);
		   k=1;
			while(!feof(fp)){
					fscanf(fp,"%s%s%d",a,n,&m);
					if(b==m){
						printf("%s\t%s\t%d\n",a,n,m);
							printf("�Ƿ�ɾ�����ҵ�������(0)��(9)��\n");
				          scanf("%d",&k);
			              	 if(!k){
				                 	fclose(fp);                //�ر��ļ����ٽ��д����� 
			                     	 delent(a);
			                        	 break;                           //��Ϊ�ļ��Ѿ��رձ�����beark����ѭ�� 
			                            	 }
			                            	k=0;
			                              	} 	
			}
			if(k)printf("����Ҫ���ҵ�����\n");
			fclose(fp);
			break;
		default:
			printf("��Чѡ��");
	}
	printf("���������\n");
	getch();
    system("cls");
    displayMent();
	printf("�Ƿ��������(9)����(0)ֹͣ��ѯ");
	scanf("%d",&i);
	}
	
}
void sortScore(){    //���� 
	FILE*fp;
	int x,a[10000]={0},i=0,k,t,j;
	char n[30],m[30];
	printf("�ɼ���������\n");
	if((fp=fopen("save.txt","r+"))==NULL){
		printf("�ļ���ʧ��������˳�");
		getch();
		exit(-1);
	}
	while(!feof(fp)){      //�����ݷ������� 
		fscanf(fp,"%s%s%d",n,m,&x);
		a[i]=x;
		i++;
	}
	for(j=0;j<i-1;j++){             //ð�����򷨽������� 
		for(k=j+1;k<i;k++){
			if(a[k]>a[j]){
				t=a[k];
				a[k]=a[j];
				a[j]=t;
			}
		}
	}	
	j=0;
	for(k=0;k<i+1;k++){               //�ҵ���������ȵ������ 
    	rewind(fp);
	while(!feof(fp)){
		fscanf(fp,"%s%s%d",n,m,&x);
		if(x==a[j]){
			printf("%s\t%s\t%d\n",n,m,x);
			j++;
		}
	}
  }
    printf("���������\n"); 
    getch();
}

void choice(struct stdent*head){                       //���˵�ѡ�� 
	int a,i=1;
	char n[30];
while(i){
	printf("��ѡ����Ĳ�����");
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
	    	printf("������ɾ�����ݶ�Ӧ����\n");
	    	scanf("%s",n);
	    	delent(n);break;
	    case 6:
	    	alldelent();break;
	  default:
	         exit(-1); 
	}
	system("cls");
	displayMent();
	printf("�Ƿ����(9)����(0)����");
    scanf("%d",&i); 
	}
}
int main(){
	struct stdent *head;
	login();
	displayMent();
	choice(head);

}

