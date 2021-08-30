#include<stdio.h>

void asciiCodeEncryption()
{
    char plain_text[150], escape;

    int i;
    
    printf("Enter text for encryption: ");

    scanf("%c", &escape);

    gets(plain_text);

    printf("Decrypted text: ");

    for(i=0; plain_text[i]!='\0'; ++i)
    {
        printf("%d", plain_text[i]);

        printf(" "); 
    }
    
    
}