#include<stdio.h>
int main()
{
   int a,unit;
   printf("Enter a number :");
   scanf("%d",&a);
   unit=a%10;
   printf("Unit digits is %d",unit);
   return 0;
}