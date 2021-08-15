#include <stdio.h>

void checkCodeEntered(int selectedOption, int toolType) {

    printf("\n\nEnter Your Text :");

    char string[50];

    scanf("%[^\n]s", string);

    if(toolType == 1) {
    
        printf("Encrypted Text : %s\n", string);

    }else {
        
        printf("Decrypted Text : %s\n", string);

    }

    


    // if(selectedOption == 1) {

    //     printf("\n\nYou Have Selected Ascii Code Type Encryption/Decyption Tool\n\n");

    //     if(toolType == 1) {



    //     }else {

    //     }

    // }else if(selectedOption == 2) {

    //     printf("\n\nYou Have Selected Atbash Code Type Encryption/Decyption Tool\n\n");

    //     if(toolType == 1) {

    //     }else {
            
    //     }

    // }else if(selectedOption == 3) {

    //     printf("\n\nYou Have Selected Binary Code Type Encryption/Decyption Tool\n\n");

    //     if(toolType == 1) {

    //     }else {
            
    //     }

    // }else if(selectedOption == 4) {

    //     printf("\n\nYou Have Selected Caesar Cipher Code Type Encryption/Decyption Tool\n\n");

    //     if(toolType == 1) {

    //     }else {
            
    //     }

    // }else if(selectedOption == 5) {

    //     printf("\n\nYou Have Selected D-Code Type Encryption/Decyption Tool\n\n");

    //     if(toolType == 1) {

    //     }else {
            
    //     }
        
    // }else if(selectedOption == 6) {

    //     printf("\n\nYou Have Selected Prime Code Type Encryption/Decyption Tool\n\n");

    //     if(toolType == 1) {

    //     }else {
            
    //     }

    // }else if(selectedOption == 7) {

    //     printf("\n\nYou Have Selected Reverse Code Type Encryption/Decyption Tool\n\n");

    //     if(toolType == 1) {

    //     }else {
            
    //     }

    // }else if(selectedOption == 8) {

    //     printf("\n\nYou Have Selected Roman Code Type Encryption/Decyption Tool\n\n");

    //     if(toolType == 1) {

    //     }else {
            
    //     }

    // }else if(selectedOption == 9) {

    //     printf("\n\nYou Have Selected Symbol Code Type Encryption/Decyption Tool\n\n");

    //     if(toolType == 1) {

    //     }else {
            
    //     }

    // }else {

    //     printf("\n\nPlease Enter Correct Keyword\n\n");

    // }


}