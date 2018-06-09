#include "stroke.h"
#include "matrix.h"

void stroke(char *matrix[SIZE][SIZE], int value, int player, char player_1, char player_2, int gamer)
{
	if (gamer == 1){
		if (player == 1) {
			if (value == 1) {
				if (player_1 == 'X') {
					matrix[0][0] = 'X';
				} else if (player_1 == 'O') {
					matrix[0][0] = 'O';
				}
			}

			if (value == 2) {
				if (player_1 == 'X') {
					matrix[0][1] = 'X';
				} else if (player_1 == 'O') {
					matrix[0][1] = 'O';
				}
			}

			if (value == 3) {
				if (player_1 == 'X') {
					matrix[0][2] = 'X';
				} else if (player_1 == 'O') {
					matrix[0][2] = 'O';
				}
			}

			if (value == 4) {
				if (player_1 == 'X') {
					matrix[1][0] = 'X';
				} else if (player_1 == 'O') {
					matrix[1][0] = 'O';
				}
			}

			if (value == 5) {
				if (player_1 == 'X') {
					matrix[1][1] = 'X';
				} else if (player_1 == 'O') {
					matrix[1][1] = 'O';
				}
			}

			if (value == 6) {
				if (player_1 == 'X') {
					matrix[1][2] = 'X';
				} else if (player_1 == 'O') {
					matrix[1][2] = 'O'; 
				}
			}

			if (value == 7) {
				if (player_1 == 'X') {
					matrix[2][0] = 'X';
				} else if (player_1 == 'O') {
					matrix[2][0] = 'O';
				}
			}

			if (value == 8) {
				if (player_1 == 'X') {
					matrix[2][1] = 'X';
				} else if (player_1 == 'O') {
					matrix[2][1] = 'O';
				}
			}

			if (value == 9) {
				if (player_1 == 'X') {
					matrix[2][2] = 'X';
				} else if (player_1 == 'O') {
					matrix[2][2] = 'O';
				}
			}
		}

		if (player == 2) {
			if (value == 1) {
				if (player_2 == 'X') {
					matrix[0][0] = 'X';
				} else if (player_2 == 'O') {
					matrix[0][0] = 'O';
				}

			}

			if (value == 2) {
				if (player_2 == 'X') {
					matrix[0][1] = 'X';
				} else if (player_2 == 'O') {
					matrix[0][1] = 'O';
				}
			}

			if (value == 3) {
				if (player_2 == 'X') {
					matrix[0][2] = 'X';
				} else if (player_2 == 'O') {
					matrix[0][2] = 'O';
				}
			}

			if (value == 4) {
				if (player_2 == 'X') {
					matrix[1][0] = 'X';
				} else if (player_2 == 'O') {
					matrix[1][0] = 'O';
				}
			}

			if (value == 5) {
				if (player_2 == 'X') {
					matrix[1][1] = 'X';
				} else if (player_2 == 'O') {
					matrix[1][1] = 'O';
				}
			}

			if (value == 6) {
				if (player_2 == 'X') {
					matrix[1][2] = 'X';
				} else if (player_2 == 'O') {
					matrix[1][2] = 'O';
				}
			}

			if (value == 7) {
				if (player_2 == 'X') {
					matrix[2][0] = 'X';
				} else if (player_2 == 'O') {
					matrix[2][0] = 'O';
				}
			}

			if (value == 8) {
				if (player_2 == 'X') {
					matrix[2][1] = 'X';
				} else if (player_2 == 'O') {
					matrix[2][1] = 'O';
				}
			}

			if (value == 9) {
				if (player_2 == 'X') {
					matrix[2][2] = 'X';
				} else if (player_2 == 'O') {
					matrix[2][2] = 'O';
				}
			}
		}
	} else if (gamer == 2){
		if (player == 2) {
			if (value == 1) {
				if (player_1 == 'X') {
					matrix[0][0] = 'X';
				} else if (player_1 == 'O') {
					matrix[0][0] = 'O';
				}

			}

			if (value == 2) {
				if (player_1 == 'X') {
					matrix[0][1] = 'X';
				} else if (player_1 == 'O') {
					matrix[0][1] = 'O';
				}
			}

			if (value == 3) {
				if (player_1 == 'X') {
					matrix[0][2] = 'X';
				} else if (player_1 == 'O') {
					matrix[0][2] = 'O';
				}
			}

			if (value == 4) {
				if (player_1 == 'X') {
					matrix[1][0] = 'X';
				} else if (player_1 == 'O') {
					matrix[1][0] = 'O';
				}
			}

			if (value == 5) {
				if (player_1 == 'X') {
					matrix[1][1] = 'X';
				} else if (player_1 == 'O') {
					matrix[1][1] = 'O';
				}
			}

			if (value == 6) {
				if (player_1 == 'X') {
					matrix[1][2] = 'X';
				} else if (player_1 == 'O') {
					matrix[1][2] = 'O';
				}
			}

			if (value == 7) {
				if (player_1 == 'X') {
					matrix[2][0] = 'X';
				} else if (player_1 == 'O') {
					matrix[2][0] = 'O';
				}
			}

			if (value == 8) {
				if (player_1 == 'X') {
					matrix[2][1] = 'X';
				} else if (player_1 == 'O') {
					matrix[2][1] = 'O';
				}
			}

			if (value == 9) {
				if (player_1 == 'X') {
					matrix[2][2] = 'X';
				} else if (player_1 == 'O') {
					matrix[2][2] = 'O';
				}
			}
		}
		if (player == 1) {
			if (value == 1) {
				if (player_2 == 'X') {
					matrix[0][0] = 'X';
				} else if (player_2 == 'O') {
					matrix[0][0] = 'O';
				}
			}

			if (value == 2) {
				if (player_2 == 'X') {
					matrix[0][1] = 'X';
				} else if (player_2 == 'O') {
					matrix[0][1] = 'O';
				}
			}

			if (value == 3) {
				if (player_2 == 'X') {
					matrix[0][2] = 'X';
				} else if (player_2 == 'O') {
					matrix[0][2] = 'O';
				}
			}

			if (value == 4) {
				if (player_2 == 'X') {
					matrix[1][0] = 'X';
				} else if (player_2 == 'O') {
					matrix[1][0] = 'O';
				}
			}

			if (value == 5) {
				if (player_2 == 'X') {
					matrix[1][1] = 'X';
				} else if (player_2 == 'O') {
					matrix[1][1] = 'O';
				}
			}

			if (value == 6) {
				if (player_2 == 'X') {
					matrix[1][2] = 'X';
				} else if (player_2 == 'O') {
					matrix[1][2] = 'O'; 
				}
			}

			if (value == 7) {
				if (player_2 == 'X') {
					matrix[2][0] = 'X';
				} else if (player_2 == 'O') {
					matrix[2][0] = 'O';
				}
			}

			if (value == 8) {
				if (player_2 == 'X') {
					matrix[2][1] = 'X';
				} else if (player_2 == 'O') {
					matrix[2][1] = 'O';
				}
			}

			if (value == 9) {
				if (player_2 == 'X') {
					matrix[2][2] = 'X';
				} else if (player_2 == 'O') {
					matrix[2][2] = 'O';
				}
			}
		}
	}
}

int error(char *matrix[SIZE][SIZE], int value)
{
	int dead_heat = 0;
	int a;
	if (value == 1) {
		if ( (matrix[0][0] == 'X') || (matrix[0][0] == 'O' )){
			printf("Error!\nЭто поле уже занято. Попробуйте выбрать другое поле\n");
			dead_heat = 1;
		}
	}
	
	if (value == 2) {
		if ( (matrix[0][1] == 'X') || (matrix[0][1] == 'O') ){
			printf("Error!\nЭто поле уже занято. Попробуйте выбрать другое поле\n");
			dead_heat = 1;
		}
	}

	if (value == 3) {
		if ( (matrix[0][2] == 'X') || (matrix[0][2] == 'O') ){
			printf("Error!\nЭто поле уже занято. Попробуйте выбрать другое поле\n");
			dead_heat = 1;
		}
	}

	if (value == 4) {
		if ( (matrix[1][0] == 'X') || (matrix[1][0] == 'O') ){
			printf("Error!\nЭто поле уже занято. Попробуйте выбрать другое поле\n");
			dead_heat = 1;
		}
	}

	if (value == 5) {
		if ( (matrix[1][1] == 'X') || (matrix[1][1] == 'O') ){
			printf("Error!\nЭто поле уже занято. Попробуйте выбрать другое поле\n");
			dead_heat = 1;
		}
	}


	if (value == 6) {
		if ( (matrix[1][2] == 'X') || (matrix[1][2] == 'O') ){
			printf("Error!\nЭто поле уже занято. Попробуйте выбрать другое поле\n");
			dead_heat = 1;
		}
	}

	if (value == 7) {
		if ( (matrix[2][0] == 'X') || (matrix[2][0] == 'O') ){
			printf("Error!\nЭто поле уже занято. Попробуйте выбрать другое поле\n");
			dead_heat = 1;
		}
	}

	if (value == 8) {
		if ( (matrix[2][1] == 'X') || (matrix[2][1] == 'O') ){
			printf("Error!\nЭто поле уже занято. Попробуйте выбрать другое поле\n");
			dead_heat = 1;
		}
	}

	if (value == 9) {
		if ( (matrix[2][2] == 'X') || (matrix[2][2] == 'O') ){
			printf("Error!\nЭто поле уже занято. Попробуйте выбрать другое поле\n");
			dead_heat = 1; 
		}
	}

	if ((value < 1) || (value > 9)){
		printf("Ошибка ввода!\n");
		dead_heat = 1;	
	}
	return dead_heat;
}