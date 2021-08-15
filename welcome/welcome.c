#include<stdio.h>
// #include "../option_selection/select_options.c"
#include "../timer/timer_delay.c"

void showWelcomeMessage() {

    char name[20];
    

    printf("\nWelcome To AKS SETU...\nAKS SETU is an Encryption/Decription tool support 10 type of methods");
   
    delay(1);

    printf("\n\nPlease Enter Your Name before we begin the programme :");

    scanf("%[^\n]s", name);

    delay(1);

    printf("\nHello %s, Let's Get Started\n\n", name);

    delay(1);

    printf("There are tools for encrypting/decrypting your text\n1. Ascii Code\n2. Atbash Code\n3. Binary code\n4. Caser Cipher Code\n5. D-code\n6. Prime code\n7. Reverse code\n8. Roman Code\n9. Symbol code");

    delay(1);

    printf("\n\nPlease select any one of type in Numerical:");

    
}

