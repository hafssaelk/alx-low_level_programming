#include "search_algos.h"

/**
<<<<<<< HEAD
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
=======
  * linear_search - for a value in an array of integers use Linear Algo
  *
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
>>>>>>> 6a193a53b684b16129b045f1ecf61e7a74967e6d

	if (array == NULL)
		return (-1);

<<<<<<< HEAD
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
=======
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

>>>>>>> 6a193a53b684b16129b045f1ecf61e7a74967e6d
	return (-1);
}
