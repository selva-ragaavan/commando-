#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "header.h"

char line[256];
static int n = 0;
FILE* ptr;
const char *file = "tasks.txt";  

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
    


int showno = 0;
char * show(int argc ,char *argv[]){
    ptr = fopen("tasks.txt", "r");
    if (ptr != NULL){
        
        while (fgets(line,sizeof(line),ptr)){
            showno++;
            printf("%d) %s/n",showno,line);
        }
        fclose(ptr);
    }
    else{
        printf("Unable to open file!\n");
    }

}
char array[8][256];
void insertarray(void){
    ptr = fopen("tasks.txt","r");
    if(ptr != NULL){
        int index = 0;
        while (fgets(line,sizeof(line),ptr)){
            line[strcspn(line, "\n")] = 0;
            strcpy(array[index], line);
            index++;
        }
        fclose(ptr);
    }
    else{
        printf("unable to open file!\n");
    }

}

char * delete(int argc , char *argv[]){
    int del_taskno = argv[1]-1;
    if(remove(file) == 0){
        ptr = fopen("tasks.txt","a");
        for(int i =0;i<=7;i++){
            if(i != del_taskno){
                fputs(array[i],ptr);
                fputs("/n",ptr);
            }
            else{
                continue;
            }

        }
        fclose(ptr);

    }

    }
    
    
