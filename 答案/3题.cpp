#include <stdio.h>
#include <Math.h>
int main(){
	float n,max=-32768,min=32768,sum;
	 
	for(int i=0;i<10;i++){
		scanf("%f",&n);
		if(n>max){
			max=n;
		}
		if(n<min){
			min=n;
		}
		sum+=n;
	}
	printf("平均分为：%.1f\n",(sum-max-min)/8);
	return 0;
}
