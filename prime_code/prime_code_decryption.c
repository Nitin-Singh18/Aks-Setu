#include <stdio.h>
#include <ctype.h>
#include <string.h>

void PrimeCodeDecryption() 
{

    char encryptValue[28] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ', '.'};

    char alphabetValue[28][4] = {" 193", " 197", " 199", " 211", " 223", " 227", " 229", " 233", " 379", " 383", " 509", " 521", " 401", " 409", " 419", " 683", " 691", " 701", " 709", " 719", " 881", " 883", " 887", " 907", " 911", " 919", " 929", " 359"};

    char string[200], encryptedString[100], escape, dvar[700];


    scanf("%c", &escape);

    printf("\nEnter Your Text : ");

    gets(string);

    int i = 0;
    while ( string[i] != '\0')
    {
        char  chr1,chr2,chr3,chr4;
        chr1 = string[i];
        chr2 = string[i+1];
        chr3 = string[i+2];
        chr4 = string[i+3];
        
        for (int j = 0; j < 28; j++)
        {    

            if(chr1 == alphabetValue[j][0] && chr2 == alphabetValue[j][1] && chr3 == alphabetValue[j][2] && chr4 == alphabetValue[j][3]) 
            {

                if(i < 1) 
                {
                    
                    dvar[0] = encryptValue[j];
                    
                }
                else if (i >= 1)
                {
	  
                    dvar[i/4] = encryptValue[j];

                }

            }
        }
        
        i = i+4;
     }


    printf("\n\nDecrypted String : %s", dvar);
}


//