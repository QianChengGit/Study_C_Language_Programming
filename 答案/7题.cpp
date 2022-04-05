#include<stdio.h>
int main(){
	int a=1;
	double sum=1.0;
	double i;
	for(int i=2;i<=100;i++){
		a=(-1)*a;
		sum = sum +a/i;
	}
	printf("1-1/2+1/3-1/4+1/5.....+1/99-1/100=%f\n",sum);
	return 0;
}
