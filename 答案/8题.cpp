#include<stdio.h>
int main()
{
	double baggage;
	double cost;
	printf("请输入行李的重量:");
	scanf("%lf",&baggage);
	if(baggage<0){
		printf("输入错误！！输入重量必须大于等于0！");
	}else if(baggage>=0&&baggage<=20){
		cost=0.0;
		printf("行李托运费为:%.4lf\n",cost);
	}else if(baggage>20&&baggage<=30){ 
		cost=(baggage-20)*30;
		printf("行李托运费为:%.4lf\n",cost);
	} else if(baggage>30&&baggage<=40){
		cost=(30-20)*30+(baggage-30)*40;
		printf("行李托运费为:%.4lf\n",cost);	
	}else if(baggage>40&&baggage<=50){
		cost=(30-20)*30+(40-30)*40+(baggage-40)*50;	
		printf("行李托运费为:%.4lf\n",cost);
	}else{
		printf("警告：不允许个人携带！"); 
	}
	return 0;
}
