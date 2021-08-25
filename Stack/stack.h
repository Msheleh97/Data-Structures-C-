/**
 * Stack
 *
 * @author  Mohammad Mshaleh
 * @since   2021-01-02
 *
 * @{
 */
#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

/** The type for a stack*/
typedef struct stack
{
    int capacity;
    int size;
    double *data;
} Stack;

/**
 * name : stack creat.
 * @brief Returns a pointer.
 * This function Create an empty stack.
 *
 * @param  nothing (void).
 * @return Returns an pointer two stack.
 */
Stack *stack_create(void);

/**
 * name :stack destroy.
 * @brief nothing.
 * This function Destroy the stack..
 *
 * @param  a pointer to a stck.
 * @return Returns nothing (void).
 */
void stack_destroy(Stack *s);

/**
 * name :stack push.
 * @brief Returns nothing.
 * This function Pushs values onto the stack
 *
 * @param  first parameter is a pointer to the stack, the other is a value of   * double type.
 * @return Returns nothing (void).
 */
void stack_push(Stack *s, double value);

/**
 * name :stack pop.
 * @brief Returns a double value.
 * This function Pop the value at the top of the stack
 *
 * @param  pointer to the stack
 * @return Returns a double value.
 */
double stack_pop(Stack *s);

/**
 * name :stack is empty.
 * @brief Returns a bool.
 * This function Checks if the stack is empty
 *
 * @param  Constant pointer to the stack
 * @return Returns a false or true value.
 */
bool stack_is_empty(const Stack *s);

/**
 * name :test the program.
 * @brief Returns nothing.
 * This function checks if the program is working, it pushs 2 value into the
 * empty stack and test if the right value gets back.
 * @param  pointer to the stack
 * @return Returns nothing.
 */
void test_the_programm (Stack *s);



#endif /* STACK_H */
/**
 * @}
 */
