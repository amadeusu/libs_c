#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <memory.h>
#include "array.h"

void main()
{
	int size = 10;
	const int size_x = 5;
	const int size_y = 5;
	int *array;
	int **matrix;

	srand(time(0));
	system("clear");

	// array = fill_array(size);

	// print_array(array, size);

	// array = append(array, size, 1100);
	// size++;

	// sort_array(array, size);

	// print_array(array, size);

	matrix = fill_matrix(size_x, size_y);

	print_matrix(matrix, size_x, size_y);

	free(matrix);
}