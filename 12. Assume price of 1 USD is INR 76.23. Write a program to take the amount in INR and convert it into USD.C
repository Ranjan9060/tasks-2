#include<stdio.h>
int main()
{
    float USD=1,INR,store=0;

    printf("Enter a INR : ");

    scanf("%f",&INR);

    store=USD/76.23*INR;

    printf("INR Convert To USD %f",store);

    return 0;
}