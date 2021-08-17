#include<stdio.h>

int main()
{
    char plain_text[100];

    int i;
    
    printf("Enter the text for encryption: ");

    gets(plain_text);

    for(i=0; plain_text[i]!='\0'; ++i)
    {
        printf("%d", plain_text[i]);

        printf(" "); 
    }
    
    return 0;
}