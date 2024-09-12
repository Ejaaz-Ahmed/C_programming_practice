#include<stdio.h>
int main()
{
    int a,b;
    a=10;b=20;
    printf("%d\n",a+b);
    int x,y;
    printf("Enter first number to add: ");
    scanf("%d",&x);
    printf("Enter second number to add: ");
    scanf("%d",&y);
    int sum=x+y;
    printf("%d",sum);
    return 0;
}