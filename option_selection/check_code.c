#include <stdio.h>
#include "../caesae_cipher_code/caeser_cipher_encryption.c"
#include "../caesae_cipher_code/caeser_cipher_decryption.c"
#include "../symbol_code/symbol_code_decryption.c"
#include "../symbol_code/symbol_code_enycryption.c"
#include "../atbash_code/atbash_code_decryption.c"
#include "../atbash_code/atbash_code_encyption.c"
#include "../ascii_code/ascii_code_decryption.c"
#include "../ascii_code/ascii_code_encryption.c"
#include "../binary_code/binary_code_decryption.c"
#include "../binary_code/binary_code_encryption.c"
#include "../D-code/D-code_encryption.c"
#include "../D-code/D-code_decryption.c"
#include "../prime_code/prime_code_decryption.c"
#include "../prime_code/prime_code_enncryption.c"
#include "../reverse_code/reverse_code_encryption.c"
#include "../reverse_code/reverse_code_decryption.c"
#include "../roman_no/roman_no_decryption.c"
#include "../roman_no/roman_no_encryption.c"



void checkCodeEntered(int selectedOption, int toolType) {

   
     if(selectedOption == 1) {

        printf("\n\nYou Have Selected Ascii Code Type Encryption/Decyption Tool\n\n");

        if(toolType == 1) {

            asciiCodeEncryption();

        }else {

            asciiCodeDecryption();

        }

    }else if(selectedOption == 2) {

        printf("\n\nYou Have Selected Atbash Code Type Encryption/Decyption Tool\n\n");

        if(toolType == 1) {

            atbashEncryptionFunction();

        }else {
            
            atbashDecryptionFunction();

        }

    }else if(selectedOption == 3) {

        printf("\n\nYou Have Selected Binary Code Type Encryption/Decyption Tool\n\n");

        if(toolType == 1) {

            binaryCodeEncyption();

        }else {

            binaryCodeDecryption();
            
        }

    }else if(selectedOption == 4) {

        printf("\n\nYou Have Selected Caesar Cipher Code Type Encryption/Decyption Tool\n\n");

        if(toolType == 1) {

            caeserCipherEncription();

        }else {
            
            caeserCipherDecryption();

        }

    }else if(selectedOption == 5) {

        printf("\n\nYou Have Selected D-Code Type Encryption/Decyption Tool\n\n");

        if(toolType == 1) {

            DcodeEncryption();

        }else {
            
            DcodeEncryption();

        }
        
    }else if(selectedOption == 6) {

        printf("\n\nYou Have Selected Prime Code Type Encryption/Decyption Tool\n\n");

        if(toolType == 1) {

            PrimeCodeEncryption();

        }else {

            PrimeCodeDecryption();
            
        }

    }else if(selectedOption == 7) {

        printf("\n\nYou Have Selected Reverse Code Type Encryption/Decyption Tool\n\n");

        if(toolType == 1) {

            reverseCodeEncryption();

        }else {

            reverseCodeDecryption();
            
        }

    }else if(selectedOption == 8) {

        printf("\n\nYou Have Selected Roman Code Type Encryption/Decyption Tool\n\n");

        if(toolType == 1) {

            RomanCodeEncryption();

        }else {

            RomanCodeDecryption();
            
        }

    }else if(selectedOption == 9) {

        printf("\n\nYou Have Selected Symbol Code Type Encryption/Decyption Tool\n\n");

        if(toolType == 1) {

            symbolCodeEncryption();

        }else {
            
            symbolCodeDecryption();

        }

    }else {

        printf("\n\nPlease Enter Correct Keyword\n\n");

        checkCodeEntered(selectedOption, toolType);

    }


}