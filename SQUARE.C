#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{ float a;
  clrscr();
  printf("enter the no.=");
  scanf("%f ,&a");
  printf("the square root of no.is=%f\n" ,sqrt(a));
  printf("the square of no. is=%f\n" ,a*a);
  printf("the cube of no. is=%f\n",a*a*a);
  getch();
  return 0;
}