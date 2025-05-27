#include <string.h>

extern char task[8][25];


char * add(int argc , char *argv[]){
    if(argc > 1 && strcmp(argv[0], "add") == 0) {
        strncpy(task[0], argv[1], 24);
        task[0][24] = '\0';
        return "task added successfully";
    }
    return "invalid arguments";
}
