#ifndef DISLIB_H
#define DISLIB_H

typedef struct
{
  int count;
  int *data;
  int max;
} stack;

//Initializes the stack
void stack_init(stack *s, int capacity);

//Returns the size of the stack currently
int stack_size(stack *s);

//Returns the integer on top of the stack
int stack_pop(stack *s);

//Pushes the new item on top of the stack
void stack_push(stack *s, int e);

//Frees the stack
void stack_deallocate(stack *s);


#endif
