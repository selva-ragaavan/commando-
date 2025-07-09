#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "header.h"

char line[256];
static int n = 0;
FILE* ptr; // file pointer for adding  functionality 
FILE* file;
 // file pointer for showtask functionality 

// adding task function 

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
    
// deleting task function 
char *delete(int argc , char *argv[]){


}

int showno = 0;
// function to show existing tasks 
char * show(int argc ,char *argv[]){
    ptr = fopen("tasks.txt", "r");
    if (ptr != NULL){
        
        while (fgets(line,sizeof(line),ptr)){
            showno++;
            printf("%d)%s",showno,line);
        }
        fclose(ptr);
    }
    else{
        printf("Unable to open file!\n");
    }

}

char * delete(int argc , char *argv[]){
    char array[8][256];
    
}