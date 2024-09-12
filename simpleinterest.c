#include<stdio.h>
int main()
{
    printf("Calculating simple interest:\n");
    int p,time; //p = principle amount
    float rate;
    printf("Enter the principle amount, rate of interest and time period(years):\n");
    scanf("%d %f %d",&p,&rate,&time);
    float interest=p*(rate/100)*time;
    printf("%f",interest);
}