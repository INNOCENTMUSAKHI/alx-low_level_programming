#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the start of the array
 * @size: size of the array (number of elements)
 *
 * Return: nothing
 */
void print_array(int *array, size_t size)
{
    size_t i;

    if (array == NULL || size == 0)
        return;

    printf("Searching in array: ");

    for (i = 0; i < size; i++)
    {
        if (i == 0)
            printf("%d", array[i]);
        else
            printf(", %d", array[i]);
    }

    printf("\n");
}

/**
 * binary_search - find value in sorted array using binary search method
 * @array: pointer to first element in array to be searched
 * @size: size of the array (number of elements)
 * @value: value to be searched for
 *
 * Return: index position of value relative to the original array or -1 if not found or array is null
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low = 0;
    size_t high = size - 1;
    size_t mid;

    if (array == NULL || size == 0)
        return (-1);

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        print_array(&array[low], (high - low) + 1);

        if (array[mid] == value)
            return (mid);

        if (array[mid] > value)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return (-1);
}

/**
 * exponential_search - search for a value in a sorted array using exponential
 * search and binary search algorithms
 * @array: pointer to the array to be searched
 * @size: size of the array (number of elements)
 * @value: the value to be searched for
 *
 * Return: first index value is found at or -1 if not present or array is null
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t lower_bound;
    size_t upper_bound = 1;
    int value_position;

    if (array == NULL || size == 0)
        return (-1);

    while (upper_bound < size && array[upper_bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", upper_bound * 2, array[upper_bound * 2]);
        lower_bound = upper_bound;
        upper_bound *= 2;
    }

    if (upper_bound >= size)
        upper_bound = size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", lower_bound,
           upper_bound);
    value_position = binary_search(&array[lower_bound],
                                   upper_bound - lower_bound + 1, value);

    if (value_position != -1)
        value_position += lower_bound;

    return (value_position);
}

