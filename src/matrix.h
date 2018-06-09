#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define SIZE 3
#define PRINT_MATRIX matrix_print(matrix)

//Инициализация матрицы
void matrix_init(char *matrix[SIZE][SIZE]);
//Вывод матрицы
void matrix_print(char *matrix[SIZE][SIZE]);