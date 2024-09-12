#include<stdio.h>
#include<math.h>
int main()
{
    printf("Calculating Compound Interest:\n");
    int p;
    printf("Enter principle amount: ");
    scanf("%d",&p);
    float rate;
    printf("Enter the annual rate of interest:");
    scanf("%f",&rate);
    rate=rate/100;
    int n;
    printf("Enter number of times that interest is compounded per year: ");
    scanf("%d",&n);
    int t;
    printf("Enter the number of years: ");
    scanf("%d",&t);
    float a= p* pow(1+rate/n,n*t);
    float comp_interest=a-p;
    printf("%f",comp_interest);
    return 0;
}