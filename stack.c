#include <stdlib.h>
#include <stdio.h>
#include "dislib.h"

void stack_init (stack *s, int capacity)
{
  s->data = (int *)malloc(sizeof(int)*capacity);
  s->count = -1;
  s->max = capacity;
}

int stack_size(stack *s)
{
  return s->count+1;
}

int stack_pop(stack *s)
{
  if(s->count > -1)
  {
    return s->data[s->count--];
  }
  else
    return -9999;
}

void stack_push(stack *s, int e)
{
  if(s->count+1 == s->max)
  {
    return;
  }
  else
  {
    s->data[++s->count] = e;
  }
}

void stack_deallocate(stack *s)
{
  while(s->count != -1)
  {
    stack_pop(s);
  }
}
