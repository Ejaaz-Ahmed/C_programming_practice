#include<stdio.h>
int main()
{
    printf("Character Checking:\n");
    printf("Enter the character you want to check: ");
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='u'||a=='o'){
        printf("Given character is Vowel.");
    }
    else{
        printf("It is a consonant.");
    }
    return 0;
}