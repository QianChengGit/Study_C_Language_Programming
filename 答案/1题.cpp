#include <stdio.h>
int main(){
	int n=0,x;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(n%i==0){
			x++;
		}
	} 
	if(x==0){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
} 
