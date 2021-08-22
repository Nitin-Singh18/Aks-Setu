#include<stdio.h>
#include<math.h>

int main()
{
    int binary_numbers[100] = {0};               //Array for binary numbers
    
    int i, j;                                    //Variable declared to run loops
    
    int sum = 0, bin_num;
    
    char a = 's', b = 'S', decrypted_Values;

    printf("\nEmter binary number: ");

    for(i = 0; i < 100; ++i)                     //Loop for input of binary numbers
    {
        scanf("%d", &binary_numbers[i]);
        
        if(binary_numbers[i] == a || binary_numbers[i] == b)  //Conditions to break the input loop
        {
            break;
        }

    }
    
    printf("\nDecrypted values: ");

    for(i = 0 ; binary_numbers[i] != '\0'; ++i)               //Loop to get alphabets for each binary number 
    {   
        bin_num = binary_numbers[i];  
        
        sum = 0;
        
        for(j = 0; bin_num != '\0'; j++)
        {
            sum = sum + pow(2,j) * (bin_num%10);
            
            bin_num = bin_num/10;
        }
        
        decrypted_Values = sum;

        printf("%c", decrypted_Values);
    }
    
    return 0;
}
