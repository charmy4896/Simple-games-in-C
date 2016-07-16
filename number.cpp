#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>

int point=0,my,ur,a[36];



void disp()
{
clrscr();
int i,j ;
int p=0;
for(i=1;i<=point;i++)
a[i-1]=0;
for(i=0;i<6;i++)
	{
	for(j=0;j<6;j++)
		{
		gotoxy(15+(j*4),5+(i*2));
		cout<<a[p++];
		}
	}
gotoxy(54,2);
cout<<"CHARMY PATEL";
gotoxy(50,7);
cout<<"Take the number 36 and ";
gotoxy(54,8);
cout<<"win the Game";
gotoxy(52,10);
cout<<"CONDITIONS:";
gotoxy(50,11);
cout<<"Your number should";
gotoxy(50,12);
cout<<"be between 1 to 6";

}






void main()
{
int t;
textcolor(BLACK);
textbackground(7);
clrscr();
randomize();
for(int i=0;i<36;i++)
a[i]=i+1;
disp();

while(1){
xyz:
gotoxy(15,20);
cout<<"Enter number to be cancelled:: ";
cin>>ur;
if(ur<1 || ur>6)
	{
	gotoxy(15,21);
	cout<<"Enter number between 1 to 6";
	disp();
	goto xyz;
	}
point+=ur;
disp();
if(point<8)
	{t=random(3);my=8-point+t;}
if(point<15 && point>8)
	{t=random(2);my=15-point+t;}
if(point<22 && point>15)
	my=22-point;
if(point<29 && point>22)
	my=29-point;
if(point<36 && point>29)
	my=36-point;
if(my>6)
my=random(3)+1;
point+=my;
gotoxy(15,20);
cout<<"Umm!!!  I will enter "<<my<<" number to be cancelled";
if(point>=22 && point<29)
	{
	gotoxy(50,14);
	cout<<"Be careful";
	}
if(point>=29 && point<36)
	{
	gotoxy(50,15);
	cout<<"Game is in my hand";
	}
getch();
disp();
if(point>=36)
break;


 }
      gotoxy(20,22);
      cout<<"Yipee!!! I WON.... You loose!!!";
      getch();
}
