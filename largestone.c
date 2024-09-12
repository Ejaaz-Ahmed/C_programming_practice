#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers to check the largest one: ");

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a>b && a>c){
        printf("First number %d is the largest.",a);
    }
    else if (b>a && b>c){
        printf("Second number %d is the largest.",b);
    }
    else
    {
        printf("Third number %d is the largest.",c);
    }
    return 0;
}