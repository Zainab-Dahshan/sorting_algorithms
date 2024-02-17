#include <stdio.h>
/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: pointer to the first element of the array to be sorted
 * @size: number of elements in the array
 * Description: This function implements the Bubble sort algorithm
 * to sort an array of integers in ascending order. It iterates through
 * the array multiple times, comparing adjacent
 * elements and swapping them if they are in the wrong order.
 * The process continues until no more swaps are needed, indicating
 * that the array is sorted. After each swap, the array is printed to
 * the standard output.
 * Time complexity:
 * - Best case: O(n) when the array is already sorted
 * - Average case: O(n^2) when the array is in reverse order or randomly ordered
 * - Worst case: O(n^2) when the array is in reverse order or randomly ordered
 */
void bubble_sort(int *array, size_t size)
{
int i, j, temp;

for (i =   0; i < size -   1; i++)
{
for (j =   0; j < size - i -   1; j++)
{
if (array[j] > array[j +   1]) {
/* Swap array[j] and array[j +   1] */
temp = array[j];
array[j] = array[j +   1];
array[j +   1] = temp;
/* Print the array after each swap */
for (int k =   0; k < size; k++)
{
printf("%d ", array[k]);
}
printf("\n");
}
}
}
}

