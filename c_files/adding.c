#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "header.h"

extern char task[8][25];
static int n = 0;
FILE* ptr;






char * add(int argc , char *argv[]) {
    if(n<=8){
        ptr = fopen("tasks.txt", "a");
        if(ptr == NULL){
            printf("error f*ile could not be opened");
            return NULL;
        }
        fputs(argv[1], ptr);
        fputs("\n",ptr);
        fclose(ptr);
        n= n+1;
        return "Task added successfully.\n";
        
       
        
    }
    else{
        printf("complete exisiting tasks\n");
    }
        

    }
    

//