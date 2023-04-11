#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *  - prints the alphabet
 * @: the number to be checked
 */
char* argstostr(int ac, char** av) {
  if (ac == 0 || av == NULL) {
        return NULL;
    }
    size_t len = 0;
    for (int i = 0; i < ac; i++) {
        len += strlen(av[i]) + 1; // +1 for the newline character
    }
    char* result = (char*) malloc(len * sizeof(char));
    if (result == NULL) {
        return NULL;
    }
    size_t pos = 0;
    for (int i = 0; i < ac; i++) {
        strcpy(result + pos, av[i]);
        pos += strlen(av[i]);
        result[pos++] = '\n';
    }

    return result;
}
