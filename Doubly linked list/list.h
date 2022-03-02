/**
 * (Detailed description of the module.)
 *
 * Doubly linked list
 *
 * @author  Mohammad Mshaleh
 * @since   2019-11-21
 *
 * @{
 */


#ifndef LIST_H
#define LIST_H

#include <stdbool.h>


// The type for a node in the list.
struct node{
    struct node *next;
    struct node *prev;
    char *value;
};

// The type for a list.
typedef struct list{
    struct node head;
} List;

// The type for a list position.
typedef struct list_pos{
    struct node *node;
} ListPos;


/**
 * name : list-create.
 * @brief Returns a pointer to a list.
 *  Create and return an empty list.
 *
 *
 * @param void.
 * @return Returns a pointer .
 */
List *list_create(void);


/**
 * name : list destroy.
 * @brief Returns a pointer to a list.
 * Deallocate the list (and all of its values, if any).
 *
 *
 * @param a pointer to a list.
 * @return Returns nothing .
 */
void list_destroy(List *lst);


/**
 * name : list is empty.
 * @brief Returns a true or false.
 * Check if the list is empty.
 *
 *
 * @param a constant pointer to a list.
 * @return Returns a bool .
 */
bool list_is_empty(const List *lst);

/**
 * name : list first.
 * @brief Returns a list position.
 * Get the position of the first element.
 *
 *
 * @param a pointer to a list.
 * @return Returns a list position.
 */
ListPos list_first(List *lst);


/**
 * name : list end.
 * @brief Returns a list position.
 * Get the position after(!) the last element.
 *
 *
 * @param a pointer to a list.
 * @return Returns a list position.
 */
ListPos list_end(List *lst);


/**
 * name : list pos equal.
 * @brief Returns a true or false.
 * Check equality between two positions.
 *
 *
 * @param two pointers to list position.
 * @return Returns a bool.
 */
 bool list_pos_equal(ListPos p1, ListPos p2);

 /**
  * name : list next.
  * @brief Returns a list position.
  * Forward to the next position.
  *
  *
  * @param  a list position.
  * @return Returns a list position.
  */
ListPos list_next(ListPos pos);

/**
 * name : list prev.
 * @brief Returns a list position.
 * Backward to the previous position.
 *
 *
 * @param  a list position.
 * @return Returns a list position.
 */
ListPos list_prev(ListPos pos);



/**
 * name : list insert.
 * @brief Returns a list position.
 * Insert the value before the position and return the position of the new
 * element.
 *
 * @param  a list position and a pointer to a constant char.
 * @return Returns a list position.
 */
ListPos list_insert(ListPos pos, const char *value);

/**
 * name : list remove.
 * @brief Returns a list position.
 * Remove the value at the position and return the position of the next element.
 *
 *
 * @param  a list position.
 * @return Returns a list position.
 */
ListPos list_remove(ListPos pos);

/**
 * name : list inspect.
 * @brief Returns a pointer to a constant char.
 * Get the value at the position.
 *
 *
 * @param  a list position.
 * @return Returns a pointer.
 */
const char *list_inspect(ListPos pos);

/**
 * @}
 */

#endif /* LIST_H */
