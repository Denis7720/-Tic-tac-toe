#include "matrix.h"
#include "stroke.h"
#include "win.h"
#include "players.h"

int main()
{	
	system("clear");
	char *matrix[SIZE][SIZE];
	int value;
	char name_1[20];
	char name_2[20];
	char player_first, player_second;
	int gamer;
	int yep;

	printf("\n");
	printf("Введите имя первого игрока: \n");
	scanf("%s", name_1);
	printf("Введите имя второго игрока: \n");
	scanf("%s", name_2);

	system("clear");

	gamer = who_first(name_1, name_2);

	player_first = X_O(gamer, name_1, name_2);
		
	if (player_first == 'X'){
		player_second = 'O';
	} else if (player_first == 'O'){
		player_second = 'X';
	}

	matrix_init(matrix);

	for (int i = 1;; i++){
		if (gamer == 1){
			if (i % 2 == 1){
				system("clear");
				PRINT_MATRIX;
				int player = 1;
				int dead_heat = 0;
				do {
					dead_heat = 0;
					int ok = 0;
					do {
						printf("Игрок %s введите ход от 1 до 9: ", name_1);
						if (scanf("%d", &value) != 1){
							printf("Ошибка ввода!\n");
							getchar();
						} else {
							ok = 1;
						}
					} while(ok != 1);

					dead_heat = error(matrix, value);
				} while (dead_heat != 0);

				stroke(matrix, value, player, player_first, player_second, gamer);
				PRINT_MATRIX;
			}

			if (i % 2 == 0){
				system("clear");
				PRINT_MATRIX;
				int player = 2;
				int dead_heat = 0;
				do {
					dead_heat = 0;
					int ok = 0;
					do {
						printf("Игрок %s введите ход от 1 до 9: ", name_2);
						if (scanf("%d", &value) != 1){
							printf("Ошибка ввода!\n");
							getchar();
						} else {
							ok = 1;
						}
					} while(ok != 1);

					dead_heat = error(matrix, value);
				} while (dead_heat != 0);

				stroke(matrix, value, player, player_first, player_second, gamer);
				PRINT_MATRIX;
			}

		} else if (gamer == 2){
			if (i % 2 == 1){
				system("clear");
				PRINT_MATRIX;
				int player = 2;
				int dead_heat = 0;
				do {
					dead_heat = 0;
					int ok = 0;
					do {
						printf("Игрок %s введите ход от 1 до 9: ", name_2);
						if (scanf("%d", &value) != 1){
							printf("Ошибка ввода!\n");
							getchar();
						} else {
							ok = 1;
						}
					} while(ok != 1);

					dead_heat = error(matrix, value);
				} while (dead_heat != 0);

				stroke(matrix, value, player, player_first, player_second, gamer);
				PRINT_MATRIX;

			} else if (i % 2 == 0){
				system("clear");
				PRINT_MATRIX;
				int player = 1;
				int dead_heat = 0;
				do {
					dead_heat = 0;
					int ok = 0;
					do {
						printf("Игрок %s введите ход от 1 до 9: ", name_1);
						if (scanf("%d", &value) != 1){
							printf("Ошибка ввода!\n");
							getchar();
						} else {
							ok = 1;
						}
					} while(ok != 1);

					dead_heat = error(matrix, value);
				} while (dead_heat != 0);

				stroke(matrix, value, player, player_first, player_second, gamer);
				PRINT_MATRIX;
			}
		}
	int winner = win(matrix);
	if (winner == 1)
		break;
	}
}