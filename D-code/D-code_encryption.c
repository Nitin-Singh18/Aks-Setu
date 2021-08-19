#include <stdio.h>
#include <ctype.h>
#include <string.h>


void DcodeEncryption() {

    char encryptValue[28][2] = {"1#", "2#", "3#", "4#", "1;", "2;", "3;", "4;", "1?", "2?", "3?", "4?", "1:", "2:", "3:", "4:", "1*", "2*", "3*", "4*", "1<", "2<", "3<", "4<", "1}", "2{", "  ", "4{"};

    char alphabetValue[28] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ', '.'};

    char string[100], encryptedString[100], chr, escape, dvar[100];


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
                    char chr1,chr2;
                    chr1 = encryptValue[0][0];
	                chr2 = encryptValue[0][1];
	  
                    dvar[0] = chr1;
                    dvar[1] = chr2;
                    
                }
                else if (i >= 1)
                {

                    char chr1,chr2;
                    chr1 = encryptValue[j][0];
	                chr2 = encryptValue[j][1];
	  
                    dvar[2*i] = chr1;
                    dvar[2*i +1] = chr2;

                }

            }
        }
        
    }

     printf("\n\nEncrypted String : %s", dvar);
    
}

int main() 
{
    DcodeEncryption();
    return 0;

}