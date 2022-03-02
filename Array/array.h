/**
 * (Detailed description of the module.)
 *  Array 
 *
 * @author  Mohammad Mshaleh
 * @since   2020-12-28
 *
 * @{
 */

#ifndef ARRAY_H
#define ARRAY_H


/** The type for a 2D array.*/
typedef struct array{
    int n1;
    int n2;
    int *data;
} Array;


/**
 * name : array_create.
 * @brief Create and return a zero array of size n1 rows by n2 columns.
 *
 * @param n1: The quantity of rows.
 * @param n2: The quantity of columns
 * @return Returns a pointer to the 2D array.
 */
Array *array_create(int n1, int n2);


/**
 * name : array_destroy.
 * @brief Destroy an array
 *
 * @param arr: The array to be destroyd.
 * @return:    void0.
 */
 void array_destroy(Array *arr);


/**
  * name : array_rows.
  * @brief  Gets the number of rows of the given array.
  *
  * @param: The array.
  * @return Returns the quantity of rows.
  */
int array_rows(const Array *arr);


/**
  * name : array_columns.
  * @brief  Gets the number of columns of the given array.
  *
  * @param: The array.
  * @return Returns the quantity of columns.
  */
int array_columns(const Array *arr);


/**
  * name :  array_get
  * @brief  Return the value at row i1 and column i2 (zero-based indexing).

  *
  * @param arr: The array.
  * @param i1:  The number of row.
  * @param i2:  The number of column.
  * @return     The found value.
  */
int array_get(const Array *arr, int i1, int i2);


/**
  * name :   array_set
  * @brief   Set the value at row i1 and column i2 (zero-based indexing).
  *
  * @param arr:    The array.
  * @param i1:     The number of row.
  * @param i2:     The number of column.
  * @param value:  The value to set.
  * @return        Void.
  */
void array_set(Array *arr, int i1, int i2, int value);

#endif /* ARRAY_H */
/**
 * @}
 */
