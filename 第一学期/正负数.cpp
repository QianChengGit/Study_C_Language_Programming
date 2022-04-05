#include<stdio.h>
#include<stdlib.h>
int main()
	{
	int x,i=1,s=0,q=0;
	float aver;
	printf("请输入需要判断的数字，输入0结束\n");
	while(x!=0){
		scanf("%d",&x);
		if(x>0){
			s++;
	}
		else if(x<0){
			q++;
	}
	}
	printf("正数有%d个\n负数有%d个\n",s,q);
	return 0;
}
