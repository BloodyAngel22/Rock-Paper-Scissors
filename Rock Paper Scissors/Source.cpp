#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
	system("chcp 1251");
	srand(time(NULL));
	printf("���� '������, �������, ������'\n");
	bool isRunnig = true;
	int scoreCharacter = 0, scoreBot = 0;
	while (isRunnig) {
		printf("������� �����\n1 - ������\n2 - �������\n3 - ������\n");
		int choice = 0;
		do {
			scanf_s("%d", &choice);
			if (choice < 1 or choice>3) printf("������� �������� ��������. ���������� �����.\n");
		} while (choice < 1 or choice > 3);
		int BotChoice;
		BotChoice = rand() % 3 + 1;
		if (BotChoice == 1) printf("��� ������ ������\n");
		if (BotChoice == 2) printf("��� ������ �������\n");
		if (BotChoice == 3) printf("��� ������ ������\n");

		if (choice == 1 and BotChoice == 3) { printf("\n\t��� �������\n\n"); scoreBot++; }
		if (choice == 2 and BotChoice == 1) { printf("\n\t��� �������\n\n"); scoreBot++; }
		if (choice == 3 and BotChoice == 2) { printf("\n\t��� �������\n\n"); scoreBot++; }
		printf("���� ���������� %d\n", scoreBot);
		if (choice == 3 and BotChoice == 1) { printf("\n\t�� ��������\n\n"); scoreCharacter++; }
		if (choice == 1 and BotChoice == 2) { printf("\n\t�� ��������\n\n"); scoreCharacter++; }
		if (choice == 2 and BotChoice == 3) { printf("\n\t�� ��������\n\n"); scoreCharacter++; }
		printf("��� ���� %d\n", scoreCharacter);
		if (choice == 1 and BotChoice == 1) printf("\n\t�����\n\n");
		if (choice == 2 and BotChoice == 2) printf("\n\t�����\n\n");
		if (choice == 3 and BotChoice == 3) printf("\n\t�����\n\n");

		printf("���������� ����?\n1 - ��\n2 - ���\n");
		int run;
		do {
			scanf_s("%d", &run);
			if (run > 2 or run < 1)printf("���� ������� �������� ��������\n");
		} while (run > 2 or run < 1);
		if (run == 2) isRunnig = 0;
		system("cls");
		printf("��� ���� %d\n", scoreCharacter);
		printf("���� ���������� %d\n", scoreBot);
	}
	printf("����� ����\n");
}