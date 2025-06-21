#include <string.h>
#include <stdio.h>

extern char task[8][25];
char * show(int argc , char *argv[]){
    if(argc==1 && strcmp(argv[1], "show-task") == 0){
        for(int i = 0;i<8;i++){
            printf("| Task\n");
            printf("|%S",task[i]);
        }
    }
    else{
        printf("no current tasks to show");
    }
}
    
        
       


