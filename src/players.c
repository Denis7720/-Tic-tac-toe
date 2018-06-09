#include "players.h"

int who_first(char *name_1, char *name_2)
{
	char q;
	scanf("%c", &q);

	int NAME1 = 0, NAME2 = 0;
	
	srand(time(NULL));
	while (NAME1 == NAME2) {
		NAME1 = rand()%5+1;
		NAME2 = rand()%5+1;
	}

	printf("\n");

	printf("У игрока %s выпало %d \n", name_1, NAME1);
	printf("У игрока %s выпало %d \n", name_2, NAME2);

	printf("\n");

	if (NAME1 > NAME2){
		int gamer = 1;
		printf("Игрок %s ходит первым.\n", name_1);
		printf("\n");
		return gamer;
	}

	if (NAME2 > NAME1){
		int gamer = 2;
		printf("Игрок %s ходит первым.\n", name_2);
		printf("\n");
		return gamer;	
	}
	return 0;
} 

int X_O(int gamer, char *name_1, char *name_2)
{
	char suit;
	if (gamer == 1){
		int yep = 0;
		do {
			printf("Игрок %s, выберете чем будете ходить (введите 'X' или 'O')\n", name_1);
			scanf("%c", &suit);
			if ((suit == 'X') || (suit == 'O')){
				yep = 1;
			} else {
				printf("Ошибка ввода!\n");
				getchar();
			}
		} while (yep != 1);

		if (suit == 'X') {
			char player_first = 'X';
			return player_first;

		} else if (suit == 'O') {
			char player_first = 'O';
			return player_first;
		}
	} else if (gamer == 2){
		int yep = 0;
		do {
			
			printf("Игрок %s, выберете чем будете ходить (введите 'X' или 'O')\n", name_2);
			scanf("%c", &suit);
			if ((suit == 'X') || (suit == 'O')){
				yep = 1;
			} else {
				printf("Ошибка ввода!\n");
				getchar();
			}

		} while (yep != 1);

		if (suit == 'X') {
			char player_first = 'X';
			return player_first;

		} else if (suit == 'O') {
			char player_first = 'O';
			return player_first;
		}
	}
	return 0;
}