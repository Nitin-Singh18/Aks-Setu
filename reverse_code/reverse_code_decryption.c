#include<stdio.h>
#include<string.h>


int main()
{
    char plain_text[100];

    printf("Enter the text for decryption: ");
    
    gets(plain_text);

    strrev(plain_text);

    printf("\nDecrypted text: %s ", plain_text);

    return 0;
}