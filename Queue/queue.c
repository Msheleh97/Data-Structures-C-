#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"
#include "list.h"



Queue *queue_create(void){
  Queue *q= (Queue*)malloc(sizeof(Queue));
  q->list = list_create();
  return q;
}

bool queue_is_empty(const Queue *q){
  if (list_is_empty(q->list)){
      return true;
  }else{
      return false;
  }
}


void queue_enqueue(Queue *q, const char *value){
  ListPos p = list_end(q->list);
  p = list_insert(p, value);
}

char *queue_dequeue(Queue *q){
  ListPos p = list_first(q->list);
  char *v = calloc(strlen(list_inspect(p))+1,sizeof(char));
  strcpy(v, list_inspect(p));
  list_remove(p);
  return v;

}

void queue_destroy (Queue *q){
  list_destroy (q->list);
  free(q);
}
