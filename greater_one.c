#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers to find the largest one: \n");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is the largest one.",a);
    }
    else if(b>a){
        printf("%d is the largest.",b);
    }
    else {
        printf("Both number are equal.");
    }
    return 0;
}