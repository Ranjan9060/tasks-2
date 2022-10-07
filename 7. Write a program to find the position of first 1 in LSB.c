#include<stdio.h>
int main()
{
    int num,r=0,count=0;
    printf("Enter a Number :");
    scanf("%d",&num);
    while(num!=0)
    {
     r=num&1;
    count++;
    if(r==1)
   {
    printf("%d ",count);
    break;
   } 
   num=num>>1;
   }
   return 0;
}