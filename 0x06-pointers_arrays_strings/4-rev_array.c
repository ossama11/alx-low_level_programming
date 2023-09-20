#include "main.h"
/**
 * reverse_array - Reverses the elements of an integer array
 * @a: Pointer to the integer array
 * @n: Number of elements in the array
 *
 * This function takes an integer array and its size as input and reverses the
 * order of the elements in the array.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
