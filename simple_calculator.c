#include<stdio.h>
#include<math.h>
int main()
{
    printf("Calculator:\n");
    printf("Select the operation you want to perform:\n");
    printf("        +,-,*,/,m,p         \n");
    char c;
    scanf("%c",&c);
    printf("Enter the numbers: ");
    long int a ,b,d;
    scanf("%d %d",&a,&b);
    switch (c)
    {
    case '+':
        d=a+b;
        printf("%d",d);
        break;
    case '-':
        d=a-b;
        printf("%d",d);
        break;
    case '*':
        d=a*b;
        printf("%d",d);
        break;
    case '/':
        d=a/b;
        printf("%d",d);
    case 'm':
        d=a % b;
        printf("%d",d);
        break;
    case 'p':
        d=pow(a,b);
        printf("%d",d);
        break;
    default:
        printf("Invalid operation....");
        break;
    }
    return 0;
}