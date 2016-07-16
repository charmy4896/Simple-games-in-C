#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
int point,blank,length=12,a=34,z=45,side,dir,i,j,y=20;
int mat[25][80],x=26,xp=x-length,x1=55,x1p=x1+length;  //globally point,side,dir=0
char pos;


void clear()
{

for(i=1;i<25;i++)
	{                  //clear
	for(j=1;j<80;j++)
	mat[i][j]=0;
	}
}




void box()
{
clear();
for(i=a;i<a+length;i++)                       //   {34,23)...(45,23)
mat[y][i]=2;
if(y==20)
y--;
}



void border()
{
for(i=2;i<22;i++)
		for(j=20;j<61;j++)
		{
			if(i==2||i==21)
			mat[i][j]=8;     //-
			if(j==20||j==60)
			mat[i][j]=4;  //|
		}

}




void again();




void disp()
{
clrscr();
border();
for(i=0;i<25;i++)
{
	for(j=0;j<80;j++)
	{
		switch(mat[i][j])
		{
		case 2:gotoxy(j,i);cout<<"*";break;
		case 4:gotoxy(j,i);cout<<"|";break;
		case 8:gotoxy(j,i);cout<<"-";break;
		}
	}
}
gotoxy(a,22);
cout<<"|";
gotoxy(z,22);
cout<<"|";
gotoxy(a,23);
cout<<"a";
gotoxy(z,23);
cout<<"z";
gotoxy(z,24);
cout<<length;
gotoxy(a,24);
cout<<1;
gotoxy(65,5);
cout<<"[|-|@R|\/|Y";
gotoxy(3,5);
cout<<"STACK GAME";
gotoxy(3,9);
cout<<"POINTS:"<<point;
gotoxy(3,11);
cout<<"LENGTH:"<<length;
gotoxy(3,13);
cout<<"a:"<<a;
gotoxy(3,15);
cout<<"z:"<<z;
}







void out()
{
getch();
clrscr();
gotoxy(54,3);
cout<<"---[|-|@R|\/|Y";
gotoxy(13,2);
cout<<"STACK GAME";
gotoxy(13,11);
cout<<"SoRRy you out";
getch();
again();
getch();
}



void space()
{
switch(blank)
	{
	case 1:xp++;mat[y][xp]=0;break;
	case 2:x1p--;mat[y][x1p]=0;break;
	}
}


void caseb()
{
if(side)                                   //side=1==right
	  {
	  if(x1>a)
		{z=z;a=x1;}
	  if(x1<a)
		{a=a;z=x1p-1;}
	  for(i=0;i<a;i++)
		mat[y][i]=0;
	  for(j=79;j>z;j--)
		mat[y][j]=0;
	  if((dir%2)==0)
	  side--;
	  dir=0;
	   }
else                                        //side=0==left
	{
	if(x<z)
		{z=x;a=a;}
	if(x>z)
		{z=z;a=xp+1;}
	for(i=0;i<a;i++)
		mat[y][i]=0;
	for(i=79;j>z;j--)
		mat[y][j]=0;
	if((dir%2)==0)
	side++;
	dir=0;
	}
y--;
if(y<6)
{
for(i=20;i>5;i--)
	for(j=20;j<60;j++)
	mat[i][j]=mat[i-1][j];
y++;
}
length=z-a+1;
x=26;xp=x-length;x1=55;x1p=x1+length;
if(z<a)
out();
point++;
}






void stack()
{
char c;int t;
box();
do
	{
	rev:
	delay(100);
	switch(side)
		{
		case 1:c='a';blank=2; break;   //left
		case 0:c='d';blank=1; break;   //right
		}
	  if(kbhit())
		c=getch();
	  CHAMP:
	switch(c)
		{
		case 'd': x++; if(mat[y][x]==4)
				{
				side++;x1=xp;x1p=x-1;dir++;
				for(i=x1;i<=x1p;i++)
					mat[y][i]=2;
				mat[y][x-1]=0;
				goto rev;
				}
				break;//right
		case 'a': x1--;if(mat[y][x1]==4)
				{
				side--; x=x1p;xp=x1+1;dir++;
				for(i=xp;i<=x;i++)
					mat[y][i]=2;
				mat[y][x1+1]=0;
				goto rev;
				}
				break;//left
		case 'q': {
				clrscr();
				gotoxy(54,3);
				cout<<"---[|-|@R|\/|Y";
				gotoxy(13,2);
				cout<<"STACK GAME";
				gotoxy(13,11);
				cout<<"You QUIT";
				gotoxy(15,13);
				cout<<"YOUR point is::"<<point;
				getch();
				again();
				getch();
			   }



		case 'b':caseb();break;
		case 'p':gotoxy(25,8);cout<<"PAUSE";getch();c=pos;goto CHAMP;
		default :c=pos;goto CHAMP;
		}
	    pos=c;
	    if(side)
		mat[y][x1]=2;
	    else
		mat[y][x]=2;
	space();
	disp();
	}while(length);

}





void main()
{
clrscr();
gotoxy(54,2);
cout<<"---[|-|@R|\/|Y";
gotoxy(13,11);
cout<<"Welcome to Stack";
gotoxy(13,12);
cout<<"Press any key";
getch();


clrscr();
gotoxy(54,2);
cout<<"---[|-|@R|\/|Y";
gotoxy(13,11);
cout<<"INSTRUCTIONS";
gotoxy(15,13);
cout<<"1.B for Stop";
gotoxy(15,14);
cout<<"2.P for Pause";
gotoxy(15,15);
cout<<"3.Q for Quit";
getch();



clear();
stack();
}




void again()
{
clrscr();
char yn;
gotoxy(54,3);
cout<<"---[|-|@R|\/|Y";
gotoxy(13,2);
cout<<"STACK GAME";
gotoxy(13,11);
cout<<"Want to play again(y)?";
yn=getch();
if(yn=='y')
	{
	length=12;
	a=34;z=45;
	point=0;
	side=0;y=20;dir=0;
	x=26;
	xp=x-length;
	x1=55;
	x1p=x1+length;
	main();
	}
else
	{
	exit(0);
	}
}