/**************************************************************
 * This started as a joke on Discord                          *
 * (c) 2021 gnuoveryou under CC 0 license                     *
 **************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void org_asm(char args[], char file[]){
  if(!file){
    if(!args){
      printf("Error: no arguments!\n");
    }
  }
  tolower(args[]);
  tolower(file[])
  else if(strcmp(args[0], "help") == 0) {
    printf("orgasm is an assembly language and assembler that started as a joke on Discord.\n");
    printf("Usage: \n");
    printf("./org-asm help\n");
    return;
  }
  else if(strcmp(args[0], "run") == 0) {
    if(!file) {
      printf("Error: no files to run.\n");
      return;
    }
    else if(sizeof(file) > 1) {
      printf("Error: more than 1 file. Right now there's only one file at a time.");
      return;
    }
    else if(!strcmp(file[0], ".asm") >= 0 || !strcmp(file[0], ".s") >= 0) {
      printf("Error: file not assembly (.asm or .s)! Now can be uppercase and lowercase.\n");
      return;
    }
    else {
      char code = fopen(file[1]);
      if(code == "nop") {
        code++;
      }
      else if(code == ";") {
        while(code != "\n") {
          code++;
        }
      }
      else if(code == "hlt") {
        exit(EXIT_SUCCESS);
      }
    }
  }
}
