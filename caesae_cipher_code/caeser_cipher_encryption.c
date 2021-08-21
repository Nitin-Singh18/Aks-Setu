#include<stdio.h>

void caeserCipherEncription()
{
    char plain_text[100], ch, escape;
    
    int i, shift;

    scanf("%c", &escape);

    printf("\nEnter text for encryption: ");
    
    gets(plain_text);

    printf("\nEnter the shift value: ");
    
    scanf("%d", &shift);

    for (i=0; plain_text[i] != '\0'; ++i)       /* Run this loop until the array gets empty*/
    {
       ch = plain_text[i];

       if (ch >= 'A' && ch <= 'Z')              //Will enter in loop if ASCII value of ch is between the ASCII value of 'A' and 'Z' i.e. 65-90   
       {
           ch = ch + shift;

           if (ch > 'Z')
           {
               ch = ch - 'Z' + 'A' - 1;
           }
           plain_text[i] = ch;
       }

       else if (ch >= 'a' && ch <= 'z')         //Will enter in loop if ASCII value of ch is between the ASCII value of 'a' and 'b' i.e. 97-122
       {
           ch = ch + shift;

           if (ch > 'z')
           {
               ch = ch - 'z' + 'a' -1;
           }
           plain_text[i] = ch;
           
       }
        
    }

    printf("\nEncrypted text is: %s", plain_text);
    
    return 0;
}