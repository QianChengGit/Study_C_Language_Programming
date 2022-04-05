#include<stdio.h>
void transferBrock();
int main()
{
	transferBrock();
	return 0;	
}

void transferBrock()
{
	int x,y,z,n=100,m=100;
	for(x=0;x<=33;x++)
	{		
		for(y=0;y<=50;y++)
		{		
			for(z=0;z<=100;z+=2)
			{
					if(x+y+z==100 && 3*x+2*y+z/2==100)
					printf("%d  %d  %d\n",x,y,z);
			}			
		}		
	}

}


