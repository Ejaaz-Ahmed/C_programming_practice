#include<stdio.h>
int main()
{
    printf("Check the Equilateral triangle:\n");
    int x,y,z;
    int l,m,n;
    printf("Enter the sides of Triangle:\n");
    scanf("%d %d %d",&x,&y,&z);
    printf("Enter the interior angles: \n");
    scanf("%d %d %d",&l,&m,&n);
    if ((x==y && y==z) && (l==m && m==n && n==60)){
        printf("Triangle is Equilateral :)");
    }
    else{
        printf("Triangle is not equilateral ;)");
    }
    return 0;
}