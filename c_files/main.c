#include <stdio.h>
#include <string.h>
#include "header.h"

#define maxtask 8
#define maxlength 25

char input[10];
char task[8][25];  // Corrected declaration

int  main(int argc,char *argv[]) {

   // char *result = add(argc-1,&argv[1]); 
   // char *showtask = show(argc,&argv[1],task);
   //add(argc-1,&argv[1]);
   //show(argc-1,&argv[0],task);
   add(argc-1,&argv[1]);
   printf("%S",task[0]);
   printf("%S",task[1]);
   printf("%S",task[2]);
   printf("%S",task[3]);
   printf("%S",task[4]);
   printf("%S",task[5]);



}
