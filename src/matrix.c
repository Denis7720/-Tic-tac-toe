#include "matrix.h"

void matrix_init(char *matrix[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++){
		for (int j = 0; j < SIZE; j++){
			matrix[i][j] = ' ';
		}
	}
}

void matrix_print(char *matrix[SIZE][SIZE])
{
	int i;
	for (i = 0; i < SIZE; i++){
		printf("\n==================================="); //35 равно 
		printf("\n||         ||         ||         ||"); //8 отводится под || и 27 под пробелы... 9 на каждый слот
		printf("\n||    %c    ||    %c    ||    %c    ||", matrix[i][0], matrix[i][1], matrix[i][2]);
		printf("\n||         ||         ||         ||");	
	}
		printf("\n===================================\n");
}