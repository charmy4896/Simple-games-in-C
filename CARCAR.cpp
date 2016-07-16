#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<process.h>
#include<stdio.h>


int mat[26][80],c1=20,c2=c1+3,cx=21,point,i,j,my,ur;


void again();
void lanecross();
void start();
void dis();
void border();
void car();
void clear();
void obstacle();
void down();
void pointcnt();
void seeafter();



void main()
{
clrscr();
textcolor(BLACK);
textbackground(7);
gotoxy(54,2);
cout<<"CHARMY PATEL";
gotoxy(7,7);
cout<<"Welcome to the car game";
gotoxy(9,9);
cout<<"Choose symbol of your car and enemy's car";
gotoxy(11,11);
cout<<"1.@";
gotoxy(11,12);
cout<<"2.#";
gotoxy(11,13);
cout<<"3.$";
gotoxy(11,14);
cout<<"4.+";
gotoxy(11,15);
cout<<"5.&";
gotoxy(11,16);
cout<<"6.~";
gotoxy(11,17);
cout<<"7.?";
gotoxy(11,18);
cout<<"8.*";
gotoxy(10,20);
cout<<"Enter number of your car symbol : " ;cin>>my;
gotoxy(10,21);
cout<<"Enter number of enemy's car symbol :";  cin>>ur;
getch();


clrscr();
gotoxy(54,2);
cout<<"CHARMY PATEL";
gotoxy(11,7);
cout<<"INSTRUCTIONS::";
gotoxy(11,9);
cout<<"Your car :: ";
gotoxy(23,9);
switch(my)
	{
	case 1: cout<<"@";break;
	case 2: cout<<"#";break;
	case 3: cout<<"$";break;
	case 4: cout<<"+";break;
	case 5: cout<<"&";break;
	case 6: cout<<"~";break;
	case 7: cout<<"?";break;
	case 8: cout<<"*";break;
	}
gotoxy(11,11);
cout<<"Enemy car :: ";
gotoxy(24,11);
switch(ur)
	{
	case 1: cout<<"@";break;
	case 2: cout<<"#";break;
	case 3: cout<<"$";break;
	case 4: cout<<"+";break;
	case 5: cout<<"&";break;
	case 6: cout<<"~";break;
	case 7: cout<<"?";break;
	case 8: cout<<"*";break;
	}
gotoxy(11,13);
cout<<"For up :: W";
gotoxy(11,14);
cout<<"For down :: S";
gotoxy(11,15);
cout<<"For left :: A";
gotoxy(11,16);
cout<<"For right :: D";
gotoxy(11,17);
cout<<"For pause :: P";
gotoxy(11,18);
cout<<"For quit :: Q";
getch();

clrscr();
gotoxy(54,2);
cout<<"CHARMY PATEL";
start();
clrscr();
clear();
car();
getch();
}


void start()
{
gotoxy(18,11);
cout<<"ARE you READY for RACE??";
delay(500);
gotoxy(28,13);cout<<1;
delay(500);
gotoxy(28,13);cout<<2;
delay(500);
gotoxy(28,13);cout<<3;
delay(500);
gotoxy(26,13);cout<<"START";
getch();
}


void clear()
{
for(i=0;i<26;i++)
	for(j=0;j<80;j++)
	mat[i][j]=0;
}



void obstacle()
{
for(i=0;i<25;i++)
	{
	if(i==17)
		mat[i][11]=mat[i+1][11]=mat[i+2][11]=ur;
	if(i==4)
		mat[i][21]=mat[i+1][21]=mat[i+2][21]=ur;
	if(i==12)
		mat[i][31]=mat[i+1][31]=mat[i+2][31]=ur;
	}
}


void border()
{
for(i=1;i<26;i++)
	for(j=6;j<37;j=j+10)
	mat[i][j]=9;
}



void dis()
{
clrscr();
border();
mat[c1][cx]=mat[c1+1][cx]=mat[c1+2][cx]=my;
for(i=1;i<26;i++)
	{
	for(j=1;j<80;j++)
		{
		switch(mat[i][j])
		{
		case 1 : gotoxy(j,i); cout<<"@"; break;
		case 2 : gotoxy(j,i); cout<<"#"; break;
		case 3 : gotoxy(j,i); cout<<"$";break;
		case 4 : gotoxy(j,i); cout<<"+"; break;
		case 5 : gotoxy(j,i); cout<<"&"; break;
		case 6 : gotoxy(j,i);cout<<"~";break;
		case 7 : gotoxy(j,i); cout<<"?"; break;
		case 8 : gotoxy(j,i); cout<<"*"; break;
		case 9 : gotoxy(j,i);cout<<"|";break;
		}
		}
	}
gotoxy(54,2);
cout<<"CHARMY PATEL";
gotoxy(50,7);
cout<<"POINTS :: "<<point;
gotoxy(50,9);
cout<<"YOU PRESSED :: ";
printf("%c",mat[9][65]);
}


void car()
{
char c='r';
obstacle();
do
	{
	delay(300);
	if(kbhit())
		c=getch();
	switch(c)
		{
		case 'a' :   mat[9][65]=97;
			     cx-=10;
			     if(cx<6)
				    lanecross();
			     for(i=c1;i<=c2;i++)
				{
				mat[i][cx+10]=0;
				if(mat[i-1][cx]==ur)
					lanecross();
				}
			     c='r';
			     break;    //a=left

		case 's' :   mat[9][65]=115;
			     if(c1<22)
				{
				c1++;c2++;
				mat[c1][cx]=0;
				mat[c2][cx]=my;
				}
			     c='r';
			     break;        //s=down

		case 'd' :   mat[9][65]=100;
			     cx+=10;
			     if(cx>36)
				    lanecross();
			     for(i=c1;i<=c2;i++)
				{
				mat[i][cx-10]=0;
				if(mat[i-1][cx]==ur)
					lanecross();
				}
			     c='r';
			     break;	   //d=right

		case 'w' :   mat[9][65]=119;
			     if(c1>2)
				{
				c1--;c2--;
				mat[c2][cx]=0;
				mat[c1][cx]=my;
				}
			     c='r';
			     break;      //w=up

		case 'q' :   mat[9][65]=113;
			     gotoxy(65,9);
			     printf("%c",mat[9][65]);
			     gotoxy(50,11);
			     cout<<"YOU QUIT!!!";
			     gotoxy(50,12);
			     cout<<"You scored "<<point<<" Points";
			     gotoxy(50,14);
			     cout<<"CnNGrAtuLatiOn";
			     getch();
			     exit(0);

		case 'p' :   mat[9][65]=112;
			     gotoxy(65,9);
			     printf("%c",mat[9][65]);
			     gotoxy(50,14);
			     cout<<"PAUSE";
			     getch();
			     c='r';
			     goto xyz;

		default  :   goto xyz;	   									   //q=quit
		}
	xyz:
	pointcnt();
	if(mat[c1-1][cx]==ur)
		{
		gotoxy(45,11);
		cout<<"Please See forward";
		again();
		}
	down();
	dis();
	}while(1);
}







void down()
{
int tempx,tempy,tempz;
tempx=mat[25][11];
tempy=mat[25][21];
tempz=mat[25][31];
for(i=25;i>1;i--)
	{
	if(mat[i-1][11]!=my)
	mat[i][11]=mat[i-1][11];
	if(mat[i-1][21]!=my)
	mat[i][21]=mat[i-1][21];
	if(mat[i-1][31]!=my)
	mat[i][31]=mat[i-1][31];
	}
mat[1][11]=tempx;
mat[1][21]=tempy;
mat[1][31]=tempz;
}




void lanecross()
{
gotoxy(65,9);
printf("%c",mat[9][65]);
gotoxy(45,11);
cout<<"You met with an accident";
gotoxy(45,12);
cout<<"by lane crossing";
again();
}



void pointcnt()
{
if(cx==11)
	{
	if((mat[c1-1][21]==0 && mat[c1][21]==ur)||(mat[c1-1][31]==0 && mat[c1][31]==ur))
	point++;
	}
if(cx==21)
	{
	if((mat[c1-1][11]==0 && mat[c1][11]==ur)||(mat[c1-1][31]==0 && mat[c1][31]==ur))
	point++;
	}
if(cx==31)
	{
	if((mat[c1-1][21]==0 && mat[c1][21]==ur)||(mat[c1-1][11]==0 && mat[c1][11]==ur))
	point++;
	}
}




void again()
{
char yn;
gotoxy(45,15);
cout<<"Play again(y/n)?";
cin>>yn;
if(yn=='y')
	{
	c1=20;
	c2=c1+3;
	point=0;
	cx=21;
	clear();
	car();
	}
else
	exit(0);
}