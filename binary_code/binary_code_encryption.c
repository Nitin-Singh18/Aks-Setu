#include<stdio.h>

void binaryCodeEncyption()
{
    char plain_Text[100] = {0}, escape;             //Array declaration for text

    int i, j, k;                            //Declaration of variables

    printf("\nEnter text for encryption: ");

    scanf("%c", &escape);

    gets(plain_Text);

    printf("\nEncrypted text: ");

    for(i = 0; plain_Text[i] != '\0'; i++)  //Loop for printing binary code for plain text
    {
        for(j = 7; j >= 0; j--)
        {
            k = plain_Text[i] >> j;         //>> -> is / and right shift operator

            if(k & 1)                       //& -> %
            {
                printf("1");
            }
            else
            {
                printf("0");
            }

        }

        printf(" ");                        //To get space b/w binary codes for each character
    }

}