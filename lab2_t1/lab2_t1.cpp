// lab2_t1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Class.h"

// Инициализация статическоко компанента (указателя):
//Mark* Mark::lastMark = NULL;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	
	Mark<int> MarksInt[5];
	Mark<double> MarksDouble[5];

	for (int i = 0; i < 5; i++)
	{
		MarksInt[i] = (i);
		MarksDouble[i] = ((i + 0.5));
	}

	cout << ("Массив Оценок с целым значением\n") << endl;
	for (int i = 0; i < 5; i++)
		MarksInt[i].DisplayInfo();

	cout << ("\nМассив Оценок с нецелым значением\n") << endl;
	for (int i = 0; i < 5; i++)
		MarksDouble[i].DisplayInfo();
}

