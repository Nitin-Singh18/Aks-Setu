#include <stdio.h>
#include <ctype.h>
#include <string.h>

void DcodeDecryption() 
{

    char encryptValue[28] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ', '.'};

    char alphabetValue[28][2] = {"1#", "2#", "3#", "4#", "1;", "2;", "3;", "4;", "1?", "2?", "3?", "4?", "1:", "2:", "3:", "4:", "1*", "2*", "3*", "4*", "1<", "2<", "3<", "4<", "1}", "2{", "  ", "4{"};

    char string[200], encryptedString[100], escape, dvar[200];


    scanf("%c", &escape);

    printf("\nEnter Your Text : ");

    gets(string);

    int i = 0;
    while ( string[i] != '\0')
    {
        char  chr1,chr2;
        chr1 = string[i];
        chr2 = string[i+1];
        
        for (int j = 0; j < 28; j++)
        {    
            if(chr1 == alphabetValue[j][0] && chr2 == alphabetValue[j][1]) 
            {
                
                if(i < 1) 
                {
                    
                    dvar[0] = encryptValue[j];
                    
                    
                }
                else if (i >= 1)
                {
	  
                    dvar[i/2] = encryptValue[j];

                }

            }
        }
        
        i = i+2;
     }


    printf("\n\nEncrypted String : %s", dvar);
}

int main() 
{
    DcodeDecryption();
    return 0;

}