#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the x :");
    scanf("%d",&x);
    printf("Enter the y :");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf(" x=%d \n y=%d",x,y);
    return 0;
}