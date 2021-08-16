#include<stdio.h>
#include "welcome/welcome.c"
#include "option_selection/select_options.c"
#include "option_selection/select_encypt_decrypt.c"
#include "option_selection/check_code.c"
//#include "timer/timer_delay.c"

int main() {
    
    int options, encrypt_decrypt;

    showWelcomeMessage();

    options = chooseOption(options);

    delay(1);

    encrypt_decrypt = selectEncryptDecrypt();

    delay(1);

    checkCodeEntered(options, encrypt_decrypt);

    delay(20);

    return 0;
}
