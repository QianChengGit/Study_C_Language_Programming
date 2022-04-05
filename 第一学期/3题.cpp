#include<stdio.h>
void transferBrock();
int main()
{
	transferBrock();
	return 0;	
}

void transferBrock()
{
	int x,y,z;
	for(x=0;x<=20;x++)
	{		
		for(y=0;y<=33;y++)
		{		
			for(z=0;z<=100;z+=3)
			{
					if(x+y+z==100 && 5*x+3*y+z/3==100)
					printf("%d  %d  %d\n",x,y,z);
			}			
		}		
	}

}

