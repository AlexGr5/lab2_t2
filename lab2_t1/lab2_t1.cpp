﻿// lab2_t1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Class.h"

// Инициализация статическоко компанента (указателя):
Mark* Mark::lastMark = NULL;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	// Создание обЪектов классов
			//----------------------------------
	Teacher teachers[3];
	Lesson lessons[3];
	Mark marks1[3];
	Mark marks2[3];
	Mark marks3[3];
	Student students[3];
	MyClass classNum1;
	//----------------------------------

	// Инициализация полей объектов классов
	//---------------------------------------------------------------------------------
	int j = 0;

	teachers[0].Set("Иванова", "Марина", "Витальевна");
	teachers[1].Set("Погребнеков", "Николай", "Михайлович");
	teachers[2].Set("Баянова", "Людмила", "Анатольевна");

	lessons[0].Set("Химия", teachers[0]);
	lessons[1].Set("Обществознание", teachers[1]);
	lessons[2].Set("Математика", teachers[2]);

	marks1[0].Set(4);
	marks1[1].Set(4);
	marks1[2].Set(4);
	marks2[0].Set(5);
	marks2[1].Set(4);
	marks2[2].Set(5);
	marks3[0].Set(5);
	marks3[1].Set(5);
	marks3[2].Set(5);

	students[0].Set("Сидоров", "Антон", "Витальевич", marks1, 3, lessons, 3);
	students[1].Set("Герасимов", "Владимир", "Анатольевич", marks2, 3, lessons, 3);
	students[2].Set("Иванов", "Николай", "Львович", marks3, 3, lessons, 3);

	classNum1.Set("2В", "2010", students, 3);
	//----------------------------------------------------------------------------------

	int i = 0;

	// Вывод всех данных на экран:
	//----------------------------------------------------------------------------------

	cout << "Вывод всех учителей:" << endl;
	for (i = 0; i < 3; i++)
		teachers[i].DisplayInfo();

	cout << "\n\n";

	cout << "Вывод всех уроков:" << endl;
	for (i = 0; i < 3; i++)
		lessons[i].DisplayInfo();

	cout << "\n\n";

	cout << "Вывод всех учеников:" << endl;
	for (i = 0; i < 3; i++)
		students[i].DisplayShortInfo();

	cout << "\n\n";

	cout << "Вывод Класса учеников:" << endl;
	classNum1.DisplayShortInfo();

	//----------------------------------------------------------------------------------

	cout << "\n\n";

	// Лучшие и хучшие ученики в классе
	//----------------------------------------------------------------------------------
	cout << "*******Функция поиска лучших учеников в классе*********" << endl;
	cout << "Лучшие ученики класса №1:" << endl;
	classNum1.BestStud();
	cout << "***************************************************" << endl;

	cout << "\n\n" << endl;

	cout << "*******Функция поиска худших учеников в классе********" << endl;
	cout << "Худшие ученики класса №1:" << endl;
	classNum1.BedStud();
	cout << "***************************************************" << endl;
	//----------------------------------------------------------------------------------

	cout << "\n\n" << endl;
	cout << "\n\n" << endl;


	cout << "Лабораторная 7:" << endl;
	cout << "\n\n" << endl;
	cout << "1)" << endl;
	cout << "=================================================================" << endl;
	cout << "Тест возврата значения из метода класса Teacher через ссылку (&)" << endl;
	string& Fam = teachers[0].GetFam();
	string& Name = teachers[0].GetName();
	string& Otch = teachers[0].GetOtch();
	
	cout << Fam << endl;
	cout << Name << endl;
	cout << Otch << endl;

	cout << "\n" << endl;

	cout << "Тест возврата значения из метода класса Mark через указатель (*)" << endl;
	int* mark_p;
	mark_p = marks1[0].Get();
	cout << *mark_p << endl;

	cout << "\n\n" << endl;
	cout << "2)" << endl;
	cout << "=================================================================" << endl;
	cout << "Тест списка оценок с использованием указателя \'this\'" << endl;

	// Формирование объектов класса Mark:
	Mark A(1);
	Mark B(2);
	Mark C(3);
	Mark D(4);

	// Вызов статической компанентной функции:
	Mark::reprint();

	// Включение созданных компанентов в двусвязанный список:
	A.Add(); B.Add(); C.Add(); D.Add();

	// Печать в обратном порядке значений элементов списка:
	Mark::reprint();

	cout << "\n\n" << endl;
	cout << "3)" << endl;
	cout << "=================================================================" << endl;
	cout << "Дружественная функция обмена ФИО классов \n \'учитель\' Teacher и \'ученик\' Student:" << endl;
	teachers[0].DisplayInfo();
	cout << endl;
	students[0].DisplayShortInfo();
	cout << "Обмен ФИО:" << endl;
	NameExchange(teachers[0], students[0]);
	cout << endl;
	teachers[0].DisplayInfo();
	cout << endl;
	students[0].DisplayShortInfo();

	cout << "\n\n" << endl;
	cout << "4)" << endl;
	cout << "=================================================================" << endl;
	cout << "Перегрузка оператора \'+\' для класса \'оценка\' Mark" << endl;
	Mark markPoor(2);
	markPoor.DisplayValue();
	cout << "Прибавим к оценке выше 2 балла:" << endl;
	markPoor = markPoor + 2;
	markPoor.DisplayValue();
	cout << "\n" << endl;
	cout << "Перегрузка оператора \'++\' (два варианта, префиксный и постфиксный) \n для класса \'оценка\' Mark" << endl;
	markPoor.Set(2);
	markPoor.DisplayValue();
	cout << endl;
	cout << "Использование оператора \'++\' (префиксный):" << endl;
	++markPoor;
	markPoor.DisplayValue();
	cout << endl;
	cout << "Использование оператора \'++\' (постфиксный):" << endl;
	markPoor++;
	markPoor.DisplayValue();
	
	cout << "\n\n" << endl;
	cout << "5)" << endl;
	cout << "=================================================================" << endl;
	cout << "Заменить массивы char на std::string, продемонстрировать работу с этим классом" << endl;
	cout << "Тест ввода в переменную типа std::string на примере ввода учителя:" << endl;
	teachers[0].InpFIO();
	teachers[0].DisplayInfo();
}

