#include <stdio.h>
#include <ctype.h>
#include <string.h>


void PrimeCodeEncryption() {
  
    char encryptValue[28][4] = {" 193", " 197", " 199", " 211", " 223", " 227", " 229", " 233", " 379", " 383", " 509", " 521", " 401", " 409", " 419", " 683", " 691", " 701", " 709", " 719", " 881", " 883", " 887", " 907", " 911", " 919", " 929", " 359"};

    char alphabetValue[28] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ', '.'};

    char string[200], encryptedString[100], chr, escape, dvar[700];


    scanf("%c", &escape);

    printf("\n\nEnter Your Text : ");

    gets(string);

    for (int i = 0; string[i] != '\0'; ++i)
    {
        chr = tolower(string[i]);

        for (int j = 0; j < 28; j++)
        {
            
            if(chr == alphabetValue[j]) {

                if(i < 1) 
                {
                    char chr1,chr2,chr3,chr4;
                    chr1 = encryptValue[j][0];
	                chr2 = encryptValue[j][1];
                    chr3 = encryptValue[j][2];
                    chr4 = encryptValue[j][3];
	  
                    dvar[0] = chr1;
                    dvar[1] = chr2;
                    dvar[2] = chr3;
                    dvar[3] = chr4;
                    
                }
                else if (i >= 1)
                {

                    char chr1,chr2,chr3, chr4;
                    chr1 = encryptValue[j][0];
	                chr2 = encryptValue[j][1];
                    chr3 = encryptValue[j][2];
                    chr4 = encryptValue[j][3];
	  
                    dvar[4*i] = chr1;
                    dvar[4*i +1] = chr2;
                    dvar[4*i+ 2] = chr3;
                    dvar[4*i+ 3] = chr4;
                    
                    

                }

            }
        }
        
    }

     printf("\n\nEncrypted String : %s", dvar);
    
}

int main() 
{
    PrimeCodeEncryption();
    return 0;

}