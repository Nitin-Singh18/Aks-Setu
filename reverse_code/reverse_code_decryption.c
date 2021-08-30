#include<stdio.h>
#include<string.h>


void reverseCodeDecryption()
{
    char encrypted_text[100], escape;

    printf("Enter text for decryption: ");

    scanf("%c", &escape);
    
    gets(encrypted_text);

    strrev(encrypted_text);

    printf("\nDecrypted text: %s ", encrypted_text);

    
}