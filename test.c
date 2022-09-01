#include <stdlib.h>
#include <stdio.h>
#include "dislib.h"

int main(int argc, char *argv[])
{
  stack s;

  //initialize the stack
  stack_init(&s, 10);

  //add numbers into the stack
  stack_push(&s, 5);
  stack_push(&s, 8);
  stack_push(&s, 2000);
  stack_push(&s, 25);

  //check size of the stack
  printf("Stack size is : %d\n", stack_size(&s));

  //remove the top 2 values
  printf("Popped %d off the stack\n", stack_pop(&s));
  printf("Popped %d off the stack\n", stack_pop(&s));

  //check size of the stack
  printf("Stack size is : %d\n", stack_size(&s));

  //remove all values of the stack
  stack_deallocate(&s);
  printf("All values removed from the stack\n");

  //check size of the stack
  printf("Stack size is : %d\n", stack_size(&s));

  return 0;
}
