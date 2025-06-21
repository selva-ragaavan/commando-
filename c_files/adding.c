#include <string.h>
#include <stdio.h>
#include "header.h"

extern char task[8][25];





char * add(int argc , char *argv[]) {
    static int n =  0;
    static int tasknumber =1;
    if(n<8){
        if(argc > 1 && strcmp(argv[0], "add") == 0) {
        strncpy(task[n], argv[1], 24);

        task[n][24] = '\0';
        n++;
        printf("Task of No :%d added successfully",tasknumber);
        tasknumber++;
    }
        else return "invalid arguments";

    }
    else return "Complete the existing ones first";
    
    }

    

