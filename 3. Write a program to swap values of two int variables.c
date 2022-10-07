#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("Enter The x :");
    scanf("%d",&x);
    printf("Enter The y :");
    scanf("%d",&y);
    temp=x; 
    x=y;
    y=temp;
    printf(" x=%d \n y=%d",x,y);

}