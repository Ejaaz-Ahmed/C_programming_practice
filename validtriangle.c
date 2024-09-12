#include<stdio.h>
int main()
{
    printf("Valid Triangle: \n");
    int x,y,z;
    printf("Enter three angles of triangle: ");
    scanf("%d %d %d",&x,&y,&z);
    if((x+y+z)==180){
        printf("Valid Ttiangle");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;
}