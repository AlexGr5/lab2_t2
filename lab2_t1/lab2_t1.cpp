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



	
	Teacher teacher1("Иванова", "Марина", "Витальевна");
	//Persone persone1("Погребнеков", "Николай", "Михайлович");

	/*
	cout << "3) Продемонстрировать перегрузку метода базового" << endl;
	cout << "  класса в производном классе(с вызовом метода базового" << endl;
	cout << "  класса и без такого вызова)" << endl << endl;

	persone1.DisplayInfo();
	teacher1.DisplayInfo();
	cout << endl;
	persone1.SayHello();
	teacher1.SayHello();
	*/

	/*
	cout << "5) Выполнить перегрузку оператора присваивания объекту" << endl;
	cout << "производного класса объектов базового класса" << endl << endl;

	persone1.DisplayInfo();
	teacher1.DisplayInfo();

	cout << endl;

	teacher1 = persone1;

	persone1.DisplayInfo();
	teacher1.DisplayInfo();
	*/

	//cout << "6) Заменить методы Display используя операции << для C++" << endl << endl;
	//cout << teacher1 << endl;

	//cout << teach1 << endl;
	//teach1.DisplayInfo();

	/*
	Student stud1;
	stud1.SetFam("Герасимов");
	stud1.SetName("Николай");
	stud1.SetOtch("Александрович");

	cout << teacher1.WhoIs() << endl;
	cout << stud1.WhoIs() << endl;
	*/

	/*
	cout << "7) Придумать разумное использование виртуальных функций и создать их в вашем проекте." << endl << endl;

	persone1.DisplayInfo();
	teacher1.DisplayInfo();
	cout << endl;
	persone1.SayHello();
	teacher1.SayHello();

	Persone Person("Сидоров", "Анатолий", "Михайлович");
	Teacher Teach("Смирнов", "Владимир", "Васильевич");
	Persone* pPerson = &Teach;
	Teacher* pTeach = &Teach;
	Persone* pPerson2 = &Person;
	
	cout << "========================================================" << endl;
	cout << endl;
	cout << "Объект класса Учитель" << endl;
	Teach.DisplayInfo();
	cout << endl;
	cout << "Указатель класса Персона на класс Учитель" << endl;
	pPerson->DisplayInfo();
	cout << endl;
	cout << "Указатель класса Персона на класс Учитель" << endl;
	pPerson2->DisplayInfo();
	cout << endl;
	cout << "Вызов виртуальной функции через не виртуальную базового класса" << endl;
	cout << "от объекта класса Учитель" << endl;
	Teach.SayHello();
	cout << endl;
	cout << "Вызов виртуальной функции через не виртуальную базового класса" << endl;
	cout << "от объекта класса Персона" << endl;
	Person.SayHello();
	cout << endl;
	cout << "от указателя Персона на объект класса Учитель" << endl;
	cout << pPerson->WhoIs() << endl;
	cout << endl;
	cout << "от указателя Персона на объект класса Персона" << endl;
	cout << pPerson2->WhoIs() << endl;
	cout << endl;
	cout << "от указателя Учитель на объект класса Учитель" << endl;
	cout << pTeach->WhoIs() << endl;
	*/

	teacher1.InpFIO();
	cout << endl;
	teacher1.DisplayInfo();

}

