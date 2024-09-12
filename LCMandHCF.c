#include<stdio.h>
//Eculidean Algorithm
int hcf(int x,int y)
{
    if(y==0){
        return x;
    }
    else{
        return hcf(y,x%y);
    }
}
int lcm(int x,int y)
{
    return (x*y)/hcf(x,y);
}
int main()
{
    int a,b;
    printf("Finding LCM and HCF:\n");
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    int HCF=hcf(a,b);
    int LCM=lcm(a,b);
    printf("HCF= %d\n",HCF);
    printf("LCM= %d",LCM);
    return 0;
}