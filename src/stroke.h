#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define SIZE 3

//Ход игроков
void stroke(char *matrix[SIZE][SIZE], int value, int player, char player_1, char player_2, int gamer);
//Если ввод неверен
int error(char *matrix[SIZE][SIZE], int value);