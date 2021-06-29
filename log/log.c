#include <stdio.h>

const char* regPrefix = "[Jef] ";
const char* errPrefix = "[Error] ";

void logJ(char* s) {
    printf("%s%s", regPrefix, s);
}

void logE(char* s) {
    printf("%s%s", errPrefix, s);
}