#include <string.h>
#include <stdio.h>

extern char task[8][25];
char ** show(int argc , char *argv[],task){
    if(argc==1 && strcmp(argv[0], "show-task") == 0){
        for(int i = 0;i<8;i++){
            printf("%d ----->%S/n",i,task[i]);


        }

    }
    printf("task is not saving properly");

}
