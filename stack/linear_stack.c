#include <stdlib.h>
#include "linear_stack.h"

const int TRUE = 1;
const int FALSE = 0;

struct Stack_ {
  int quantity;
  int element[LENGTH];
};

Stack* create_stack() {
  Stack* stack = (Stack*) malloc(sizeof(Stack));
  if(stack != NULL) {
    stack->quantity = 0;
  }
  return stack;
}

int push(Stack* stack, int value) {
  if(LENGTH == stack->quantity) return FALSE;
  stack->element[stack->quantity++] = value;
  return TRUE;
}

int pop(Stack* stack, int* value) {
  if(stack->quantity > 0) {
    *value = stack->element[--(stack->quantity)];
    return TRUE;
  }
  return FALSE;
}

int top(Stack* stack, int* value){
  if(stack->quantity > 0) {
    *value = stack->element[--(stack->quantity)];
    return TRUE;
  }
  return FALSE;
}

void free_stack(Stack* stack){
  free(stack);
}