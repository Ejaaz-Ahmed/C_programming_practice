#include<stdio.h>
int factorial(int x)
{
    if(x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int main()
{
    printf("Calulating n combination r:\n");
    int n,r;
    printf("Enter the value of 'n':\n");
    scanf("%d",&n);
    printf("Enter the value of 'r':\n");
    scanf("%d",&r);
    long int a=factorial(n);
    long int b=factorial(r);
    long int z=factorial(n-r);
    int c=a/(z*b);
    printf("%d combination %d is equal to: %d",n,r,c);
    return 0;
    
}