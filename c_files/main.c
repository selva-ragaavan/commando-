#include <stdio.h>
#include <string.h>
#include "header.h"

#define maxtask 8
#define maxlength 25
extern char array;


int  main(int argc,char *argv[]) {
    if(argc == 1){
        printf("invalid input is carried out");
    }
    else if(argc > 1 && strcmp(argv[1], "add") == 0){
        char *add_result = add(argc-1,&argv[1]);
         if (add_result != NULL)
            printf("%s", add_result);
        else
            printf("Unknown error occurred.\n");
        

    }
    else if(argc > 1 && strcmp(argv[1],"delete")==0){
        delete(argc-1,&argv[1]);
        
    }

    
    else if(argc > 1 && strcmp(argv[1],"showtask")==0){
        char *showtask = show(argc-1,&argv[0]);
        showtask;
        

    }


}

