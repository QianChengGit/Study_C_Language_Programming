#include<stdio.h>
#include<string.h>
int main()
{
	char str[10000]="abc",ch;
	int i,j=0,dx=0,dy=0,dz=0;
	printf("������һ��Ӣ����ӣ�\n");
	gets(str);
	int n=strlen(str);
	for(i=0;i<n;i++)
	{
		ch=str[i];
		if(ch>='A' && ch<='Z')
			dx++;
		else if(ch>='a' && ch<='z')
			dy++;
		else if(ch>='0' && ch<='9')
			dz++;	 
		else
			j++;
	}
	printf("���ʸ����� %d",j);
	return 0;
} 
