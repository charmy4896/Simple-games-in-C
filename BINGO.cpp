#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>
int mat1[5][5],mat2[5][5],i,j,b,a1[25],a2[25],k=3,count1,count2,flag;
char player1[10],player2[10];
void ra1()
{
randomize();
for(i=0;i<25;i++)
{
a1[i]=random(25)+1;
}
for(i=0;i<25;i++)
	{
	champ:
	for(j=i-1;j>=0;j--)
		{
		if(a1[i]==a1[j])
			{
			a1[i]=random(25)+1;
			goto champ;
			}
		}
	}
}


void ra2()
{
randomize();
randomize();
randomize();
for(i=0;i<25;i++)
{
a2[i]=random(25)+1;
}
for(i=0;i<25;i++)
	{
	champ2:
	for(j=i-1;j>=0;j--)
		{
		if(a2[i]==a2[j])
			{
			a2[i]=random(25)+1;
			goto champ2;
			}
		}
	}
}



void dis1()
{
gotoxy(54,2);
cout<<"CHARMY";
gotoxy(10,4);
cout<<"---BINGO---";
gotoxy(7,7);
cout<<player1;
for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
		{
		gotoxy((i*4)+5,(j*2)+9);
		cout<<mat1[i][j]<<"  ";
		}
	}
}


void dis2()
{
gotoxy(54,2);
cout<<"CHARMY";
gotoxy(10,4);
cout<<"---BINGO---";
gotoxy(31,7);
cout<<player2;
for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
		{
		gotoxy((i*4)+29,(j*2)+9);
		cout<<mat2[i][j]<<"  ";
		}
	}
}



void search(int n)
{
for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		{
		if(mat1[i][j]==n)
			mat1[i][j]=0;
		if(mat2[i][j]==n)
			mat2[i][j]=0;
		}
dis1();
dis2();
}




void check()
{
count1=0;
if((mat1[0][0]==mat1[0][1])&&(mat1[0][1]==mat1[0][2])&&(mat1[0][2]==mat1[0][3])&&(mat1[0][3]==mat1[0][4])) count1++;
if((mat1[1][0]==mat1[1][1])&&(mat1[1][1]==mat1[1][2])&&(mat1[1][2]==mat1[1][3])&&(mat1[1][3]==mat1[1][4])) count1++;
if((mat1[2][0]==mat1[2][1])&&(mat1[2][1]==mat1[2][2])&&(mat1[2][2]==mat1[2][3])&&(mat1[2][3]==mat1[2][4])) count1++;
if((mat1[3][0]==mat1[3][1])&&(mat1[3][1]==mat1[3][2])&&(mat1[3][2]==mat1[3][3])&&(mat1[3][3]==mat1[3][4])) count1++;
if((mat1[4][0]==mat1[4][1])&&(mat1[4][1]==mat1[4][2])&&(mat1[4][2]==mat1[4][3])&&(mat1[4][3]==mat1[4][4])) count1++;
if((mat1[0][0]==mat1[1][0])&&(mat1[1][0]==mat1[2][0])&&(mat1[2][0]==mat1[3][0])&&(mat1[3][0]==mat1[4][0])) count1++;
if((mat1[0][1]==mat1[1][1])&&(mat1[1][1]==mat1[2][1])&&(mat1[2][1]==mat1[3][1])&&(mat1[3][1]==mat1[4][1])) count1++;
if((mat1[0][2]==mat1[1][2])&&(mat1[1][2]==mat1[2][2])&&(mat1[2][2]==mat1[3][2])&&(mat1[3][2]==mat1[4][2])) count1++;
if((mat1[0][3]==mat1[1][3])&&(mat1[1][3]==mat1[2][3])&&(mat1[2][3]==mat1[3][3])&&(mat1[3][3]==mat1[4][3])) count1++;
if((mat1[0][4]==mat1[1][4])&&(mat1[1][4]==mat1[2][4])&&(mat1[2][4]==mat1[3][4])&&(mat1[3][4]==mat1[4][4])) count1++;
if((mat1[0][0]==mat1[1][1])&&(mat1[1][1]==mat1[2][2])&&(mat1[2][2]==mat1[3][3])&&(mat1[3][3]==mat1[4][4])) count1++;
if((mat1[4][0]==mat1[3][1])&&(mat1[3][1]==mat1[2][2])&&(mat1[2][2]==mat1[1][3])&&(mat1[1][3]==mat1[0][4])) count1++;
switch(count1)
	{
	case 1:gotoxy(7,20);cout<<"B";break;
	case 2:gotoxy(7,20);cout<<"BI";break;
	case 3:gotoxy(7,20);cout<<"BIN";break;
	case 4:gotoxy(7,20);cout<<"BING";break;
	case 5:dis1();dis2();gotoxy(7,20);cout<<"BINGO";gotoxy(55,9);cout<<player1;gotoxy(55,10);cout<<" WON THE GAMe";getch();exit(0);
	}

count2=0;
if((mat2[0][0]==mat2[0][1])&&(mat2[0][1]==mat2[0][2])&&(mat2[0][2]==mat2[0][3])&&(mat2[0][3]==mat2[0][4])) count2++;
if((mat2[1][0]==mat2[1][1])&&(mat2[1][1]==mat2[1][2])&&(mat2[1][2]==mat2[1][3])&&(mat2[1][3]==mat2[1][4])) count2++;
if((mat2[2][0]==mat2[2][1])&&(mat2[2][1]==mat2[2][2])&&(mat2[2][2]==mat2[2][3])&&(mat2[2][3]==mat2[2][4])) count2++;
if((mat2[3][0]==mat2[3][1])&&(mat2[3][1]==mat2[3][2])&&(mat2[3][2]==mat2[3][3])&&(mat2[3][3]==mat2[3][4])) count2++;
if((mat2[4][0]==mat2[4][1])&&(mat2[4][1]==mat2[4][2])&&(mat2[4][2]==mat2[4][3])&&(mat2[4][3]==mat2[4][4])) count2++;
if((mat2[0][0]==mat2[1][0])&&(mat2[1][0]==mat2[2][0])&&(mat2[2][0]==mat2[3][0])&&(mat2[3][0]==mat2[4][0])) count2++;
if((mat2[0][1]==mat2[1][1])&&(mat2[1][1]==mat2[2][1])&&(mat2[2][1]==mat2[3][1])&&(mat2[3][1]==mat2[4][1])) count2++;
if((mat2[0][2]==mat2[1][2])&&(mat2[1][2]==mat2[2][2])&&(mat2[2][2]==mat2[3][2])&&(mat2[3][2]==mat2[4][2])) count2++;
if((mat2[0][3]==mat2[1][3])&&(mat2[1][3]==mat2[2][3])&&(mat2[2][3]==mat2[3][3])&&(mat2[3][3]==mat2[4][3])) count2++;
if((mat2[0][4]==mat2[1][4])&&(mat2[1][4]==mat2[2][4])&&(mat2[2][4]==mat2[3][4])&&(mat2[3][4]==mat2[4][4])) count2++;
if((mat2[0][0]==mat2[1][1])&&(mat2[1][1]==mat2[2][2])&&(mat2[2][2]==mat2[3][3])&&(mat2[3][3]==mat2[4][4])) count2++;
if((mat2[4][0]==mat2[3][1])&&(mat2[3][1]==mat2[2][2])&&(mat2[2][2]==mat2[1][3])&&(mat2[1][3]==mat2[0][4])) count2++;
switch(count2)
	{
	case 1:gotoxy(31,20);cout<<"B";break;
	case 2:gotoxy(31,20);cout<<"BI";break;
	case 3:gotoxy(31,20);cout<<"BIN";break;
	case 4:gotoxy(31,20);cout<<"BING";break;
	case 5:dis1();dis2();gotoxy(31,20);cout<<"BINGO";gotoxy(55,9);cout<<player2;gotoxy(55,10);cout<<" WON THE GAME";getch();exit(0);
	}
}



void main()
{
clrscr();
gotoxy(12,10);
cout<<"WElcoMe To tHe bInGo";
gotoxy(54,2);
cout<<"CHARMY";
getch();


clrscr();
gotoxy(54,2);
cout<<"CHARMY";
gotoxy(15,10);
cout<<"Enter name of player 1::";
cin>>player1;
gotoxy(15,11);
cout<<"Enter name of player 2::";
cin>>player2;

clrscr();
gotoxy(54,2);
cout<<"CHARMY";
ra1();  b=0;
for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	mat1[i][j]=a1[b++];
dis1();
ra2();  b=0;
for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	mat2[i][j]=a2[b++];
dis2();


int num;
for(i=0;i<25;i++)
{
	clrscr();
	check();
	gotoxy(55,9);
	cout<<"Enter number to be ";
	gotoxy(55,10);
	cout<<"cancelled";
	dis1();dis2();
	k=13;
	champ3:
	gotoxy(55,k++);
	cout<<player1<<"::";
	cin>>num;
	flag=0;
	for(int l=0;l<5;l++)
		{
		for(int m=0;m<5;m++)
			{
			if(mat1[l][m]==num)
			{
			flag=1;
			break;
			}
			}
		}
	if(flag==0)
	{
	gotoxy(55,k++);
	cout<<"Already cancelled Number!!";
	gotoxy(55,k++);
	cout<<"Enter again";
	goto champ3;
	}
	search(num);
	check();
	champ4:
	gotoxy(55,k++);
	cout<<player2<<"::";
	cin>>num;
	flag=0;
	for(l=0;l<5;l++)
		{
		for(int m=0;m<5;m++)
			{
			if(mat2[l][m]==num)
			{
			flag=1;
			break;
			}
			}
		}
	if(flag==0)
	{
	gotoxy(55,k++);
	cout<<"Already cancelled Number!!";
	gotoxy(55,k++);
	cout<<"Enter again";
	goto champ4;
	}

	search(num);
}



}
