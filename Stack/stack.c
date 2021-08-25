#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


Stack *stack_create(void){

  Stack *stack_create = (Stack*)malloc(sizeof(Stack));
  if (stack_create == NULL){
    fprintf(stderr, "ERROR : Cant allocate memory\n");
  }
  stack_create->capacity = 10;
  stack_create->size = -1;
  stack_create->data = (double *)malloc(stack_create->capacity*sizeof(double));
  return stack_create;
}

// Destroy the stack.
void stack_destroy(Stack *s){
  free (s->data);
  free (s);

}

void stack_push(Stack *s, double value){
  if (s->capacity == s->size){
    s = (Stack*) realloc(s,s->capacity*2);
    s->capacity = s->capacity*2;
  }
  *(s->data) = value;
  s->data++;
  s->size++;
}

double stack_pop(Stack *s){
  if (s->size == -1){
    fprintf(stderr,"There are nothing to pop\n");
  }
  s->data--;
  s->size--;
  return *(s->data);
}

bool stack_is_empty(const Stack *s){
  if (s->size == -1){
    return true;
  }
  else {
    return false;
  }
}
