#include <stdlib.h>
#include <stdio.h>
#include "linear_stack.h"
int main(){
  Stack* stack;
  stack = create_stack();
  int i;
  for (i=0; i < LENGTH; i++) {
    push(stack, (i + 1) * 2);
  }
  int value;
  for (i=0; i < LENGTH; i++) {
    if(pop(stack, &value)) {
      printf("Desempilhando -> %d\n", value);
    } else {
      printf("Pilha vazia \n");
    }
  }
  free_stack(stack);
}