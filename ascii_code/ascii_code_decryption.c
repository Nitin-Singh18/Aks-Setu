#include<stdio.h>

int main()
{
    int text[100]={0}; //= {105,106,107};
    char a = '@';
    int i; //times;
    //times = 3;
    
    
    printf("Enter the text for encryption: ");
    
    for(i = 0; i<100; ++i) //times, 100, count, providing direct value removes the error
    {
        scanf("%d", &text[i]);

        if(text[i]==a)
        {
            break;
        }
    }
    
    
    for(i=0; text[i] != '\0'; ++i)
    {
        printf("%c", text[i]);
    }
        return 0;
}
