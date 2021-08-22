#include<stdio.h>
#include<string.h>


int main()
{
    char encrypted_text[100];

    printf("Enter text for decryption: ");
    
    gets(encrypted_text);

    strrev(encrypted_text);

    printf("\nDecrypted text: %s ", encrypted_text);

    return 0;
}