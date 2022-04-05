#include<stdio.h>
main(){
	int i,j,low,high,m,n;
	
	
	int a[]={0,9,8,7,6,5,4,3,2,1};
	printf("二分法排序前为：\n");
	for(i=1;i<=9;i++){
		printf("%d",a[i]);
	}
	for(i=1;i<10;i++){
		low=0;
		high=i-1;
		n=a[i];
		while(low<=high){
			m=(low+high)/2;
			if(n<a[m]){
				high=m-1;
			}
			else
			{
				low=m+1;
			}
		}
		for(j=i-1;j>=low;j--){
			a[j+1]=a[j];
			a[low]=n;
		}
	}

	printf("\n二分法排序后为：\n");
	for(i=1;i<=9;i++){
		printf("%d",a[i]);
	}
	return 0;
}
