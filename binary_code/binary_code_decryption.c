#include<stdio.h>
#include<math.h>

int main()
{
    int n[100] = {0}; 
    int i, j = 0;
    int sum = 0, bin;
    // int decrypted_string[100] = {0};
    char a = '@', k;

    printf("Emter the binary number");

    for(i = 0; i<100; ++i) 
    {
        scanf("%d", &n[i]);
        if(n[i]==a)
        {
            break;
        }

    }
    

    for(i=0 ; n[i] != '\0'; ++i)
    {   bin = n[i];  //think of changing bin into char
        sum = 0;
        for(j = 0; bin != '\0'; j++)
        {
            sum = sum + pow(2,j) * (bin%10);
            bin = bin/10;
            
            // printf("%d", sum);
        }
        // printf("%d", sum);
        k = sum;
        
        
        // printf("%d", k);
        printf("%c", k);
    }
    // printf("%d", s);
    // printf("%d", decrypted_string);
    return 0;
}
