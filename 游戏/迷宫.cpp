#include <iostream>

#include <cstdio>

#include <deque>

#include <windows.h>

using namespace std;

class node

{

public:

int x,y;

int lastOpt;

};

deque<node> sta;

int x,y;

int endx,endy;

int mapW,mapH;

int steps;

int xopt[5]= {0,0,1,0,-1};

int yopt[5]= {0,1,0,-1,0};

int map[100][100]=

{



};

void init()

{

	x = 1;

	y = 1;

	endx = 1;

	endy = 9;

	mapH = 10;

	mapW = 10;

	for(int i=0; i<=mapH; i++)

		for(int j=0; j<=mapW; j++)

		{

			if(i==0 ||j==0 ||i==mapH||j==mapW)

				map[i][j]=-1;

		}

	steps=0;

	map[1][2]=-1;

	map[2][2]=-1;

	map[3][2]=-1;

	map[4][2]=-1;


	map[6][2]=-1;

	map[7][2]=-1;

	map[8][2]=-1;

	map[9][2]=-1;

	map[9][3]=-1;

	map[8][3]=-1;

	map[1][4]=-1;

	map[3][4]=-1;

	map[4][4]=-1;

	map[5][4]=-1;

	map[6][4]=-1;

	map[7][4]=-1;

	map[1][6]=-1;

	map[2][6]=-1;

	map[3][6]=-1;

	map[4][6]=-1;

	map[5][6]=-1;

	map[6][6]=-1;

	map[7][6]=-1;

	map[8][6]=-1;

	map[8][7]=-1;

	map[8][8]=-1;

	map[7][8]=-1;

	map[6][8]=-1;

	map[5][8]=-1;

	map[4][8]=-1;

	map[3][8]=-1;

	map[2][8]=-1;

	map[1][8]=-1;

	map[endx][endy]=5;

}


void dis()

{

	system("cls");

	int ori = map[x][y];

	map[x][y]=1;

	for(int i=0; i<=mapH; ++i)

	{

		for(int j=0; j<=mapW; ++j)

		{

			if(map[i][j]==0)

			printf("? ");

			else if(map[i][j]==-1)

			printf(" #");

			else if(map[i][j]==1)

			printf(" @");

			else if(map[i][j]==2)

				printf(" .");

			else if(map[i][j]==5)

				printf(" !");

		}

		cout<<i<<endl;

	}

	for(int j=0; j<=mapW; ++j)

		cout<<j<<" ";

	printf("\n\n > steps:%d? Exit:(%d,%d)\n",steps,endx,endy);

	map[x][y] = ori;

}

int can(int n)

{

	if(map[x+xopt[n]][y+yopt[n]] == 0 || map[x+xopt[n]][y+yopt[n]] == 5)

		return 1;

	return 0;


}

void visit(int n)

{

	map[x][y]=2;

	x+=xopt[n];

	y+=yopt[n];

	node tem;

	tem.x = x;

	tem.y = y;

	tem.lastOpt = n;

	sta.push_back(tem);

	steps++;

}

int main()

{

	init();

	node tem;

	while( x != endx || y!=endy)

	{

		int cans = 0;

		for(int i=1; i<=4; i++)

		{

			if(can(i))

		{

			cans = 1;

			visit(i);

			break;

		}

		}

		if(!cans)

		{

			if(!sta.empty())

			{

				tem = sta.back();

				map[tem.x][tem.y]=0;

				sta.pop_back();

			}

			else

			{

				map[x][y]=2;

				x+=xopt[tem.lastOpt];

				x+=yopt[tem.lastOpt];

				dis();

				break;

			}
		}
		dis();

		Sleep(500);
	}

	if(x==endx && y == endy)

	cout<<"\n > i am finished....\n";

	else

	cout<<"\n > i am finished...but i can't find the right way\n";

	return 0;

}


