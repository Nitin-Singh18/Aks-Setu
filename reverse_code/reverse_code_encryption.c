#include<stdio.h>
#include<string.h>


void reverseCodeEncryption()
{
    char plain_text[100], escape;

    printf("Enter text for encryption: ");
    
    scanf("%c", &escape);

    gets(plain_text);

    strrev(plain_text);

    printf("\nEncrypted text: %s ", plain_text);

    
}