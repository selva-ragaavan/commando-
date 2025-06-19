#include <stdio.h>
#include <string.h>
#include "header.h"

#define maxtask 8
#define maxlength 25

char input[10];
char task[8][25];  // Corrected declaration

int  main(int argc,char *argv[]) {

    char *result = add(argc-1,&argv[1]); // adding function calling
    char *showtask = show(argc-2,&argv[1],task);
    printf("%S",result);
    // adding input logic 

}
