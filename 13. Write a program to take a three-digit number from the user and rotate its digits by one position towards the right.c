#include<stdio.h>
int main()
{
    int num,rem,div,rotate;

    printf("Enter a Three-Digit Number :");

    scanf("%d",&num);

    rem=num%10;

    div=num/10;

    rotate=rem*100+div;

    printf("Three-Digit Number Rotate :%d",rotate);
    
    return 0;
}