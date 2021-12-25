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

	Teacher teach1, teach2("Погребнеков", "Николай", "Михайлович");

	teach1.Set("Иванова", "Марина", "Витальевна");
	//teach1.InpFIO();
	cout << teach1 << endl;
	cout << teach2 << endl;
	//teach1.DisplayInfo();
	//teach2.DisplayInfo();

	Student stud1;
	stud1.SetFam("Герасимов");
	stud1.SetName("Николай");
	stud1.SetOtch("Александрович");

	cout << teach1.WhoIs() << endl;
	cout << stud1.WhoIs() << endl;

}

