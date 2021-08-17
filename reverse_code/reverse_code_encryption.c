#include<stdio.h>
#include<string.h>


int main()
{
    char plain_text[100];

    printf("Enter the text for encryption: ");
    
    gets(plain_text);

    strrev(plain_text);

    printf("\nEncrypted text: %s ", plain_text);

    return 0;
}