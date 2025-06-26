#include <string.h>
#include <stdio.h>
#include "header.h"

extern char task[8][25];
static int n = 0;






char * add(int argc , char *argv[]) {
    if(n<=8){
        strncpy(task[n], argv[1], 24);
        task[n][24] = '\0';
        n= n+1;
        printf("task added successfully");
        printf("%S",task[0]);
        
    }
    else{
        printf("complete exisiting tasks\n");
    }
        

    }
    

