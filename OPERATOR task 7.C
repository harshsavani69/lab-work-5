#include<stdio.h>
#include<conio.h>

main()
{
  clrscr();
  int x=4,y=6,z=8,xyz;

  xyz =(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
  printf("(x+y+z)2=%d",xyz);
  getch();
}