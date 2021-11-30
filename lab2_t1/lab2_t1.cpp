// lab2_t1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Class.h"

// Инициализация статическоко компанента (указателя):
Mark* Mark::lastMark = NULL;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	Mark mark1;

	cout << "Лабораторная 10\n" << endl;
	cout << "Введите оценку - число в пределах от 1 до 5!\n" << endl;

	while (mark1.Get() == 0)
	{
		mark1.InpMark();
	}

	cout << "Введенная оценка: " << mark1.Get() << endl;
}

