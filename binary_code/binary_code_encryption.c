#include<stdio.h>

int main()
{
    char plain_text[100] = {0};
    int i, j, k;

    printf("Enter the text for encryption\n");

    gets(plain_text);

    for(i = 0; plain_text[i] != '\0'; i++)
    {
        for(j = 7; j >= 0; j--)
        {
            k = plain_text[i] >> j;

            if(k & 1)
            {
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf(" ");
    }
    return 0;
}