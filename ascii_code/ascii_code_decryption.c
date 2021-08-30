#include<stdio.h>

void asciiCodeDecryption()
{
    int ascii_Val[100]={0};   //Array for ascii value

    char a = 's', b = 'S', escape;    //Taken to break the loop

    int i; 

    scanf("%c", &escape);
    
    printf("Enter ascii value for decryption: ");
    
    for(i = 0; i < 100; ++i)                     //Loop for input of ascii values
    {
        scanf("%d", &ascii_Val[i]);

        if(ascii_Val[i]==a || ascii_Val[i]==b)   // To break the loop when want
        {
            break;
        }
    }
    
    printf("Decrypted values: ");

    for(i = 0; ascii_Val[i] != '\0'; ++i)
    {
        printf("%c", ascii_Val[i]);
    }
    
   

}
