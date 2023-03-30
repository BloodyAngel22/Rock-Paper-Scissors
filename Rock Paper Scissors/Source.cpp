#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
	system("chcp 1251");
	srand(time(NULL));
	printf("Игра 'камень, ножницы, бумага'\n");
	bool isRunnig = true;
	int scoreCharacter = 0, scoreBot = 0;
	while (isRunnig) {
		printf("Введите число\n1 - Камень\n2 - Ножницы\n3 - Бумага\n");
		int choice = 0;
		do {
			scanf_s("%d", &choice);
			if (choice < 1 or choice>3) printf("Введено неверное значение. попробуйте снова.\n");
		} while (choice < 1 or choice > 3);
		int BotChoice;
		BotChoice = rand() % 3 + 1;
		if (BotChoice == 1) printf("Бот выбрал камень\n");
		if (BotChoice == 2) printf("Бот выбрал ножницы\n");
		if (BotChoice == 3) printf("Бот выбрал бумагу\n");

		if (choice == 1 and BotChoice == 3) { printf("\n\tБот победил\n\n"); scoreBot++; }
		if (choice == 2 and BotChoice == 1) { printf("\n\tБот победил\n\n"); scoreBot++; }
		if (choice == 3 and BotChoice == 2) { printf("\n\tБот победил\n\n"); scoreBot++; }
		printf("Счет противника %d\n", scoreBot);
		if (choice == 3 and BotChoice == 1) { printf("\n\tВы победили\n\n"); scoreCharacter++; }
		if (choice == 1 and BotChoice == 2) { printf("\n\tВы победили\n\n"); scoreCharacter++; }
		if (choice == 2 and BotChoice == 3) { printf("\n\tВы победили\n\n"); scoreCharacter++; }
		printf("Ваш счет %d\n", scoreCharacter);
		if (choice == 1 and BotChoice == 1) printf("\n\tНичья\n\n");
		if (choice == 2 and BotChoice == 2) printf("\n\tНичья\n\n");
		if (choice == 3 and BotChoice == 3) printf("\n\tНичья\n\n");

		printf("Продолжить игру?\n1 - Да\n2 - Нет\n");
		int run;
		do {
			scanf_s("%d", &run);
			if (run > 2 or run < 1)printf("Было введено неверное значение\n");
		} while (run > 2 or run < 1);
		if (run == 2) isRunnig = 0;
		system("cls");
		printf("Ваш счет %d\n", scoreCharacter);
		printf("Счет противника %d\n", scoreBot);
	}
	printf("Конец игры\n");
}