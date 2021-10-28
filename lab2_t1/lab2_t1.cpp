﻿// lab2_t1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Class.h"

int main()
{
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
	cout << mark_p << endl;

}

