#include<stdio.h>
int main()
{
	double baggage;
	double cost;
	printf("���������������:");
	scanf("%lf",&baggage);
	if(baggage<0){
		printf("������󣡣���������������ڵ���0��");
	}else if(baggage>=0&&baggage<=20){
		cost=0.0;
		printf("�������˷�Ϊ:%.4lf\n",cost);
	}else if(baggage>20&&baggage<=30){ 
		cost=(baggage-20)*30;
		printf("�������˷�Ϊ:%.4lf\n",cost);
	} else if(baggage>30&&baggage<=40){
		cost=(30-20)*30+(baggage-30)*40;
		printf("�������˷�Ϊ:%.4lf\n",cost);	
	}else if(baggage>40&&baggage<=50){
		cost=(30-20)*30+(40-30)*40+(baggage-40)*50;	
		printf("�������˷�Ϊ:%.4lf\n",cost);
	}else{
		printf("���棺���������Я����"); 
	}
	return 0;
}
