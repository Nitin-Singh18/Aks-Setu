#include<stdio.h>
#include "welcome/welcome.c"
#include "option_selection/select_options.c"
#include "option_selection/select_encypt_decrypt.c"
#include "option_selection/check_code.c"

int isDone = 0;

int main() {
    
    int options, encrypt_decrypt;
    char tryAgain;

    if(isDone == 0) {
        showWelcomeMessage();
        isDone = 1;

        
    }else{
        printf("\n\n\n\n\n");
    }

    options = chooseOption();

    delay(1);

    encrypt_decrypt = selectEncryptDecrypt();

    delay(1);

    checkCodeEntered(options, encrypt_decrypt);

    delay(2);

    printf("\n\n\nWant to try more encryption methods, reply with y or n : ");

    scanf("%c", &tryAgain);

    if(tryAgain == 'y') {
        delay(1);
        main();
    }else{
        isDone = 0;
    }

    return 0;
}
