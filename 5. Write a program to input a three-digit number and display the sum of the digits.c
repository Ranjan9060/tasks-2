#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter the Three Digits Number :");
    scanf("%d",&num);
    while(num!=0)
    {
     rem=num%10;
     num=num/10;
     sum=sum+rem;
     
    }
    printf("Sum of Three digits number %d",sum);

}