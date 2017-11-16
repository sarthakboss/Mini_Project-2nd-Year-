#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 int i,j,opt=0,num=0,cost=0,sp=0,profit=0,tot=0,again=0;
 char date[50];
 gets(date);
 clrscr();
for(j=0; ;j++)
{
 for(i=0; ;i++)
 {
  printf("Enter \n 1: for coffee \n 2: for tea \n 3: for water \n 4: ColdDrink ");
  printf("\n 5: for cold coffee \n 6: for Patties \n 7: for burger \n 8: for Momo \n");
  printf(" 9:To print Bill \n");
  scanf("%d",&opt);
  if(opt==1)
  {
  printf("How many coffee \n");
  scanf("%d",&num);
  cost=8;
  sp=15;
  profit+=(sp*num)-(cost*num);
  tot+=(sp*num);
  printf("net amount is %d \n",(sp*num));
  }
  if(opt==2)
  {
  printf("How many Tea \n");
  scanf("%d",&num);
  cost=8;
  sp=15;
  profit+=(sp*num)-(cost*num);
  tot+=(sp*num);
  printf("net amount is %d \n",(sp*num));
  }
  if(opt==3)
  {
  printf("How many water \n");
  scanf("%d",&num);
  cost=12;
  sp=20;
  profit+=(sp*num)-(cost*num);
  tot+=(sp*num);
  printf("net amount is %d \n",(sp*num));
  }
  if(opt==4)
  {
  printf("How many ColdDrink \n");
  scanf("%d",&num);
  cost=8;
  sp=15;
  profit+=(sp*num)-(cost*num);
  tot+=(sp*num);
  printf("net amount is %d \n",(sp*num));
  }
  if(opt==5)
  {
  printf("How many ColdCoffee \n");
  scanf("%d",&num);
  cost=15;
  sp=25;
  profit+=(sp*num)-(cost*num);
  tot+=(sp*num);
  printf("net amount is %d \n",(sp*num));
  }
  if(opt==6)
  {
  printf("How many Patties \n");
  scanf("%d",&num);
  cost=8;
  sp=15;
  profit+=(sp*num)-(cost*num);
  tot+=(sp*num);
  printf("net amount is %d \n",(sp*num));
  }
  if(opt==7)
  {
  printf("How many Burger \n");
  scanf("%d",&num);
  cost=15;
  sp=25;
  profit+=(sp*num)-(cost*num);
  tot+=(sp*num);
  printf("net amount is %d \n",(sp*num));
  }
  if(opt==8)
  {
  printf("How many Momo \n");
  scanf("%d",&num);
  cost=25;
  sp=35;
  profit+=(sp*num)-(cost*num);
  tot+=(sp*num);
  printf("net amount is %d \n",(sp*num));
  }
  if(opt==9)
  {
   printf("Total Amount is %d \n",tot);
   break;
  }
}
printf("Next Coustumer press 1 \n");
scanf("%d",&again);
tot=0;
if(again!=1)
{
fp=fopen("Profit_Canteen.txt","a+");
fprintf(fp,"%d \n",profit);
fclose(fp);
printf("Profit Till Now %d",profit);
break;
}
}

getch();
}
