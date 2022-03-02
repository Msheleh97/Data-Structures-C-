/**
 * Queue
 *
 * @author  Mohammad Mshaleh
 * @since   2019-12-02
 *
 * @{
 */
#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

#include "list.h"

// The type for the queue.
typedef struct queue{
    List *list;
} Queue;


/**
 * name : queue_create.
 * @brief Returns a pointer.
 *  Create and return an empty queue.
 *
 *
 * @param void.
 * @return Returns a pointer to queue.
 */Queue *queue_create(void);


 /**
  * name : queue_destroy.
  * @brief Returns nothing.
  *  Destroy the queue.
  *
  *
  * @param pointer to the queue.
  * @return void.
  */void queue_destroy(Queue *q);


 /**
  * name : queue_enqueue.
  * @brief Returns nothing.
  *  Add a value to the tail of the queue.
  *  The value is copied to dynamically allocated memory.
  *
  * @param pointer to a queue.
  * @return void.
  */void queue_enqueue(Queue *q, const char *value);


  /**
   * name : queue_dequeue.
   * @brief Returns a pointer to a char.
   * Remove the value at the head of the queue.
   *
   *
   * @param a pointer to the queue.
   * @return Returns a pointer to char.
   */char *queue_dequeue(Queue *q);

  /**
   * name : queue_is_empty
   * @brief Returns a bool.
   * Check if the queue is empty.
   *
   *
   * @param a pointer to a constant char.
   * @return Returns true/false.
   */bool queue_is_empty(const Queue *q);

#endif /* QUEUE_H */
