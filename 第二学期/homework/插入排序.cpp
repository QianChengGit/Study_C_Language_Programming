#include<stdio.h>
main(){
	int i,j,x;
	int a[]={0,9,8,7,6,5,4,3,2,1};
	printf("插入排序前为：\n");
	for(i=1;i<=9;i++){
		printf("%d",a[i]);
	}
	for(i=1;i<=9;i++){
		x=a[i];
		j=i-1;
		while((j>-1)&&(a[j]>x))
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	printf("\n插入排序后为：\n");
	for(i=1;i<=9;i++){
		printf("%d",a[i]);
	}
	return 0;
}
