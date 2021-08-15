#include <stdio.h>

int chooseOption() {

    int selectedOption;

    printf("There are tools for encrypting/decrypting your text\n1. Ascii Code\n2. Atbash Code\n3. Binary code\n4. Caser Cipher Code\n5. D-code\n6. Prime code\n7. Reverse code\n8. Roman Code\n9. Symbol code");

    delay(1);

    printf("\n\nPlease select any one of type in Numerical:");

    scanf("%d", &selectedOption);

    if(selectedOption == 1) {

        printf("\n\nYou Have Selected Ascii Code Type Encryption/Decyption Tool\n\n");

    }else if(selectedOption == 2) {

        printf("\n\nYou Have Selected Atbash Code Type Encryption/Decyption Tool\n\n");

    }else if(selectedOption == 3) {

        printf("\n\nYou Have Selected Binary Code Type Encryption/Decyption Tool\n\n");

    }else if(selectedOption == 4) {

        printf("\n\nYou Have Selected Caesar Cipher Code Type Encryption/Decyption Tool\n\n");

    }else if(selectedOption == 5) {

        printf("\n\nYou Have Selected D-Code Type Encryption/Decyption Tool\n\n");
        
    }else if(selectedOption == 6) {

        printf("\n\nYou Have Selected Prime Code Type Encryption/Decyption Tool\n\n");

    }else if(selectedOption == 7) {

        printf("\n\nYou Have Selected Reverse Code Type Encryption/Decyption Tool\n\n");

    }else if(selectedOption == 8) {

        printf("\n\nYou Have Selected Roman Code Type Encryption/Decyption Tool\n\n");

    }else if(selectedOption == 9) {

        printf("\n\nYou Have Selected Symbol Code Type Encryption/Decyption Tool\n\n");

    }else {

        printf("\n\nPlease Enter Correct Keyword\n\n");
        delay(1);
        chooseOption();
    }

    return selectedOption;
  
}