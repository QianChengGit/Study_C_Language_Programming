#include<stdio.h>
#include<stdlib.h>
int main()
	{
	int x,i=1,s=0,q=0;
	float aver;
	printf("��������Ҫ�жϵ����֣�����0����\n");
	while(x!=0){
		scanf("%d",&x);
		if(x>0){
			s++;
	}
		else if(x<0){
			q++;
	}
	}
	printf("������%d��\n������%d��\n",s,q);
	return 0;
}
