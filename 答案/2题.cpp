#include <stdio.h>
int main(){
	int x,n=0;
	for(int i=0;i<15;i++){
		scanf("%d",&x);
		if(x==5){
			n++;
		}
	}
	printf("%d",n);
	return 0;
}
