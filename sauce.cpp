#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>

char nametemp[50],ratetemp[5],datetemp[5],casttemp[200];

struct member
{
char username[100];
char password[100];
char consword[100];
char phoneno[15];
char memname[30];
char mememail[50];
char memadd[150];
char sqa[30];
};
void download()
{clrscr();
textcolor(4);
for(int i=0;i<80;i++)
cprintf("*");
gotoxy(1,24);
for(i=0;i<80;i++)
cprintf("*");
gotoxy(1,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(1,i);
}
gotoxy(80,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(80,i);
}
gotoxy(30,3);
textcolor(12+BLINK);
cprintf("  F L I C K I N I T Y");
gotoxy(10,12);
textcolor(7);
cprintf("D O W N L O A D I N G ");
for(i=0;i<3;i++)
  {
   gotoxy(37,12);
   for(int j=0;j<30;j++)
   {
    delay(50);
    cprintf("=");
   }
  gotoxy(37,12);
  if(i<2)
 {for(int k=0;k<30;k++)
  cout<<" ";
  delay(50);}
  }
delay(1000);
gotoxy(10,12);
for(i=0;i<58;i++)
cprintf(" ");
gotoxy(30,12);
cprintf("DOWNLOADED SUCCESSFULLY");
getch();
}
void granted()
{clrscr();
textcolor(4);
for(int i=0;i<80;i++)
cprintf("*");
gotoxy(1,24);
for(i=0;i<80;i++)
cprintf("*");
gotoxy(1,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(1,i);
}
gotoxy(80,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(80,i);
}
gotoxy(30,3);
textcolor(12+BLINK);
cprintf("  F L I C K I N I T Y");
gotoxy(35,12);
textcolor(7);
cprintf("ACCESS GRANTED");
delay(2200);
}
void denied()
{clrscr();
textcolor(4);
for(int i=0;i<80;i++)
cprintf("*");
gotoxy(1,24);
for(i=0;i<80;i++)
cprintf("*");
gotoxy(1,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(1,i);
}
gotoxy(80,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(80,i);
}
gotoxy(30,3);
textcolor(12+BLINK);
cprintf("  F L I C K I N I T Y");
gotoxy(35,12);
textcolor(7);
cprintf("ACCESS DENIED");
delay(2000);
}
void unavailable()
{clrscr();
for(int i=0;i<80;i++)
cprintf("*");
gotoxy(1,24);
for(i=0;i<80;i++)
cprintf("*");
gotoxy(1,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(1,i);
}
gotoxy(80,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(80,i);
}
gotoxy(30,3);
textcolor(12+BLINK);
cprintf("  F L I C K I N I T Y");
gotoxy(18,12);
textcolor(12);
cprintf("T H I S  P A C K  I S  U N A V A I L A B L E");
delay(2500);
}
void success()
{clrscr();
textcolor(4);
for(int i=0;i<80;i++)
cprintf("*");
gotoxy(1,24);
for(i=0;i<80;i++)
cprintf("*");
gotoxy(1,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(1,i);
}
gotoxy(80,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(80,i);
}
gotoxy(30,3);
textcolor(12+BLINK);
cprintf("  F L I C K I N I T Y");
textcolor(12);
gotoxy(21,12);
cprintf("THE PAYMENT HAS BEEN MADE SUCCESSFULLY");
textcolor(2);
gotoxy(25,15);cprintf("                           $");
gotoxy(25,16);cprintf("                          $");
gotoxy(25,17);cprintf("                        $");
gotoxy(25,18);cprintf("                      $");
gotoxy(25,19);cprintf("$                   $");
gotoxy(25,20);cprintf("   $              $");
gotoxy(25,21);cprintf("      $         $ ");
gotoxy(25,22);cprintf("         $    $");
gotoxy(25,23);cprintf("            $");
delay(6000);
}
void wait()
{clrscr();
textcolor(4);
for(int i=0;i<80;i++)
cprintf("*");
gotoxy(1,24);
for(i=0;i<80;i++)
cprintf("*");
gotoxy(1,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(1,i);
}
gotoxy(80,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(80,i);
}
gotoxy(30,3);
textcolor(12+BLINK);
cprintf("  F L I C K I N I T Y");
gotoxy(35,12);
textcolor(7);
cprintf("PLEASE WAIT");
delay(2000);
}
void plan()
{normvideo;
delay(700);
textcolor(12+BLINK);
cprintf("F L I C K I N I T Y");
cout<<endl<<endl;
textcolor(8);
cprintf("YOU ARE ALMOST THERE");
cout<<endl<<endl;
textcolor(7);
cprintf("S E L E C T  Y O U R  P L A N");
cout<<endl;normvideo;
cprintf("_____________________    <-  FLICKFREAK INDICATOR");
cout<<endl;
cout<<": : : : : : : : : : :"<<endl;
cout<<"0 1 2 3 4 5 6 7 8 9 10";
cout<<endl;normvideo;
for(int i=10;i<25;i++)
{
gotoxy(1,i);
cout<<"|"<<endl;}
gotoxy(5,10);
textbackground(15);
textcolor(0);
cprintf("1 THE SUBTLE PACK");
gotoxy(3,12);
textcolor(7);
textbackground(0);
cprintf("Suitable for 0-4 Raters");
gotoxy(3,14);
cprintf("Watch your favourites");
gotoxy(3,16);
cprintf("In your Time slots");
gotoxy(3,18);
cprintf("Member Access");
gotoxy(3,20);
cprintf("Rupees 449/mon");
gotoxy(3,22);
cprintf("Rupees 4499/year");
for(i=10;i<25;i++)
{gotoxy(27,i);normvideo;
cout<<"|";}
gotoxy(30,10);
textbackground(15);
textcolor(0);
cprintf("2 THE STANDARD PACK");
gotoxy(29,12);
textcolor(7);
textbackground(0);
cprintf("Suitable for 5-7 Raters");
gotoxy(29,14);
cprintf("Watch your favourites");
gotoxy(29,16);
cprintf("Anytime & Anywhere");
gotoxy(29,18);
cprintf("3 Device Access");
gotoxy(29,20);
cprintf("Rupees 649/mon");
gotoxy(29,22);
cprintf("Rupees 6499/year");
for(i=10;i<25;i++)
{gotoxy(52,i);normvideo;
cout<<"|";}
gotoxy(57,10);
textbackground(15);
textcolor(0);
cprintf("3  THE MOVIEPHILE PACK");
textcolor(7);
textbackground(0);
gotoxy(54,12);
cprintf("Suitable for 7-10 Raters");
gotoxy(54,14);
cprintf("Early Access to New Flicks");
gotoxy(54,16);
cprintf("Access to Premium Contents");
gotoxy(54,18);
cprintf("Anytime & Anywhere");
gotoxy(54,20);
cprintf("6 Device Access");
gotoxy(54,22);
cprintf("Rupees 849/mon");
gotoxy(54,24);
cprintf("Rupees 8499/year");
for(i=10;i<25;i++)
{gotoxy(80,i);normvideo;
cout<<"|";}
}
void cut()
{ textcolor(7);
  gotoxy(31,11);cout<<"****            "<<endl;
  gotoxy(31,12);cout<<"    ****         "<<endl;
  gotoxy(31,13);cout<<"      ****       "<<endl;
  gotoxy(31,14);cout<<"          ****   "<<endl;
  gotoxy(31,15);cout<<"           ***** "<<endl;
  gotoxy(31,16);cout<<"**************** "<<endl;
  gotoxy(31,17);cout<<"**************** "<<endl;
  gotoxy(31,18);cout<<"**************** "<<endl;
  gotoxy(31,19);cout<<"**************** "<<endl;
  gotoxy(31,20);cout<<"**************** "<<endl;
  gotoxy(31,21);cout<<"**************** "<<endl;
}
void TSP()
{clrscr();
textcolor(4);
for(int i=0;i<80;i++)
cprintf("*");
gotoxy(1,24);
for(i=0;i<80;i++)
cprintf("*");
gotoxy(1,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(1,i);
}
gotoxy(80,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(80,i);
}
gotoxy(30,3);
textcolor(12+BLINK);
cprintf("  F L I C K I N I T Y");
textcolor(7);
gotoxy(3,5);
cprintf("  W E L C O M E  T O  T H E  H O L L Y W O O D ' S  H A L L  O F  F A M E");
gotoxy(3,7);
cprintf("                    YOU HAVE SELECTED THE SUBTLE PACK");
gotoxy(3,9);
cprintf("                STREAM AND DOWNLOAD TO YOUR HEART'S CONTENT ");
gotoxy(3,23);
cprintf("                             GO TO HOME PAGE");
cut();
getch();
}
void TMP()
{clrscr();
textcolor(4);
for(int i=0;i<80;i++)
cprintf("*");
gotoxy(1,24);
for(i=0;i<80;i++)
cprintf("*");
gotoxy(1,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(1,i);
}
gotoxy(80,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(80,i);
}
gotoxy(30,3);
textcolor(12+BLINK);
cprintf("  F L I C K I N I T Y");
textcolor(7);
gotoxy(3,5);
cprintf("  W E L C O M E  T O  T H E  H O L L Y WO O D ' S  H A L L  O F  F A M E");
gotoxy(3,7);
cprintf("                   YOU HAVE SELECTED THE STANDARD PACK");
gotoxy(3,9);
cprintf("                STREAM AND DOWNLOAD TO YOUR HEART'S CONTENT ");
gotoxy(3,23);
cprintf("                             GO TO HOME PAGE");
cut();
getch();
}
void TMGP()
{clrscr();
textcolor(4);
for(int i=0;i<80;i++)
cprintf("*");
gotoxy(1,24);
for(i=0;i<80;i++)
cprintf("*");
gotoxy(1,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(1,i);
}
gotoxy(80,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(80,i);
}
gotoxy(30,3);
textcolor(12+BLINK);
cprintf("  F L I C K I N I T Y");
textcolor(7);
gotoxy(3,5);
cprintf("  W E L C O M E  T O  T H E  H O L L Y W O O D ' S  H A L L  O F  F A M E");
gotoxy(3,7);
cprintf("                   YOU HAVE SELECTED THE MOVIEPHILE PACK");
gotoxy(3,9);
cprintf("                STREAM AND DOWNLOAD TO YOUR HEART'S CONTENT ");
gotoxy(3,23);
cprintf("                             GO TO HOME PAGE");
cut();
getch();
}

void redirect()
{clrscr();
gotoxy(33,2);
cprintf("REDIRECTING");
gotoxy(22,4);
cprintf("(please do not refresh or go back)");
delay(4500);
}
void cardcomp(char cardnos[20])
{        if(strlen(cardnos)==15)
       { if(cardnos[0]=='3'&&cardnos[1]=='7')
	{gotoxy(10,14);
	 cprintf("AMERICAN EXPRESS");
	}
	 else
	if(cardnos[0]=='3'&&cardnos[1]=='8')
	{gotoxy(10,14);
	 cprintf("DINERS CLUB");
	}}
	else
	if(strlen(cardnos)==16)
	{if(cardnos[0]=='4')
	{gotoxy(10,14);
	 cprintf("VISA");
	}
	else
	if(cardnos[0]=='5')
	{gotoxy(10,14);
	 cprintf("MASTERCARD");
	}
	else
	if(cardnos[0]=='6')
	{gotoxy(10,14);
	 cprintf("DISCOVER CARD");
	}
	}
	}
void getcard()
{char cardno[20],name[20];
int op,mon,year,cvv;
	 gotoxy(31,13);
	 gets(cardno);
	 cardcomp(cardno);
	if(strlen(cardno)!=16||strlen(cardno)==15)
	do
       {gotoxy(10,14);
	cprintf("ENTER A VALID CARD NUMBER");
	delay(1200);
	gotoxy(10,14);
	cprintf("                                ");
	gotoxy(31,13);
	for(int i=0;i<strlen(cardno);i++)
	cprintf(" ");
	gotoxy(31,13);
	gets(cardno);
	cardcomp(cardno);}
	while(strlen(cardno)=='15'||strlen(cardno)=='16');
	gotoxy(31,16);
	cprintf("__/__");
	gotoxy(31,16);
	cin>>mon;
	if(mon<0||mon>12)
	 do
	{gotoxy(31,16);
	cprintf("  ");
	gotoxy(31,16);
	 cprintf("__");
	 gotoxy(31,16);
	cin>>mon;
	}while(mon<12&&mon>0);
	gotoxy(34,16);
	delay(800);
	cin>>year;
	if(year>99||year<0)
	do
	{gotoxy(34,16);
	cprintf("__");
	gotoxy(34,16);
	delay(800);
	cin>>year;
	}while(year<100&&year>0);
	gotoxy(55,16);
	cprintf("___");
	gotoxy(55,16);
	cin>>cvv;
	if(cvv<-1||cvv>999)
	do
	{gotoxy(55,16);
	 cprintf("   ");
	gotoxy(55,16);
	cprintf("___");
	gotoxy(55,16);
	cin>>cvv;
	}
	while(cvv>-1&&cvv<1000);
	gotoxy(31,19);
	gets(name);
}
void getinfo(member &m)
{char n;
do
{clrscr();
textcolor(5);
for(int i=0;i<25;i++)
{cprintf("*");
cout<<endl;}
gotoxy(80,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(80,i);}
delay(800);
textcolor(12+BLINK);
gotoxy(3,1);
cprintf("F L I C K I N I T Y");
gotoxy(3,4);
textcolor(14);
textbackground(0);
cprintf("Watch All Of Your Favourite Movies Here");
delay(800);
gotoxy(3,7);
textcolor(8);
cprintf("NAME:                   ");
gotoxy(3,9);
cprintf("PHONE:                  ");
gotoxy(3,11);
cprintf("EMAIL ID:               ");
gotoxy(3,13);
cprintf("ADDRESS:                ");
gotoxy(3,15);
cprintf("SET USERNAME:           ");
gotoxy(3,17);
cprintf("SET PASSWORD:           ");
gotoxy(3,19);
cprintf("CONFIRM PASSWORD:       ");
gotoxy(3,21);
cprintf("MOVIE THAT YOU DISLIKE: ");
normvideo();
textcolor(7);
gotoxy(25,7);
gets(m.memname);
gotoxy(25,9);
gets(m.phoneno);
gotoxy(27,11);
gets(m.mememail);
gotoxy(27,13);
gets(m.memadd);
gotoxy(27,15);
gets(m.username);
gotoxy(27,17);
gets(m.password);
gotoxy(27,19);
gets(m.consword);
while(strcmp(m.password,m.consword)!=0)
{gotoxy(27,22);
 cprintf("The Password does not match...");
 delay(1600);
 gotoxy(27,22);
 cprintf("                              ");
 gotoxy(27,19);
 int l=strlen(m.consword);
 for(int i=0;i<l;i++)
 cout<<" ";
 gotoxy(27,19);
 gets(m.consword);
}
gotoxy(27,21);
gets(m.sqa);
gotoxy(3,23);
cprintf("WOULD YOU LIKE TO MAKE SOME CHANGES(Y/N)?");
cin>>n;
}
while(n=='y'||n=='Y');
getch();
}
void write(member m)
{
ofstream f("C:/moviesearchproject/mem.txt",ios::app);
int len1,len2,len3,len4;
len1=strlen(m.username);
len2=strlen(m.password);
len4=strlen(m.sqa);
char c='\n';
f<<'{';
f.write((char*)&m.username,len1).put('#');
f.write((char*)&m.sqa,len4).put('^');
f.write((char*)&m.password,len2).put('}');
f<<c;
}
void forgot()
{clrscr();
char use[40],sq[40];
int l1,l2,a1,a2,len1;long Q;
textcolor(4);
for(int i=0;i<80;i++)
cprintf("*");
gotoxy(1,24);
for(i=0;i<80;i++)
cprintf("*");
gotoxy(1,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(1,i);
}
gotoxy(80,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(80,i);
}
gotoxy(30,3);
textcolor(12+BLINK);
cprintf("  F L I C K I N I T Y");
gotoxy(3,5);
textcolor(5);
cprintf("DiD YoU KnOw:");
textcolor(1);
cprintf("'THE WORLD PASSWORD DAY'");
textcolor(9);
cprintf("IS CELEBRATED ON FIRST THURSDAY OF MAY");
gotoxy(16,6);
cprintf(" EVERY YEAR");
gotoxy(3,8);
textcolor(8);
cprintf("ENTER YOUR USERNAME:");
gotoxy(3,10);
cprintf("ANSWER THE SECURITY QUESTION");
gotoxy(3,12);
cprintf("MOVIE THAT YOU DISLIKE:");
gotoxy(28,8);
gets(use);
l1=strlen(use);
gotoxy(28,12);
gets(sq);
l2=strlen(sq);
char usename[50],sqaa[50];
char was,cha;
int len,N;
char newpas[40],conpas[40],oldpas[40];
ifstream F("C:/moviesearchproject/mem.txt");
ofstream r("C:/moviesearchproject/mem.txt",ios::ate);
while(!F.eof())
{F>>cha;
if(cha=='{')
{
F.get(usename,50,'#');
a1=strlen(usename);
if(a1==l1)
{if(strcmp(use,usename)==0)
{F>>was;
 F.get(sqaa,50,'^');
 a2=strlen(sqaa);
 if(a2==l2)
{
 if(strcmp(sq,sqaa)==0)
{
clrscr();
textcolor(4);
for(int i=0;i<80;i++)
cprintf("*");
gotoxy(1,24);
for(i=0;i<80;i++)
cprintf("*");
gotoxy(1,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(1,i);
}
gotoxy(80,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(80,i);
}
gotoxy(30,3);
textcolor(12+BLINK);
cprintf("  F L I C K I N I T Y");
textcolor(9);
gotoxy(3,7);
cprintf("MAKE SURE YOU DON'T FORGET THIS PASSWORD");
gotoxy(3,10);
textcolor(8);
cprintf("NEW PASSWORD:");
gotoxy(3,14);
textcolor(8);
cprintf("CONFIRM PASSWORD:");
gotoxy(23,10);
textcolor(7);
gets(newpas);
gotoxy(23,14);
textcolor(7);
gets(conpas);
if(strcmp(newpas,conpas)==0)
{len=strlen(newpas);
 F>>was;
 Q=F.tellg();
 F.get(oldpas,40,'}');
 len1=strlen(oldpas);
 if(len>len1)
{r.seekp(Q);
 r.write((char*)&newpas,len).put('}');
 r.close();
 F.close();
 break;}
 else
 if(len<len1)
 {r.seekp(Q);
  r.write((char*)&newpas,len);
  r.put('}');
  for(int i=0;i<(len1-len);i++)
  r.put(' ');
  r.close();
  F.close();
  break;
}
else
{r.seekp(Q);
 r.write((char*)&newpas,len).put('}');
 r.close();
 F.close();
 break;}
}

}
}
}
}
}
}
}

 void signup()
{
 void welcomepage();
 member m;
 char username[40];
 char password[40];
char o,op,oo;
int N;
clrscr();
gotoxy(1,2);
textcolor(12+BLINK);
cprintf("F  L  I  C  K  I  N  I  T  Y");
gotoxy(1,4
);
textcolor(8);
cprintf("CINEMA");
textcolor(7);
cprintf(" is a matter of what's in the frame and what's out ~MARTIN SCORSESE");
gotoxy(1,6);

getinfo(m);
write(m);

bom:
clrscr();
plan();
int a;
textcolor(8);
cprintf("THE SELECTED PLAN IS ");
cin>>a;

switch(a)
{
case 1:
case 2:
case 3:{wait();
int op;
clrscr();
textcolor(4);
for(int i=0;i<80;i++)
cprintf("*");
gotoxy(1,24);
for(i=0;i<80;i++)
cprintf("*");
gotoxy(1,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(1,i);
}
gotoxy(80,1);
for(i=1;i<25;i++)
{cprintf("*");
gotoxy(80,i);
}
gotoxy(30,3);
textcolor(12+BLINK);
cprintf("  F L I C K I N I T Y");
textcolor(7);
gotoxy(3,5);
cprintf("SELECT YOUR PAYMENT METHOD:");
gotoxy(3,7);
cprintf("ENTER 1 FOR CREDIT CARD PAYMENT");
gotoxy(3,8);
cprintf("ENTER 2 FOR DEBIT CARD PAYMENT             -->");
cin>>op;
switch(op)
{case 1: delay(1500);
	 for(int j=11;j<22;j++)
	 {gotoxy(5,j);
	 cprintf("!");}
	 for(j=11;j<22;j++)
	 {gotoxy(74,j);
	 cprintf("!");}
	 gotoxy(6,11);
	 for(j=6;j<74;j++)
	 cprintf("*");
	 gotoxy(6,21);
	 for(j=6;j<74;j++)
	 cprintf("*");
	 gotoxy(10,13);
	 cprintf("CARD NUMBER        :");
	 gotoxy(10,16);
	 cprintf("VALID THRU         :");
	 gotoxy(42,16);
	 cprintf("CVV      :");
	 gotoxy(10,19);
	 cprintf("NAME ON CARD       :");
	 again:
	 getcard();
	 redirect();
	 success();break;
case 2:  delay(1500);
	 for(j=11;j<22;j++)
	 {gotoxy(5,j);
	 cprintf("!");}
	 for(j=11;j<22;j++)
	 {gotoxy(65,j);
	 cprintf("!");}
	 gotoxy(6,11);
	 for(j=6;j<64;j++)
	 cprintf("*");
	 gotoxy(6,21);
	 for(j=6;j<64;j++)
	 cprintf("*");
	 gotoxy(10,13);
	 cprintf("CARD NUMBER        :");
	 gotoxy(10,16);
	 cprintf("VALID THRU         :");
	 gotoxy(42,16);
	 cprintf("CVV      :");
	 gotoxy(10,19);
	 cprintf("NAME ON CARD       :");
	 getcard();
	 redirect();
	 success();break;
};
if(a==1)
TSP();
else
if(a==2)
TMP();
else
if(a==3)
TMGP();
welcomepage();
}break;
default:{unavailable(); goto bom;}

}

getch();
}
struct movie
{
 char moviename[50];
 char moviecast[250];
 float movierating;
 char movierelease[10];
};

  void moviedetailsenter(movie &m)
 {
  gotoxy(4,2);
  cout<<"Enter movie name: \n";
  gotoxy(4,3);
  gets(m.moviename);
  gotoxy(4,5);
  cout<<"Enter movie rating: \n";
  gotoxy(4,6);
  cin>>m.movierating;
  gotoxy(4,8);
  cout<<"Enter movie's release date: \n";
  gotoxy(4,9);
  gets(m.movierelease);
  gotoxy(4,11);
  cout<<"Enter movie's cast: \n";
  gotoxy(4,12);
  gets(m.moviecast);
 }

  void size(movie m)
 {
   ofstream F("C:/moviesearchproject/sp.txt",ios::app);

   int l1,l2,l3,l4;
   char s='\n';

   l1=strlen(m.moviename);
   l2=strlen(m.movierelease);
   l3=strlen(m.moviecast);

   F<<'{';
   F.write((char*)&m.moviename,l1).put('#');
   F<<m.movierating;
   F<<'$';
   F.write((char*)&m.movierelease,l2).put('%');
   F.write((char*)&m.moviecast,l3).put('}');
   F<<s;
 }

 void movieent()
{
 int i,p;
 char op,ch;
 movie m;

 clrscr();


 for(i=1;i<=24;i++)
 {
  gotoxy(1,i);
  delay(20);
  cout<<"*";
  gotoxy(80,i);
  delay(20);
  cout<<"*";
 }

 do
 {
  clrscr();
   for(i=1;i<=24;i++)
  {
   gotoxy(1,i);
   cout<<"*";
   gotoxy(80,i);
   cout<<"*";
  }

  textcolor(4);
  textbackground(3);
  moviedetailsenter(m);
  gotoxy(5,14);
  cprintf("Confirm entry?  <Y/N> ");
  gotoxy(5,15);

  cin>>op;
  if(op=='n'||op=='N')
  {
   gotoxy(5,15);
   textcolor(4);
   textbackground(1);
   cprintf("n");
   normvideo();
   continue;
  }
  else
  {
   gotoxy(5,15);
   textcolor(2);
   textbackground(1);
   cprintf("y");
   normvideo();
   size(m);
  }
  gotoxy(5,18);
  cout<<"Do you want to enter more?  <Y/N> ";
  gotoxy(5,19);
  cin>>ch;
 }
 while(ch=='y'||ch=='Y');

 getch();
}



int search(char name[50],int l)
{
 int c,j,i,check;
 char ch,waste;

 ifstream f("C:/moviesearchproject/gen.txt");

 while(!f.eof())
 {
  f>>ch;
  if(ch=='{')
  {
   f.get(::nametemp,50,'#');
   c=strlen(::nametemp);

    if(c==l)
   {
    if(strcmpi(name,::nametemp)==0)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
   else
   {
    if(strcmpi(nametemp,name)>=70 || strcmpi(nametemp,name)<=-100)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
  }

 }

 return check;
}


int searchregional(char name[50],int l)
{
 int c,j,i,check;
 char ch,waste;

 ifstream f("C:/moviesearchproject/REG.txt");

 while(!f.eof())
 {
  f>>ch;
  if(ch=='{')
  {
   f.get(::nametemp,50,'#');
   c=strlen(::nametemp);

    if(c==l)
   {
    if(strcmpi(name,::nametemp)==0)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
   else
   {
    if(strcmpi(nametemp,name)>=60 || strcmpi(nametemp,name)<=-90)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
  }

 }

 return check;
}

int searchtv(char name[50],int l)
{
 int c,j,i,check;
 char ch,waste;

 ifstream f("C:/moviesearchproject/sp.txt");

 while(!f.eof())
 {
  f>>ch;
  if(ch=='{')
  {
   f.get(::nametemp,50,'#');
   c=strlen(::nametemp);

    if(c==l)
   {
    if(strcmpi(name,::nametemp)==0)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
   else
   {
    if(strcmpi(nametemp,name)>=60 || strcmpi(nametemp,name)<=-90)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
  }

 }

 return check;
}


 int searchfandom(char name[50],int l)
{
 int c,j,i,check;
 char ch,waste;

 ifstream f("C:/moviesearchproject/fan.txt");

 while(!f.eof())
 {
  f>>ch;
  if(ch=='{')
  {
   f.get(::nametemp,50,'#');
   c=strlen(::nametemp);

    if(c==l)
   {
    if(strcmpi(name,::nametemp)==0)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
   else
   {
    if(strcmpi(nametemp,name)>=60 || strcmpi(nametemp,name)<=-90)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
  }

 }

 return check;
}
int searchhighrated(char name[50],int l)
{
 int c,j,i,check;
 char ch,waste;

 ifstream f("C:/moviesearchproject/hr.txt");

 while(!f.eof())
 {
  f>>ch;
  if(ch=='{')
  {
   f.get(::nametemp,50,'#');
   c=strlen(::nametemp);

    if(c==l)
   {
    if(strcmpi(name,::nametemp)==0)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
   else
   {
    if(strcmpi(nametemp,name)>=60 || strcmpi(nametemp,name)<=-90)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
  }

 }

 return check;
}
 int searchanimation(char name[50],int l)
{
 int c,j,i,check;
 char ch,waste;

 ifstream f("C:/moviesearchproject/am.txt");

 while(!f.eof())
 {
  f>>ch;
  if(ch=='{')
  {
   f.get(::nametemp,50,'#');
   c=strlen(::nametemp);

    if(c==l)
   {
    if(strcmpi(name,::nametemp)==0)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
   else
   {
    if(strcmpi(nametemp,name)>=60 || strcmpi(nametemp,name)<=-90)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
  }

 }

 return check;
}

int searchanime(char name[50],int l)
{
 int c,j,i,check;
 char ch,waste;

 ifstream f("C:/moviesearchproject/jp.txt");

 while(!f.eof())
 {
  f>>ch;
  if(ch=='{')
  {
   f.get(::nametemp,50,'#');
   c=strlen(::nametemp);

    if(c==l)
   {
    if(strcmpi(name,::nametemp)==0)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
   else
   {
    if(strcmpi(nametemp,name)>=60 || strcmpi(nametemp,name)<=-90)
    {
     f>>waste;
     f.get(::ratetemp,4,'$');
     f>>waste;
     f.get(::datetemp,5,'%');
     f>>waste;
     f.get(::casttemp,200,'}');
     check=1;
     break;
    }
   }
  }

 }

 return check;
}


 void rateit()
{
 clrscr();

 for(int i=1;i<25;i++)
 {
  gotoxy(1,i);
  delay(20);
  cout<<"*";
  gotoxy(80,i);
  delay(20);
  cout<<"*";
 }
 gotoxy(13,4);
 cout<<"Rate this movie, show us your opinion!";
 gotoxy(13,5);
 cout<<"Flick-o-meter ------> ";
 gotoxy(13,6);
 textcolor(3);
 cprintf("______________________________________");
 textcolor(4);
 gotoxy(13,7);
 cprintf("|   |   |   |   |   |   |   |   |   | ");
 gotoxy(13,8);
 cprintf("1   2   3   4   5   6   7   8   9   10");

 gotoxy(13,10);
 int rate;
 cin>>rate;

 delay(1000);
 gotoxy(13,12);
 cprintf("Thank you for rating! Enjoy loads of other movies!");
 gotoxy(13,14);
 cout<<"Enter any button to go back to search";

 normvideo();

 getch();
}

 void searchpage(int x)
{
 int i,s,space=0;
 char movname[50],a;
 void welcomepage();
 void filter();

 start:
do
{
 clrscr();

 for(i=1;i<=80;i++)
 {
  gotoxy(i,1);
  cout<<"*";
  gotoxy(i,24);
  cout<<"*";
 }

 for(i=1;i<25;i++)
 {
  gotoxy(1,i);
  delay(20);
  cout<<"*";
  gotoxy(80,i);
  delay(20);
  cout<<"*";
 }

 gotoxy(36,4);
 textcolor(4);
 textbackground(3);
 cprintf("S E A R C H");

 normvideo();
 textcolor(9);
 delay(800);
 gotoxy(19,7);
 cprintf(" __________________________________________");
 gotoxy(19,8);
 cprintf("|");
 gotoxy(62,8);
 cprintf("|");
 gotoxy(19,9);
 cprintf("|__________________________________________|");

 cout<<endl<<endl<<endl;
 gotoxy(19,11);
 textcolor(11);
 cprintf("Enter \".\" to try another filter or to go back");
 cout<<endl;
 normvideo();

 gotoxy(1,12);
 for(i=1;i<=80;i++)
 cout<<"*";

 gotoxy(3,14);
 textcolor(17+BLINK);
 textbackground(2);
 cprintf("Upcoming Movies --> ");
 normvideo();
 gotoxy(3,16);
 cout<<"FordVFerrari - Matt Damon, Christian Bale..";
 gotoxy(3,17);
 cout<<"The Irishman - Al Pacino, Robert De Niro, Joe Pesci...";
 gotoxy(3,18);
 cout<<"WW84 - Gal Gadot, Chris Pine, Robin Wright..";
 gotoxy(3,19);
 cout<<"Doctor Sleep - Jack Nicholson, Shelley Duvall";
 gotoxy(3,20);
 cout<<"Birds of Prey - Margot Robbie, Alexandra Daddario..";
 gotoxy(3,21);
 cout<<"Marriage Story - Scarlett Johansson, Adam Driver..";
 gotoxy(3,22);
 cout<<"1917 - Sam Mendes..";


 gotoxy(25,8);
 gets(movname);
 gotoxy(61,8);

 if(strcmp(movname,".")==0)
 filter();

 int l=strlen(movname);
 int y;

 if(x==1)
 y=search(movname,l);
 else if(x==4)
 y=searchtv(movname,l);
 else if(x==6)
 y=searchanimation(movname,l);
 else if(x==3)
 y=searchfandom(movname,l);
 else if(x==5)
 y=searchanime(movname,l);
 else if(x==2)
 y=searchhighrated(movname,l);
 else if(x==7)
 y=searchregional(movname,l);

 if(y!=1)
 {
  clrscr();
  gotoxy(15,7);
  textcolor(3+BLINK);
  cprintf("OOOOOOOPPSSS!!!!");
  normvideo();
  gotoxy(10,9);
  cout<<"Movie not available, kindly check if your entry is correct";
  gotoxy(10,10);
  cout<<"If your entry is correct, our servers may be down,";
  textcolor(12);
  gotoxy(10,11);
  cprintf("Sorry for the inconvenience!");
  normvideo();
  gotoxy(10,14);
  cout<<"Press any button to go back";
  getch();
  goto start;
 }

 delay(1400);
 L:
 clrscr();


 for(i=1;i<=80;i++)
 {
  gotoxy(i,1);
  cout<<"*";
  gotoxy(i,24);
  cout<<"*";
 }

 for(i=1;i<25;i++)
 {
  gotoxy(1,i);
  delay(20);
  cout<<"*";
  gotoxy(80,i);
  delay(20);
  cout<<"*";
 }
 textcolor(4);
 textbackground(2);
 gotoxy(5,5);
 delay(50);
 cprintf(::nametemp);
 normvideo();
 gotoxy(5,7);
 delay(50);
 textcolor(14);
 cprintf(::ratetemp);
 gotoxy(5,9);
 delay(50);
 textcolor(6);
 cprintf(::datetemp);
 gotoxy(5,11);
 delay(50);
 textcolor(12);
 cprintf(::casttemp);
 normvideo();

 gotoxy(5,14);
 cout<<"Press 1 to go back to search";
 gotoxy(5,15);
 cout<<"Press 2 to go to account page";
 gotoxy(5,16);
 cout<<"Press 3 to rate movie";
 gotoxy(5,17);
 cout<<"Press 4 to try another filter";
 gotoxy(5,18);
 cout<<"Press 5 to download";
 gotoxy(5,19);
 cout<<"--> ";

 gotoxy(1,20);
 for(i=0;i<80;i++)cout<<"*";
 gotoxy(5,21);
 textcolor(11);
 cprintf("Recommended movies");
 normvideo();
 gotoxy(5,22);
 cout<<"||  Your Name";
 gotoxy(5,23);
 cout<<"||  Good Will Hunting";
 gotoxy(35,22);
 cout<<"|| The Wolf of Wall Street";
 gotoxy(35,23);
 cout<<"|| A Beautiful Mind";
 op:
 gotoxy(10,19);
 cin>>s;

 if(s==5)
 {
  download();
  goto L;
	   }
 if(s==4)
 filter();
 else if(s==3)
 {
  rateit();
  goto start;
 }
 else if(s==2)
 welcomepage();
 else if(s>5)
 {
  gotoxy(10,19);
  cout<<"Enter a valid option";
  delay(600);
  gotoxy(10,19);
  cout<<"                      ";
  goto op;
 }
}
while(s==1);

}


 void cutscene(int ch)
{
 if(ch==1)
 {
  gotoxy(55,11);cout<<"****            "<<endl;
  gotoxy(55,12);cout<<"    ****         "<<endl;
  gotoxy(55,13);cout<<"      ****       "<<endl;
  gotoxy(55,14);cout<<"          ****   "<<endl;
  gotoxy(55,15);cout<<"           ***** "<<endl;
  gotoxy(55,16);cout<<"**************** "<<endl;
  gotoxy(55,17);cout<<"**************** "<<endl;
  gotoxy(55,18);cout<<"**************** "<<endl;
  gotoxy(55,19);cout<<"**************** "<<endl;
  gotoxy(55,20);cout<<"**************** "<<endl;
  gotoxy(55,21);cout<<"**************** "<<endl;
 }
 else if(ch==2)
 {
  gotoxy(52,12);cout<<"          ****         "<<endl;
  gotoxy(52,13);cout<<"       **********      "<<endl;
  gotoxy(52,14);cout<<"       **********      "<<endl;
  gotoxy(52,15);cout<<"***********************"<<endl;
  gotoxy(52,16);cout<<"***********  **********"<<endl;
  gotoxy(52,17);cout<<"*********      ********"<<endl;
  gotoxy(52,18);cout<<"*******          ******"<<endl;
  gotoxy(52,19);cout<<"*******          ******"<<endl;
  gotoxy(52,20);cout<<"*********      ********"<<endl;
  gotoxy(52,21);cout<<"***********  **********"<<endl;
  gotoxy(52,22);cout<<"***********************"<<endl;
 }
}

 void entry()
{
 int i=0;
 char username[20], password[20];
 gotoxy(10,5);
 cout<<"USERNAME:";
 gotoxy(10,6);
 gets(username);
 gotoxy(10,8);
 cout<<"PASSWORD";
 gotoxy(10,9);

  do
 {
  password[i]=getch();
  cout<<"*";
  i++;
 }
 while(password[i-1]!='\r');
 password[i-1]='\0';

 if(strcmp(username,"cvv")==0&&strcmp(password,"cvv")==0)
 {
  gotoxy(10,12);
  cout<<"ACCESS GRANTED";
  delay(800);
 }
 else
 {
  clrscr();
  gotoxy(15,8);
  cout<<"INCORRECT DETAILS";
  delay(1000);
  exit(1);
 }
}

 void filter()
{
 void welcomepage();
 start2:

 clrscr();

 int i;

 for(i=1;i<=80;i++)
 {
  gotoxy(i,1);
  cout<<"*";
  gotoxy(i,24);
  cout<<"*";
 }

 textcolor(5);
 for(i=1;i<25;i++)
 {
  gotoxy(1,i);
  delay(25);
  cprintf("*");
  gotoxy(80,i);
  delay(25);
  cprintf("*");
 }
 normvideo();
 cutscene(1);

 gotoxy(18,2);
 textcolor(2);
 textbackground(15);
 cprintf("Choose from our many filters, curated for you!");
 normvideo();

 gotoxy(4,4);
 textcolor(3);
 cprintf("Enter your filter option for searching ---");
 textcolor(13);
 gotoxy(4,6);
 cprintf("Press 1 for General Search");
 gotoxy(4,8);
 cprintf("Press 2 for \"Highly Rated\" ");
 gotoxy(4,10);
 cprintf("Press 3 for \"Fandom\" type movies ");
 gotoxy(4,12);
 cprintf("Press 4 for \"TV Series\" ");
 gotoxy(4,14);
 cprintf("Press 5 for \"Anime\" movies and shows ");
 gotoxy(4,16);
 cprintf("Press 6 for \"Animation\" ");
 gotoxy(4,18);
 cprintf("Press 7 for \"Regional Movies\" ");
 gotoxy(4,20);
 cprintf("Press 8 to go back");
 gotoxy(4,22);
 cout<<" ----------->  ";
 normvideo();
 int opt;
 cin>>opt;

 if(opt==8)
 welcomepage();
 if(opt>8)
 {
  gotoxy(4,22);
  textcolor(4+BLINK);
  cprintf("ENTER A VALID OPTION BOSS!");
  normvideo();
  delay(1800);
  goto start2;
 }

 delay(800);
 searchpage(opt);
}

 void welcomepage()
{
  void login();
  am:
  clrscr();
  int ch;

  cutscene(1);
  gotoxy(1,1);
  for(int i=1;i<=80;i++)cout<<"*";
  gotoxy(1,24);
  for(i=1;i<=80;i++)cout<<"*";

  gotoxy(1,5);
  textcolor(6);
  textbackground(9);
  delay(100);
  cprintf("W E L C O M E !");
  normvideo();
  cout<<endl<<endl;
  delay(100);
  textcolor(14+BLINK);
  cprintf("By order of the Peaky Blinders..");
  normvideo();
  delay(100);
  textcolor(11);
  cout<<endl<<endl;
  cprintf("Enter your choice -->");
  cout<<endl<<endl;
  cprintf("1: SEARCH");
  cout<<endl<<endl;
  cprintf("2: LOG OUT");
  cout<<endl<<endl;
  cprintf("3: EXIT");
  cout<<endl<<endl;
  cprintf("---->  ");
  normvideo();
  cin>>ch;
  delay(800);
  if(ch==1)
  filter();

  else if(ch==2)
  {login();
   goto am;
  }
  else if(ch==3)
  {
   delay(800);
   clrscr();
   for(int i=1;i<=80;i++)cout<<"*";
   gotoxy(1,24);
   for(i=1;i<=80;i++)cout<<"*";
   gotoxy(1,9);
   textcolor(7 + BLINK);
   textbackground(9);

   cprintf("  T H A N K   Y O U   C O M E   A G A I N!!    ");
   normvideo();
   gotoxy(1,12);
   cout<<"We will always be open for you ;) ";
   cutscene(2);
   delay(3000);
   exit(1);
  }
}

 void login()
{
 hoho:

 member m;
 char username[40];

 char password[40];
 char o,op,oo;
 int N,flag=0;
 clrscr();
 textcolor(7);
 gotoxy(35,8);
 for(int i=35;i<75;i++)
 cprintf("*");
 gotoxy(35,20);
 for(i=35;i<75;i++)
 cprintf("*");
 for(i=8;i<20;i++)
 {gotoxy(35,i);
  cprintf("*");
 }
 for(i=8;i<21;i++)
 {gotoxy(75,i);
 cprintf("*");}
 textcolor(1);
 gotoxy(3,8);
 cprintf("          * **** *");
 gotoxy(3,9);
 cprintf("       *            *");
 gotoxy(3,10);
 cprintf("     *                *");
 gotoxy(3,11);
 cprintf("   *                    *");
 gotoxy(3,13);
 cprintf("  *                      *");
 gotoxy(3,15);
 cprintf("   *                    *");
 gotoxy(3,16);
 cprintf("     *                *");
 gotoxy(3,17);
 cprintf("       *            *");
 gotoxy(3,18);
 cprintf("          * **** * ");
 textcolor(15);
 for(i=10;i<17;i++)
 {gotoxy(13,i);cprintf("*");}
 {gotoxy(16,11);cprintf("*");
 gotoxy(19,12);cprintf("*");
 gotoxy(14,10);cprintf("*");
 gotoxy(22,13);cprintf("*");
 gotoxy(19,14);cprintf("*");
 gotoxy(16,15);cprintf("*");
 gotoxy(14,16);cprintf("*");}//play triangle

 {gotoxy(34,21);cprintf("*");
 gotoxy(76,21);cprintf("*");
 gotoxy(33,22);cprintf("*");
 gotoxy(77,22);cprintf("*");
 gotoxy(32,23);cprintf("*");
 gotoxy(78,23);cprintf("*");
 gotoxy(31,24);cprintf("*");
 gotoxy(79,24);cprintf("*");
 gotoxy(36,21);
 for(i=0;i<39;i++)
 cprintf("_");
 gotoxy(35,22);
 for(i=0;i<41;i++)
 cprintf("_");
 gotoxy(34,23);
 for(i=0;i<43;i++)
 cprintf("_");
 gotoxy(32,24);
 for(i=0;i<47;i++)
 cprintf("*");}//theatre or a laptop
 char ch,w,sq[50],us[50],pass[50];
 ifstream f("C:/moviesearchproject/mem.txt",ios::ate);
 f.seekg(0,ios::beg);
 gotoxy(3,4);
 cprintf("Enter \".\" to exit");
 gotoxy(38,10);
 cprintf("USERNAME:");
 gotoxy(38,12);
 cprintf("PASSWORD:");
 gotoxy(38,14);
 cprintf("SHOW PASSWORD(Y/N):");
 gotoxy(38,16);
 cprintf("FORGOT PASSWORD(Y/N):");
 gotoxy(58,14);
 cin>>o;
 gotoxy(60,16);

 if(o=='.')
 {
   delay(800);
   clrscr();
   for(int i=1;i<=80;i++)cout<<"*";
   gotoxy(1,24);
   for(i=1;i<=80;i++)cout<<"*";
   gotoxy(1,9);
   textcolor(7 + BLINK);
   textbackground(9);

   cprintf("  T H A N K   Y O U   C O M E   A G A I N!!    ");
   normvideo();
   gotoxy(1,12);
   cout<<"We will always be open for you ;) ";
   cutscene(2);
   delay(3000);
   exit(1);
  }


 cin>>op;
 if(op=='y'||op=='Y')
 {forgot();
 welcomepage();}
 else
{
 if(o=='y'||o=='Y')
 {
 gotoxy(47,10);
 gets(username);

 while(!f.eof())
 {f>>ch;
  if(ch=='{')
  {
   f.get(us,50,'#');
   if(strcmp(us,username)==0)
   {flag=0;break;}
   else flag=1;
  }
 }

 if(flag==1)
 {
  gotoxy(47,10);
  cprintf("Enter valid username!!");
  delay(1000);
  goto hoho;
 }
 f.seekg(0,ios::beg);
 gotoxy(47,12);
 gets(password);
 while(!f.eof())
 {f>>ch;
  if(ch=='{')
 { f.get(us,50,'#');
   if(strcmp(us,username)==0)
   {
    f>>w;
    f.get(sq,50,'^');
    f>>w;
    f.get(pass,50,'}');
    if(strcmp(pass,password)==0)
    {granted();}
    else
    {denied(); goto hoho;}
   }
  }
  }
 }
 else
 {int p=0;
 gotoxy(47,10);
 gets(username);

 while(!f.eof())
 {f>>ch;
  if(ch=='{')
  {
   f.get(us,50,'#');
   if(strcmp(us,username)==0)
   {flag=0;break;}
   else flag=1;
  }
 }

 if(flag==1)
 {
  gotoxy(47,10);
  cprintf("Enter valid username!!");
  delay(1000);
  goto hoho;
 }
 f.seekg(0,ios::beg);
 gotoxy(47,12);
 do
 {
 password[p]=getch();
 if(password[p]!='\r')
 {cprintf("*");}
 p++;
 }while(password[p-1]!='\r');
 password[p-1]='\0';
 while(!f.eof())
 {f>>ch;
  if(ch=='{')
    { f.get(us,50,'#');
  if(strcmp(us,username)==0)
     {f>>w;
     f.get(sq,50,'^');
     f>>w;
     f.get(pass,50,'}');
    N=strlen(pass);
     pass[N]='\0';
  if(strcmp(pass,password)==0)
    {granted();}
   else
    {denied(); goto hoho;}
   }
  }
 }
 }
 }
}


 void main()
{
  clrscr();
  entry();
  clrscr();
  textcolor(12+BLINK);
  gotoxy(29,5);
  cprintf("F L I C K I N I T Y ");
  gotoxy(22,9);
  textcolor(12);
  cprintf("     * **** *        * **** *");
  gotoxy(22,10);
  cprintf("   *          *    *          *");
  gotoxy(22,11);
  cprintf("  *            *  *            *");
  gotoxy(22,12);
  cprintf(" *              **              *");
  gotoxy(22,13);
  cprintf(" *              **              *");
  gotoxy(22,14);
  cprintf("  *            *  *            *");
  gotoxy(22,15);
  cprintf("   *          *    *          *");
  gotoxy(22,16);
  cprintf("     * **** *        * **** *");
  gotoxy(29,20);
  textcolor(4);
  for(int i=0;i<3;i++)
  {
   gotoxy(29,20);
   for(int i=0;i<20;i++)
   {
    delay(50);
    cprintf("-");
   }
  gotoxy(29,20);
  for(i=0;i<20;i++)
  cout<<" ";
  }
  delay(1000);
  again:

  normvideo();
  int menuchoice;
  char a;

  clrscr();
  textcolor(14);
  for(i=1;i<=80;i++)
  {
   gotoxy(i,1);
   cprintf("*");
   gotoxy(i,2);
   cprintf("*");
   gotoxy(i,23);
   cprintf("*");
   gotoxy(i,24);
   cprintf("*");
  }


  textcolor(4);

  for(i=1;i<25;i++)
  {
   gotoxy(1,i);
   delay(30);
   cprintf("**");
   gotoxy(79,i);
   delay(30);
   cprintf("**");
  }
  normvideo();

  cutscene(1);

  gotoxy(30,3);
  textcolor(3 + BLINK);
  textbackground(4);
  delay(800);
  cprintf("F L I C K I N I T Y");

  cout<<endl;
  gotoxy(19,5);
  marubadiyum:
  normvideo();

  textcolor(4);
  cprintf("Watch all of Earth's movies and shows here");
  gotoxy(5,7);
  textcolor(3);
  textbackground(6);
  cprintf("Yes, engineering, medicine and science are noble pursuits in life,");
  gotoxy(5,8);
  cprintf("But, art, philosophy and");
  textcolor(11);
  cprintf(" FILMS");
  textcolor(3);
  cprintf(" is what makes life worth living for");
  gotoxy(5,9);
  textcolor(15);
  cprintf("- Robin Williams (1965 -2004)");
  gotoxy(10,11);
  normvideo();
  textcolor(12);
  cprintf("Enter your choice -> ");
  gotoxy(10,13);
  textcolor(9);
  cprintf("1: LOG IN");
  gotoxy(10,15);
  cprintf("2: SIGN UP");
  gotoxy(10,17);
  cprintf("3: EXIT");
  gotoxy(10,19);
  cprintf("4: ABOUT US");
  gotoxy(10,21);
  cout<<"------->   ";

  normvideo();
  cin>>menuchoice;

  if(menuchoice==3)
  {
   delay(800);
   clrscr();
   for(int i=1;i<=80;i++)cout<<"*";
   gotoxy(1,24);
   for(i=1;i<=80;i++)cout<<"*";
   gotoxy(1,5);
   textcolor(6);
   textbackground(9);

   cprintf("      A  R  E    Y  O  U    S  U  R  E?");
   cout<<endl<<endl<<endl;
   cout<<endl<<"     There is always time for other work!";
   cout<<endl<<endl<<"     <Y/N>";
   cout<<endl<<endl<<"      --->  ";
   normvideo();
   cutscene(2);
   gotoxy(13,13);
   char op;
   cin>>op;
   if(op=='y'||op=='Y')
   {
    delay(1500);
    exit(1);
   }
   else
   goto again;
  }

  else if(menuchoice==5)
  {
   clrscr();
   gotoxy(1,15);
   cout<<"WELCOME ADMIN!";
   delay(2000);
   movieent();
   welcomepage();
  }

  else if(menuchoice==4)
  {
   clrscr();

   for(i=1;i<80;i++)
   {
    textcolor(15);
    gotoxy(i,1);
    cprintf("*");
    gotoxy(i,25);
    cprintf("*");
   }
   for(i=1;i<25;i++)
   {
    gotoxy(60,i);
    textcolor(11);
    cprintf("||");
    gotoxy(1,i);
    cprintf("*");
    gotoxy(80,i);
    cprintf("*");
   }

   textcolor(14+BLINK);
   textbackground(7);
   gotoxy(5,4);
   delay(600);
   cprintf("About Us");
   normvideo();

   delay(800);
   textcolor(13);
   gotoxy(5,6);
   cprintf("Written and Developed by");
   gotoxy(5,8);
   delay(1000);
   textcolor(9);
   cprintf("Rohith Saravanan");
   gotoxy(5,10);
   delay(800);
   cprintf("Aravind Ragav");
   gotoxy(5,12);
   delay(800);
   cprintf("Jagadeeswaran");
   gotoxy(5,14);
   delay(800);
   cprintf("\"Flickinity\" is a project done by us");
   gotoxy(5,15);
   cprintf("with passion and enthusiasm for our internals. More than a project,");
   gotoxy(5,16);
   cprintf("We believe this was a great chance for us to explore the real world");
   gotoxy(5,17);
   cprintf("applications. We hope you liked it!");
   gotoxy(5,19);
   cprintf("Thank you Mrs.Indra Priyadharshini for your support and encouragement.");
   delay(2400);
   gotoxy(5,21);
   cprintf("Brought to you by future leaders from CVV.");
   delay(1600);
   gotoxy(5,23);
   cout<<"Enter any character to exit ---- ";

   getch();
   goto again;
  }

  else if(menuchoice==1)
  {
   delay(800);
   login();
   welcomepage();
  }
  else if(menuchoice==2)
  {
   clrscr();
   signup();
  }
  else if(menuchoice>5)
  {
   gotoxy(10,21);
   textcolor(4+BLINK);
   cprintf("ENTER VALID CHOICE!!");
   normvideo();
   delay(2000);
   goto marubadiyum;
  }
 getch();
}
