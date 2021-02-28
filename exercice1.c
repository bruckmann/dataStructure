#include <stdio.h>
#include <stdlib.h>

int main() {
  /* Creating the variables */
  int a;
  int *b;
  
  /* Allocating memory for pointer b */
  b = (int *) malloc(sizeof(int));
  
  /* Initializing the variables */
  a = 20;
  *b = 20;

  /* Printing the values of each variable */
  printf("The value of A is: %d, and the value of b is: %d\n", a, *b);

  /* Printing the sum of variables */
  printf("The sum of A and B is: %d", (a + *b));
}