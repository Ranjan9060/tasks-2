#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number :");
    scanf("%d",&num);
    printf("Without its last  digit %d",num/10);
    return 0;
}