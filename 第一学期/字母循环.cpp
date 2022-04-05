#include<stdio.h>
#include<conio.h>
int main()
{
	char ch1,ch2;
	ch1=getchar();
	if (ch1>='A'&&ch1<='X'){
	
	ch2=ch1+2;
	printf("%c",ch2);
	}
	else if(ch1>='Y'&&ch1<='Z')
	{
		ch2=ch1-24;
		printf("%c",ch2);
	}	
	else
	printf("ÊäÈëÎÞÐ§"); 
	
} 
