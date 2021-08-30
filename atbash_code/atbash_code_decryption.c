#include <stdio.h>


int atbashDecryptionFunction()
{
    char encrypted_Text[100] = {0}, decrypted_Text[100] = {0}, ch, escape;   //Declaration
    
    char small_letter[27] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a', ' '};

    char small_encrypt_letter[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};

    char capital_letter[27] = {'Z', 'Y', 'X', 'W', 'V', 'U', 'T', 'S', 'R', 'Q', 'P', 'O', 'N', 'M', 'L', 'K', 'J', 'I', 'H', 'G', 'F', 'E', 'D', 'C', 'B', 'A', ' '};
    
    char capital_encrypt_letter[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' '};
    
    char symbol[27] = {'`', '~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '+', '|', '/', ',', '.', '<', '>', '?', '*', '{', '}', '[', ']'};

    printf("\nEnter encrypted text: ");

    scanf("%c", &escape);

    gets(encrypted_Text);

    for (int i = 0; encrypted_Text[i] != '\0'; ++i)       //Loop for text input
    {
        ch = encrypted_Text[i];

        for (int j = 0; j < 27; j++)                      //Loop for Checking conditions
        {
            if(ch == small_letter[j]) 
            {

                decrypted_Text[i] = small_encrypt_letter[j];

            }
            
            if (ch == capital_letter[j] )
            {
               
               decrypted_Text[i] = capital_encrypt_letter[j];

            }
            
            else if (ch == symbol[j])
            {
                decrypted_Text[i] = symbol[j];
            }
            
        }
        
    }

    printf("\nDecrypted Text: %s", decrypted_Text);
    
    return 0;
}