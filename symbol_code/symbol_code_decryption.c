#include <stdio.h>
#include <ctype.h>
#include "../timer/timer_delay.c"

int main() {

    char alphabetValue[27] = {'`', '~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '+', '|', '/', ',', '.', '<', '>', '?', '*', '{', '}', '[', ']'};

    char encryptValue[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};

    printf("Array : %s", encryptValue);

    char string[100], decryptedString[100], chr;

    printf("\n\nEnter Your Text : ");

    gets(string);

    for (int i = 0; string[i] != '\0'; ++i)
    {
        chr = tolower(string[i]);

        for (int j = 0; j < 27; j++)
        {
            if(chr == alphabetValue[j]) {

                decryptedString[i] = encryptValue[j];

            }
        }
        
    }

     printf("\n\nDecrypted String : %s", decryptedString);
    
    delay(1000);

    return 0;

}