#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int main()
{
	int i,x,n,j=1;
	srand(time(0));
	n=rand()%100+1;
	printf("%d\n",n);
	printf("��1�Σ�\n"); 
	scanf("%d",&x);
	for(i=1;i<=j;i++)
	{
		
		if(x!=n)
		{
			printf("��%d�Σ�\n",j+1);
			scanf("%d",&x); 
		} 
		else if(x==n) 
		{
			printf("��ϲ��¶��ˣ�\n"); 
			break; 
		}
		j++;
		
	}
	printf("��ȷ����%d",x);
	return 0; 
} 
