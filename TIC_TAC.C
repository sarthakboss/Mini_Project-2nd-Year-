#include<stdio.h>
#include<conio.h>
void main()
{
char N1[50],N2[50],str3[50],sym1,sym2;
int start=0, i,j, a[3][3],r1=0,r2=0,T=0,k,flag=0;
clrscr();
printf("Enter name of PLAYER 1 \n");
gets(N1);
printf("Enter name of PLAYER 1 \n");
gets(N2);
printf("PLAYER 1 enter your symbol in lower case (x) or (0)i.e zero \n");
scanf("%c",&sym1);
if(sym1=='x')
 {
  sym2='0';
 }
else if(sym1=='0')
 {
  sym2='x';
 }
  for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 a[i][j]='_';
 }
 }
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("%c",a[i][j]);
 printf(" ");
 }
 printf("\n");
 }
 for(i=0; ;i++)
{
printf("Who plays first,%s or %s?\n",N1,N2);
gets(str3);
r1=strcmp(N1,str3);
r2=strcmp(N2,str3);
if(r1==0)
{
start=1;
break;
}
else if(r2==0)
{
start=2;
break;
}
else
{
printf("%s is not a registered player. and enter a correct name",str3);
}
}
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d%d",i,j);
   printf(" ");
  }
  printf("\n");
 }
//game starts of inserting
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   a[i][j]='_';
  }
 }
  for(T=1;T<10;T++)
  {
    if((T%2)!=0)
     {
      if(start==1)
       {
	printf("PLAYER 1 enter position i,j (eg:01) \n");
	scanf("%d %d",&i,&j);
	 if(a[i][j]=='_')
	  {
		a[i][j]=sym1;
		start++;
	  }
	 else
	  {
	   printf("INVALID POSITION \n");
	  }

	 for(i=0;i<3;i++)
	 {
	  for(j=0;j<3;j++)
	  {
	   printf("%c",a[i][j]);
	   printf(" ");
	  }
	  printf("\n");
	 }
       }//start=1
      else if(start==2)
      {
	 printf("PLYAER 2 enter position i,j (eg:01) \n");
	 scanf("%d %d",&i,&j);
	 if(a[i][j]=='_')
	 {
	  a[i][j]=sym2;
	  start--;
	 }
	 else
	 {
	  printf("INVALID POSITION \n");
	 }

	 for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	 {
	  printf("%c",a[i][j]);
	  printf(" ");
	 }
	 printf("\n");
	}
      }//start=2
    }//(T%2!=0)
       else if((T%2)==0)
      {
	if(start==1)
	{
	 printf("PLYAER 1 enter position i,j (eg:01) \n");
	 scanf("%d %d",&i,&j);
	 if(a[i][j]=='_')
	  {
	    a[i][j]=sym1;
	    start++;
	  }
	 else
	 {
	  printf("INVALID POSITION \n");
	 }

       for(i=0;i<3;i++)
       {
	for(j=0;j<3;j++)
	{
	 printf("%c",a[i][j]);
	 printf(" ");
	}
	printf("\n");
       }
     }//start=1
      else if(start==2)
       {
	printf("PLYAER 2 enter position i,j (eg:01) \n");
	scanf("%d %d",&i,&j);
	if(a[i][j]=='_')
	 {
	  a[i][j]=sym2;
	  start--;
	 }
	 else
	 {
	  printf("INVALID POSITION \n");
	 }

	 for(i=0;i<3;i++)
	 {
	  for(j=0;j<3;j++)
	  {
	   printf("%c",a[i][j]);
	   printf(" ");
	  }
	  printf("\n");
	 }
       }//start=2
    }//(T%2==0)

   //wining condition

   if(((a[0][0]=='x')&&(a[0][1]=='x')&&(a[0][2]=='x'))||
      ((a[0][0]=='x')&&(a[1][0]=='x')&&(a[2][0]=='x'))||
      ((a[2][0]=='x')&&(a[2][1]=='x')&&(a[2][2]=='x'))||
      ((a[0][2]=='x')&&(a[1][2]=='x')&&(a[2][2]=='x'))||
      ((a[1][0]=='x')&&(a[1][1]=='x')&&(a[1][2]=='x'))||
      ((a[0][1]=='x')&&(a[1][1]=='x')&&(a[2][1]=='x'))||
      ((a[0][0]=='x')&&(a[1][1]=='x')&&(a[2][2]=='x'))||
      ((a[0][2]=='x')&&(a[1][1]=='x')&&(a[2][0]=='x')))

      {
       printf("PLAYER PLAYING WITH X WINS \n");
       if(sym1=='x')
       {
	printf("%s",N1);
       }
       else if(sym2=='x')
       {
       printf("%s",N2);
       }
       printf(" wins \n");
       flag++;
      }
else if(((a[0][0]=='0')&&(a[0][1]=='0')&&(a[0][2]=='0'))||
      ((a[0][0]=='0')&&(a[1][0]=='0')&&(a[2][0]=='0'))||
      ((a[2][0]=='0')&&(a[2][1]=='0')&&(a[2][2]=='0'))||
      ((a[0][2]=='0')&&(a[1][2]=='0')&&(a[2][2]=='0'))||
      ((a[1][0]=='0')&&(a[1][1]=='0')&&(a[1][2]=='0'))||
      ((a[0][1]=='0')&&(a[1][1]=='0')&&(a[2][1]=='0'))||
      ((a[0][0]=='0')&&(a[1][1]=='0')&&(a[2][2]=='0'))||
      ((a[0][2]=='0')&&(a[1][1]=='0')&&(a[2][0]=='0')))

       {
	printf("PLAYER PLAYING WITH 0 WINS \n");
	if(sym1=='0')
       {
	printf("%s",N1);
       }
       else if(sym2=='0')
       {
       printf("%s",N2);
       }
       printf(" wins \n");
	flag++;
       }
       if(flag==1)
       {
       break;
       }
     }
     printf("IT WAS A TIE \n");




 getch();
 }
/* trying to make a change

for(i=0;i<n;i++)
another change
*/
