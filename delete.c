#include <stdio.h>

extern char task[8][25];
int *ptr = task;
extern char *showtask = show(argc-2,&argv[1],task);
int gettask;

char * delete(int argc , char * argv[]){
    if(argc>1 && strcmp(argv[1],"delete") == 0){
        printf("%S",&showtask);
        scanf("Enter the task to be removed:",&gettask);
        


        


    }
}