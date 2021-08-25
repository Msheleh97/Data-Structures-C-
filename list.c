#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include <stdbool.h>

static char *clone_string(const char *in){
  size_t len = strlen(in);
  char *out =(char *) calloc(len + 1, sizeof(char));
  if (out == NULL){
    fprintf(stderr, "EROR : can not allocate memory\n");
  }
  strcpy(out, in);
  return out;
}

static struct node *make_node(const char *value){
  struct node *new_node =(struct node *)malloc(sizeof(struct node));
  if (new_node == NULL){
    fprintf(stderr, "EROR : can not allocate memory\n");
  }
  new_node->value = clone_string(value);
  new_node->prev = NULL;
  new_node->next = NULL;
  return new_node;
}


List *list_create(void){
  List *lst = malloc(sizeof(List));
  if (lst == NULL){
    fprintf(stderr, "EROR : can not allocate memory\n");
  }
  lst->head.prev=&lst->head;
  lst->head.next=&lst->head;
  return lst;
}


void list_destroy(List *lst){
  while (!list_is_empty(lst)){
    list_remove(list_first(lst));
  }
  free(lst);
}


bool list_is_empty(const List *lst){
  if (lst->head.prev == &lst->head && lst->head.next == &lst->head ){
    return true;
  }
  return false;
}


ListPos list_first(List *lst){
  ListPos pos = {
    .node = lst->head.next
  };
  return pos;
}


ListPos list_end(List *lst){
  ListPos pos = {
      .node = &lst->head
  };
  return pos;
}


bool list_pos_equal(ListPos p1, ListPos p2){
  return p1.node == p2.node;
}


ListPos list_next(ListPos pos){
  ListPos next;
  next.node = pos.node->next;
  return next;
}


ListPos list_prev(ListPos pos){
  ListPos prev;
  prev.node = pos.node->prev;
  return prev;
}


ListPos list_insert(ListPos pos, const char *value){
    // Create a new node.
    struct node *node = make_node(value);

    // Find nodes before and after (may be the same node: the head of the List).
    struct node *before = pos.node->prev;
    struct node *after = pos.node;

    // Link to node after.
    node->next = after;
    after->prev = node;

    // Link to node before.
    node->prev = before;
    before->next = node;

    // Return the position of the new element.
    pos.node = node;
    return pos;
}


ListPos list_remove(ListPos pos){
  ListPos a;
  struct node *before = pos.node->prev;
  struct node *next = pos.node->next;
  if(before != NULL&&next != NULL){
    before->next = next;
    next->prev = before;
  }
  free(pos.node->value);
  free(pos.node);
  a.node = next;
  return a;
}


const char *list_inspect(ListPos pos){
  return pos.node->value;
}
