#include "jef.h"

#include <stdio.h>
#include <string.h>

void moto(void) {
    printf("My name is Jeff!\n");
}

// TODO: implement a pre run code check process
void compile(char* code) {

}

void run(char* code) {
    char *token = strtok(code, "-");

    while (token != NULL) {
        token = strtok(NULL, "-");

    }
}