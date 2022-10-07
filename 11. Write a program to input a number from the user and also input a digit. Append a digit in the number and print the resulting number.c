#include<stdio.h>
int main()
{
    int num,append,ad;
    printf("Enter a Number :");
    scanf("%d",&num);
    printf("Enter the Append number :");
    scanf("%d",&append);
    ad=num*10+append;
    printf("Append the digit is :%d",ad);
    return 0;
}