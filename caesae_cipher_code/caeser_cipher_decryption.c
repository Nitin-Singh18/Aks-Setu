#include<stdio.h>

int main()
{
    char plain_text[100], ch;
    int i, shift;

    printf("\nEnter the text to decrypt: ");
    gets(plain_text);

    printf("\nEnter the shift value: ");
    scanf("%d", &shift);

    for (i=0; plain_text[i] != '\0'; ++i)       /* Run this loop until the array gets empty*/
    {
       ch = plain_text[i];

       if (ch >= 'A' && ch <= 'Z')              //Will enter in loop if ASCII value of ch is between the ASCII value of 'A' and 'Z' i.e. 65-90   
       {
           ch = ch - shift;

           if (ch < 'A')
           {
               ch = ch + 'Z' - 'A' + 1;
           }
           plain_text[i] = ch;
       }

       else if (ch >= 'a' && ch <= 'z')         //Will enter in loop if ASCII value of ch is between the ASCII value of 'a' and 'b' i.e. 97-122
       {
           ch = ch - shift;

           if (ch < 'a')
           {
               ch = ch + 'z' - 'a' + 1;
           }
           plain_text[i] = ch;
           
       }
        
    }

    printf("\nDecrypted text is: %s", plain_text);
    return 0;
}