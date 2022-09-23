
#include<stdio.h>
#include<conio.h>
main()
{
  int x,y;
  clrscr();

  printf("enter x:");
  scanf("%d",&x);
  printf("enter y:");
  scanf("%d",&y);

  printf("value: %d\n",(x*x*x)-(3*x*x*y)+(3*x*y*y)-(y*y*y));
  getch();
}