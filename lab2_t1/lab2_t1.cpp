// lab2_t1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Class.h"

// Инициализация статическоко компанента (указателя):
Mark* Mark::lastMark = NULL;

int main()
{
	//setlocale(LC_ALL, "Russian");
	//system("chcp 1251");
	//system("cls");

	Mark mark1[3], mark2[2][2];

	// Присваивание
	//=================================
	mark1[0] = 3;
	mark1[1] = 4;
	mark1[2] = 5;

	int base = 4;

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			mark2[i][j] = base + j;
	//=================================

	// Вывод
	//=================================
	cout << "Одномерный массив размером [3]" << endl;
	for (int i = 0; i < 3; i++)
		mark1[i].DisplayInfo();

	cout << endl;
	cout << "Двумерный массив размером [2][2]" << endl;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			mark2[i][j].DisplayInfo();
	//=================================

}

