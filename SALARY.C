#include<stdio.h>
int main()
{
  float basic,hra,da,total_salary;
  printf("enter basic salary=");
  scanf("%f" ,&basic);
  hra=0.20*basic;
  da=1.50*basic;
  total_salary=basic+hra+da;

  printf("hra is=%2.f\n" ,hra);
  printf("da is=%2.f\n" ,da);
  printf("total_salary is=%2.f\n" ,total_salary);
  return 0;
}
