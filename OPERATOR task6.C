#include<stdio.h>
#include<conio.h>

main()
{
   clrscr();
   int x=24,y=100,z=55,xyz;
   xyz =(x*x*x)-(y*y*y)-(z*z*z)-3*(x+y)+3*(y+z)+3*(z+x);
   printf("x+y+z3=%d",xyz);

   getch();
}