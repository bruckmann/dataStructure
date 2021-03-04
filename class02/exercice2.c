#include <stdio.h>
#include <stdlib.h>

int main() {

  // Declaring the variables
  int a, b;
  int *p, *q;

  // Initializing the variables
  a = 10;
  b = 20;
  
  // Allocating memory for the pointers
  p = (int *) malloc(sizeof(int));
  q = (int *) malloc(sizeof(int));

  // Pointing the pointers to the variables a and b
  p = &a;
  q = &b;

  // printing only the value of the variables with memory allocated by the compiler
  printf("The value of a is: %d, and the value of b is: %d\n", a, b);

  // printing all the variables, with p pointing to a and q pointing to b
  printf("The value of a is: %d, and the value of b is: %d, the value of p is: %d, the value of q is: %d\n", a, b, *p, *q);

  // Printing the location in memory of the variables
  printf("The location of a is: %d, the location of b is: %d, the location of p is: %d, and the location of q is: %d\n", &a, &b, p, q);

}