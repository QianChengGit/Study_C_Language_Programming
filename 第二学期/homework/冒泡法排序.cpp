#include<stdio.h>
 int creat(int a[])
{
	int i=0,x;
	scanf("%d",&x);
	while(x!=0)
	{
		a[i]=x; 
		i++; 
		scanf("%d",&x);
	}
	return(i);
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	  printf("%5d",a[i]);
	printf("\n\n");
}
main()
{
	int a[10];
	int na;
	printf("����a���飺����10�����ݣ���0������\n");
	na=creat(a);
	printf("a������%d��Ԫ�أ�\n",na);
	print(a,na);
	int i,j,t;  
    printf("ʹ��ð����������\n");  
   
    for(i=0;i<10-1;i++)
    {  
        for(j=0;j<10-i-1;j++) 
        {  
            if(a[j]>a[j+1])
            {  
               t=a[j+1];  
               a[j+1]=a[j];  
               a[j]=t;  
            }  
        }  
    }  
  
    printf("���кõ������ǣ�\n");  
    
    for(i=0;i<10;i++)  
    {  
  
        printf("%d ",a[i]);  
    }  
    return 0;  
} 
