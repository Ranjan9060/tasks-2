#include<stdio.h>
int main()
{
    int num,rem=0,change;
    printf("Enter a Number :");
    scanf("%d",&num);
       rem=num/10;
       change=rem*10;
    printf("last digit is Zero %d",change);
}