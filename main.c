#include <stdio.h>
#include <string.h>
#include "adding.h"

#define maxtask 8
#define maxlength 25

char task[8][25];  // Corrected declaration

int main() {
    char* argv[2] = {"add", "do the homework"};
    const int argc = sizeof(argv) / sizeof(char*);
    
    char *result = add(argc, argv);
    printf("%s\n", result);   // Output the result

    printf("Stored task: %s\n", task[0]);  // Verify task storage
    return 0;
}
