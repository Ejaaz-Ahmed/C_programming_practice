#include<stdio.h>
int main()
{
    printf("Isoseles Triangle: \n");
    int x,y,z;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d",&x,&y,&z);
    if(x==y || x==z || y==z){
        printf("Triangle is isoseles.");
    }
    else{
        printf("Triangle is not isoseles.");
    }
    return 0;
}