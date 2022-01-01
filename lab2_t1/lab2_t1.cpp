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

	const int maxSize = 5;
	Persone* arr[maxSize];


	cout << "Неотсортированные данные:\n" << endl;

	arr[0] = new Persone("Иванова", "Марина", "Дмитриевна");
	arr[1] = new Persone("Баянова", "Людмила", "Анатольевна");
	arr[2] = new Teacher("Погребников", "Николай", "Михайлович");
	arr[3] = new Persone("Синицына", "Лариса", "Анатольевна");
	arr[4] = new Teacher("Герасимов", "Владимир", "Петрович");

	for (int i = 0; i < 5; i++)
		arr[i]->DisplayInfo();

	sort(arr, arr + maxSize, [](Persone* p1, Persone* p2)
		{
			bool res = p1->GetFam() < p2->GetFam();
			return res;
		}
	);

	cout << "\n\nОтсортированные данные по фамилии:\n" << endl;

	for (int i = 0; i < 5; i++)
		arr[i]->DisplayInfo();

	string name = "";
	Persone personWithName;
	cout << "\n\nПоиск по имени: ";
	cin >> name;
	personWithName.SetName(name);

	
	Persone** p = find_if(arr, arr + maxSize, [&name](Persone* p1)
		{
			return p1->GetName() == name;
		}
	);
	
	if (p < arr + maxSize)
	{
		cout << "\nРезультат поиска:" << endl;
		(*p)->DisplayInfo();
	}
	else
	{
		cout << "\nТакого имени нет!" << endl;
	}
}

