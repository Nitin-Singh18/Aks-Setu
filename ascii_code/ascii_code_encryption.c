#include<stdio.h>

int main()
{
    char plain_text[150];

    int i;
    
    printf("Enter text for encryption: ");

    gets(plain_text);

    printf("Decrypted text: ");

    for(i=0; plain_text[i]!='\0'; ++i)
    {
        printf("%d", plain_text[i]);

        printf(" "); 
    }
    
    return 0;
}