#include "header.h"
#include <time.h>
#include <stdlib.h>
char randchar() {
    char capitalLetters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int randomNumber = rand() % 26;
    return capitalLetters[randomNumber];
}