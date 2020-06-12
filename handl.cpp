#include "handl.h"

// dieu kien game
void dieukien (ran &snack)
{
	int i;
	for(i=snack.n-1;i>0;i--)
	{
		snack.dot[i]=snack.dot[i-1];
	}

	if(kbhit())
		{
			char key=getch();
			if(key=='A'||key=='a'&&snack.tt!=RIGHT)
			snack.tt=LEFT;
			else if(key=='D'||key=='d'&&snack.tt!=LEFT)
			snack.tt=RIGHT;
			else if(key=='W'||key=='w'&&snack.tt!=DOWN)
			snack.tt=UP;
			else if(key=='S'||key=='s'&&snack.tt!=UP)
			snack.tt=DOWN;
		}
	if(snack.tt==LEFT)
	snack.dot[0].x--;
	else if(snack.tt==RIGHT)
	snack.dot[0].x++;
	else if(snack.tt==UP)
	snack.dot[0].y--;
	else if(snack.tt==DOWN)
	snack.dot[0].y++;
}
// xu ly ran an hoa qua va tang do kho cho game
int xuly1 (ran &snack,hoaqua &hq,int &dokho)
{
	int i;
	snack.diem.a=0;
	if(snack.dot[0].x==hq.td.x&&snack.dot[0].y==hq.td.y)
	{
		for(i=snack.n-1;i>0;i--)
		snack.dot[i]=snack.dot[i-1];
		snack.n++;
	if(snack.tt==LEFT)
	snack.dot[0].x--;
	else if(snack.tt==RIGHT)
	snack.dot[0].x++;
	else if(snack.tt==UP)
	snack.dot[0].y--;
	else if(snack.tt==DOWN)
	snack.dot[0].y++;
	srand(time(NULL));
	hq.td.x=rand()%24;
	hq.td.y=rand()%24;
	if(dokho>50)
	{
	dokho-=10;
	}

	snack.diem.a=snack.n-2;
	}

}
// xu ly ran an boom

 //xy ly thua game
int gameover (ran snack)
{
	int i;
	for(i=1;i<snack.n;i++)
	{
	if(snack.dot[0].x<0||snack.dot[0].y<0||snack.dot[0].x>=ngang||snack.dot[0].y>=doc||(snack.dot[0].x==snack.dot[i].x&&snack.dot[0].y==snack.dot[i].y))
	return -1;
	}
}

int xuly2(ran &snack,hoaqua &hq,int &dokho)
{

		int i;
	snack.diem.a=0;
	if(snack.dot[0].x==hq.td.x&&snack.dot[0].y==hq.td.y)
	{
		for(i=snack.n-1;i>0;i--)
		snack.dot[i]=snack.dot[i-1];
		snack.n++;
	if(snack.tt==LEFT)
	snack.dot[0].x--;
	else if(snack.tt==RIGHT)
	snack.dot[0].x++;
	else if(snack.tt==UP)
	snack.dot[0].y--;
	else if(snack.tt==DOWN)
	snack.dot[0].y++;
	srand(time(NULL));
	hq.td.x=rand()%24;
	hq.td.y=rand()%24;
	if(dokho>50)
	{
	dokho-=10;
	}

	snack.diem.a=snack.n-2;
	}

	if(snack.dot[0].x>ngang&&snack.tt ==RIGHT)
	{
		snack.dot[0].x =	snack.dot[0].x -26;
		snack.dot[0].y =	snack.dot[0].y ;
		snack.tt == RIGHT;
	
	}
		else if(snack.dot[0].x<0&&snack.tt ==LEFT)
	{
		snack.dot[0].x =	snack.dot[0].x +26;
		snack.dot[0].y =	snack.dot[0].y ;
		snack.tt == LEFT;
	
	}	else if(snack.dot[0].y>doc&&snack.tt == DOWN)
	{
		snack.dot[0].x =	snack.dot[0].x;
		snack.dot[0].y =	snack.dot[0].y -26;
		snack.tt ==DOWN;
	
	}
		else if(snack.dot[0].y<0&&snack.tt ==UP)
	{
		snack.dot[0].x =snack.dot[0].x -26;
		snack.dot[0].y =snack.dot[0].y -26;
		snack.tt == UP;
	
	}
	
}
int gameover2 (ran snack)
{
	int i;
	for(i=1;i<snack.n;i++)
	{
	if((snack.dot[0].x==snack.dot[i].x&&snack.dot[0].y==snack.dot[i].y))
	
	return -1;
	}
}
