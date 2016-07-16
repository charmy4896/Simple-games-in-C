#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
#include<stdio.h>
int mat[3][3]={{7,8,9},{4,5,6},{1,2,3}},pos,h=8,count=0;
void quit();
void main()
{

clrscr();
gotoxy(54,15);
cout<<"---CHARMY";
gotoxy(13,11);
cout<<"Welcome to the game of tic tac toe";
getch();


clrscr();
char player1[20],player2[20];
gotoxy(54,22);
cout<<"---CHARMY";
gotoxy(13,11);
cout<<"Enter name of player 1::";
cin>>player1;
gotoxy(13,12);
cout<<"Enter name of player 2::";
cin>>player2;
getch();

clrscr();
gotoxy(54,23);
cout<<"---CHARMY";
gotoxy(12,3);
cout<<"Enter following number for following position";
for(int i=5;i<23;i++)
	{
	gotoxy(i,10);
	cout<<"-";
	gotoxy(i,16);
	cout<<"-";
	gotoxy(10,i);
	cout<<"|";
	gotoxy(16,i);
	cout<<"|";
	}
gotoxy(7,7);
cout<<mat[0][0];
gotoxy(12,7);
cout<<mat[0][1];
gotoxy(17,7);
cout<<mat[0][2];
gotoxy(7,12);
cout<<mat[1][0];
gotoxy(12,12);
cout<<mat[1][1];
gotoxy(17,12);
cout<<mat[1][2];
gotoxy(7,17);
cout<<mat[2][0];
gotoxy(12,17);
cout<<mat[2][1];
gotoxy(17,17);
cout<<mat[2][2];



for(int t=0;t<5;t++)
{
gotoxy(30,h++);
cout<<"Enter your position for "<<player1<<"::";
cin>>pos;
count++;

if(pos==7)
	{
       if(mat[0][0]!=7)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[0][0]=48;
	gotoxy(7,7);
	printf("%c",mat[0][0]);
	}
	else if(pos==8)
	{
	if(mat[0][1]!=8)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[0][1]=48;
	gotoxy(12,7);
	printf("%c",mat[0][1]);
	}
	else if(pos==9)
	{
	if(mat[0][2]!=9)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[0][2]=48;
	gotoxy(17,7);
	printf("%c",mat[0][2]);
	}
	else if(pos==4)
	{
	if(mat[1][0]!=4)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[1][0]=48;
	gotoxy(7,12);
	printf("%c",mat[1][0]);
	}
	else if(pos==5)
	{
	if(mat[1][1]!=5)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[1][1]=48;
	gotoxy(12,12);
	printf("%c",mat[1][1]);
	}
	else if(pos==6)
	{
	if(mat[1][2]!=6)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[1][2]=48;
	gotoxy(17,12);
	printf("%c",mat[1][2]);
	}
	else if(pos==1)
	{
	if(mat[2][0]!=1)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[2][0]=48;
	gotoxy(7,17);
	printf("%c",mat[2][0]);
	}
	else if(pos==2)
	{
	if(mat[2][1]!=2)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[2][1]=48;
	gotoxy(12,17);
	printf("%c",mat[2][1]);
	}
	else if(pos==3)
	{
	if(mat[2][2]!=3)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		quit();
		}
	mat[2][2]=48;
	gotoxy(17,17);
	printf("%c",mat[2][2]);
	}
if(count==5)
	{
	gotoxy(30,h+2);
	cout<<"-------TIE--------";
	getch();
	quit();
	}

if((mat[0][0]==mat[0][1])&&(mat[0][0]==mat[0][2])||(mat[1][0]==mat[1][1])&&(mat[1][0]==mat[1][2])||
	(mat[2][0]==mat[2][1])&&(mat[2][1]==mat[2][2])||(mat[0][1]==mat[1][1])&&(mat[0][1]==mat[2][1])
	||(mat[0][2]==mat[1][2])&&(mat[1][2]==mat[2][2])||(mat[0][0]==mat[1][0])&&(mat[0][0]==mat[2][0])
	||(mat[0][0]==mat[1][1])&&(mat[0][0]==mat[2][2])||((mat[0][2]==mat[1][1])&&(mat[1][1]==mat[2][0])))
	{
	gotoxy(30,h+2);
	cout<<player1<<" WON THE GAME";
	gotoxy(30,h+3);
	cout<<"SoRRy!!!! " <<player2<<" LOOSE THE GAME";
	getch();
	quit();
	}

gotoxy(30,h++);
cout<<"Enter your position for "<<player2<<"::";
cin>>pos;
if(pos==7)
	{
	if(mat[0][0]!=7)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position";
		getch();
		quit();
		}
	mat[0][0]=88;
	gotoxy(7,7);
	printf("%c",mat[0][0]);
	}
	else if(pos==8)
	{
	if(mat[0][1]!=8)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	 mat[0][1]=88;
	 gotoxy(12,7);
	printf("%c",mat[0][1]);
	}
	else if(pos==9)
	{
	if(mat[0][2]!=9)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[0][2]=88;
	gotoxy(17,7);
	printf("%c",mat[0][2]);
	}
	else if(pos==4)
	{
	if(mat[1][0]!=4)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[1][0]=88;
	gotoxy(7,12);
	printf("%c",mat[1][0]);
	}
	else if(pos==5)
	{
	if(mat[1][1]!=5)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[1][1]=88;
	gotoxy(12,12);
	printf("%c",mat[1][1]);
	}
	else if(pos==6)
	{
	if(mat[1][2]!=6)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[1][2]=88;
	gotoxy(17,12);
	printf("%c",mat[1][2]);
	}
	else if(pos==1)
	{
	if(mat[2][0]!=1)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[2][0]=88;
	gotoxy(7,17);
	printf("%c",mat[2][0]);
	}
	else if(pos==2)
	{
	if(mat[2][1]!=2)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[2][1]=88;
	gotoxy(12,17);
	printf("%c",mat[2][1]);

	}
	else if(pos==3)
	{
	if(mat[2][2]!=3)
		{
		gotoxy(30,h++);
		cout<<"Enter valid position.";
		getch();
		quit();
		}
	mat[2][2]=88;
	gotoxy(17,17);
	printf("%c",mat[2][2]);
	}


if((mat[0][0]==mat[0][1])&&(mat[0][0]==mat[0][2])||(mat[1][0]==mat[1][1])&&(mat[1][0]==mat[1][2])||
	(mat[2][0]==mat[2][1])&&(mat[2][1]==mat[2][2])||(mat[0][1]==mat[1][1])&&(mat[0][1]==mat[2][1])
	||(mat[0][2]==mat[1][2])&&(mat[1][2]==mat[2][2])||(mat[0][0]==mat[1][0])&&(mat[0][0]==mat[2][0])
	||(mat[0][0]==mat[1][1])&&(mat[0][0]==mat[2][2])||((mat[0][2]==mat[1][1])&&(mat[1][1]==mat[2][0])))
	{
	gotoxy(30,h+2);
	cout<<player2<<"WON THE GAME";
	gotoxy(30,h+3);
	cout<<"SoRRy!!!!! "<<player1<<" LOOSE THE GAME";
	getch();
	quit();
	}
}
getch();

}

void quit()
{
clrscr();
gotoxy(54,2);
cout<<"CHARMY";
gotoxy(30,12);
cout<<"THANK YOU!!!!";
gotoxy(30,13);
cout<<"DO PLAY AGAIN";
getch();
clrscr();
gotoxy(54,2);
cout<<"CHARMY";
 cout<<"\n\n\n\n\n\n\n             Play Again(y/n):";
char  yn=getch();
 if(yn=='y')
 {
	int i,j,k=0;
	for(i=2;i>=0;i--)
		for(j=0;j<3;j++)
		mat[i][j]=++k;
	pos,h=8,count=0;
	main();
 }

exit(0);
}

