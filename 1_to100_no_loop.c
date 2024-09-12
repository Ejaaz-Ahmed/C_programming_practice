#include<stdio.h>
int counting(int n)
{
    if (n<=100){
        printf("%d\n",n);
        counting(n+1);
    }
}
int main()
{
    int a=1;
    counting(a);
    return 0;
}