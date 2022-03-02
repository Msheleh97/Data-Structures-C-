#include <stdlib.h>
#include <stdio.h>
#include "array.h"


Array *array_create(int n1, int n2){
  
  Array *p = (Array*)malloc (sizeof(Array));

  if (p == 0){
    fprintf(stderr, "ERROR : Cant allocate memory\n");
  }

  p -> data = (int*)calloc ( n1*n2 , sizeof (int));
  p -> n1 = n1;
  p -> n2= n2;
  return p;
}



void array_destroy(Array *arr){
  free (arr->data);
  free(arr);
}


int array_rows(const Array *arr){
  return arr -> n1;
}


int array_columns(const Array *arr){
  return arr -> n1;
}


int array_get(const Array *arr, int i1, int i2){
  
  int row, position, num;
  row = array_rows(arr);
  position = row * i1 + i2;
  return *(arr-> data + position);
}

void array_set(Array *arr, int i1, int i2, int value){
  
  int row, position ;
  row = array_rows(arr);
  position = row * i1 + i2;

  *(arr -> data + position) = value;

}
