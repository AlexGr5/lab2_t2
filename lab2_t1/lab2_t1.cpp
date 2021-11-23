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

	Teacher teacher1;
	Teacher teacher2("Погребнеков");
	Teacher teacher3("Баянова", "Людмила", "Анатольевна");

	cout << "Лабораторная 9" << endl;
	cout << "" << endl;
	cout << "Конструкторы класса Учитель:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	teacher1.DisplayInfo();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	teacher2.DisplayInfo();
	cout << "3) Конструктор с параметрами:" << endl;
	teacher3.DisplayInfo();
	cout << "\n\n" << endl;


	Lesson lesson1;
	Lesson lesson2("Обществознание");
	Lesson lesson3("Математика", teachers[2]);

	cout << "Конструкторы класса Урок:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	lesson1.DisplayInfo();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	lesson2.DisplayInfo();
	cout << "3) Конструктор с параметрами:" << endl;
	lesson3.DisplayInfo();
	cout << "\n\n" << endl;



	Mark markParamLess, markParam(3);

	cout << "Конструкторы класса Оценка:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	markParamLess.DisplayValue();
	cout << "2) Конструктор с 1-им параметром, он же с параметрами:" << endl;
	markParam.DisplayValue();
	cout << "\n\n" << endl;



	Student uchenik1, uchenik2("Герасимов"), uchenik3("Герасимов", "Владимир", "Анатольевич", marks2, 3, lessons, 3);
	cout << "Конструкторы класса Ученик:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	uchenik1.DisplayShortInfo();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	uchenik2.DisplayShortInfo();
	cout << "3) Конструктор с параметрами:" << endl;
	uchenik3.DisplayShortInfo();
	cout << "\n\n" << endl;

	MyClass class1, class2("5А"), class3("2В", "2010", students, 3);
	cout << "Конструкторы класса Мой Класс:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	class1.DisplayShortInfo();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	class2.DisplayShortInfo();
	cout << "3) Конструктор с параметрами:" << endl;
	class3.DisplayShortInfo();
	cout << "\n\n" << endl;
}

