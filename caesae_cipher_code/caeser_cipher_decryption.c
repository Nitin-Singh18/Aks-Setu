#include<stdio.h>

void caeserCipherDecryption()
{
    char encrypted_text[100], ch, escape;
    
    int i, shift;

    scanf("%c", &escape);

    printf("\nEnter text for decryption: ");
    
    gets(encrypted_text);

    printf("\nEnter the shift value: ");
    
    scanf("%d", &shift);

    for (i = 0; encrypted_text[i] != '\0'; ++i)      // Run this loop until the array gets empty
    {
       ch = encrypted_text[i];

       if (ch >= 'A' && ch <= 'Z')               //Will enter in loop if ASCII value of ch is between the ASCII value of 'A' and 'Z' i.e. 65-90   
       {
           ch = ch - shift;

           if (ch < 'A')
           {
               ch = ch + 'Z' - 'A' + 1;
           }
           encrypted_text[i] = ch;
       }

       else if (ch >= 'a' && ch <= 'z')          //Will enter in loop if ASCII value of ch is between the ASCII value of 'a' and 'b' i.e. 97-122
       {
           ch = ch - shift;

           if (ch < 'a')
           {
               ch = ch + 'z' - 'a' + 1;
           }
           encrypted_text[i] = ch;
           
       }
        
    }

    printf("\nDecrypted Text: %s", encrypted_text);
    
   
}