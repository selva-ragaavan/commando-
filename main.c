#include <stdio.h>
#include <string.h> 
#define maxtask 8
#define maxlength 25

extern  char * add(int argc , char *argv[]);
char * add();

char arr[maxtask][maxlength]; // global char array task max 8 task and each 25 characters 



int main(){
    add(); // function call to add

}