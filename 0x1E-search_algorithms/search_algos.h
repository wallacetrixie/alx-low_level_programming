#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 0. Linear search */
int linear_search(int *array, size_t size, int value);

/* 1. Binary search */
int binary_search(int *array, size_t size, int value);

/* 2. Big O #0 */
int binary_search(int *array, size_t size, int value);

/* 3. Big O #1 */
/* Time complexity (worst case) of a linear search in an array of size n is O(n) */

/* 4. Big O #2 */
/* Space complexity (worst case) of an iterative linear search algorithm in an array of size n is O(1) */

/* 5. Big O #3 */
/* Time complexity (worst case) of a binary search in an array of size n is O(log n) */

/* 6. Big O #4 */
/* Space complexity (worst case) of a binary search in an array of size n is O(1) */

/* 7. Big O #5 */
/* Space complexity of the allocate_map function is O(n * m) */

/* 8. Big O #6 */
/* Time complexity (average case) of a jump search in an array of size n, using step = sqrt(n), is O(sqrt(n)) */

/* 9. Big O #7 */
/* Time complexity (average case) of an interpolation search in an array of size n is O(log log n) */

/* 10. Big O #8 */
/* Time complexity (average case) of an exponential search in an array of size n is O(log n) */

/* 11. Advanced binary search */
int advanced_binary(int *array, size_t size, int value);

/* 12. Jump search in a singly linked list */
listint_t *jump_list(listint_t *list, size_t size, int value);

/* 13. Linear search in a skip list */
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */

