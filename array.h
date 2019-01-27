int* fill_array(int);
int* empty_array(int);
int* sort_array(int*, int);
int* enter_array(int);
int* fill_matrix(int, int);
int* empty_matrix(int, int);
int* erase_array(int*, int);
int* erase_matrix(int**, int, int);
int* append(int*, int, int);
void print_array(int*, int);
void print_matrix(int**, int, int);

int* append(int* array, int size, int appending)
{
	// Генерируем новый массив с размером size + 1
	// Заполняем его элементами передаваемого массива
	// Члену size + 1 присваивается значение appending 
	// Пожалуйста, простите меня за такое

	int *new_array;

	new_array = (int*)malloc((size+1) * sizeof(int));

	for (int i = 0; i < size ; i++)
	{
		new_array[i] = array[i];
	}

	new_array[size] = appending;

	free(array);

	return new_array;
}

void print_array(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
}

void print_matrix(int** array, int size_x, int size_y)
{
	for (int i = 0; i < size_x; i++)
	{
		for (int j = 0; j < size_y; j++)
		{
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int* erase_matrix(int** array, int size_x, int size_y)
{
	for (int i = 0; i < size_x; i++)
	{
		for (int j = 0; j < size_y; j++)
		{
			array[i][j] = 0;
		}
	}

	return array;
}


int* erase_array(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = 0;
	}

	return array;
}


int* empty_matrix(int size_x, int size_y)
{
	int **array;

	array = (int**)malloc(size_x * sizeof(int*));

	for (int i = 0; i < size_x; i++)
	{
		array[i] = (int*)malloc(size_y * sizeof(int));

		for (int j = 0; j < size_y; j++)
		{
			array[i][j] = 0;
		}
	}

	return array;
}

int* fill_matrix(int size_x, int size_y)
{
	int **array;

	array = (int**)malloc(size_x * sizeof(int*));

	for (int i = 0; i < size_x; i++)
	{
		array[i] = (int*)malloc(size_y * sizeof(int));

		for (int j = 0; j < size_y; j++)
		{
			array[i][j] = rand() % 100 - 50;
		}
	}

	return array;
}

int* enter_array(int size)
{
	int *array;

	array = (int*)malloc(size*sizeof(int));

	for (int i = 0; i < size; i++)
	{
		printf("array[%d] -> ", i);
		scanf("%d", &array[i]);
	}

	return array;
}

int* sort_array(int* array, int size)
{
	int middle;
	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < (size-1); i++)
		{
			if (array[i] > array[i+1])
			{
				middle = array[i];
				array[i] = array[i+1];
				array[i+1] = middle;
			}
		}
	}

	return array;
}

int* empty_array(int size)
{
	int *A;

	A = (int*)malloc(size * sizeof(int));

	for (int I = 0; I < size; I++)
	{
		A[I] = 1;
	}

	return A;
}

int* fill_array(int size)
{
	int *A;

	A = (int*)malloc(size * sizeof(int));

	for (int I = 0; I < size; I++)
	{
		A[I] = rand() % 100 - 50;
	}

	return A;
}