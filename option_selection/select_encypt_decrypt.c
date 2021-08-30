#include <stdio.h>

int selectEncryptDecrypt() {

    int select;

    printf("\nWhat you want to Do ?\n1. Encrypt Your Text\n2. Decrypt Your Text\n\nPlease Select One Method :");

    scanf("%d", &select);

    delay(1);

    if(select == 1) {

        printf("\n\nYou Have Selected Encryption Method...");

    }else if(select == 2) {

        printf("\n\nYou Have Selected Decryption Method...");

    }else {
        printf("\n\nPlease Enter Correct Keyword !\n\n");
        delay(1);
        selectEncryptDecrypt();
        delay(1);
    }

    return select;

}