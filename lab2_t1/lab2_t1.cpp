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

	Teacher* teacher4 = new Teacher();
	Teacher* teacher5 = new Teacher("Иванов");
	Teacher* teacher6 = new Teacher("Погребнеков", "Николай", "Михайлович");

	cout << "Лабораторная 9" << endl;
	cout << "" << endl;
	cout << "Конструкторы класса Учитель для статичечких объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	teacher1.DisplayInfo();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	teacher2.DisplayInfo();
	cout << "3) Конструктор с параметрами:" << endl;
	teacher3.DisplayInfo();
	cout << "" << endl;
	cout << "Конструкторы класса Учитель для динамических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	teacher4->DisplayInfo();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	teacher5->DisplayInfo();
	cout << "3) Конструктор с параметрами:" << endl;
	teacher6->DisplayInfo();
	cout << "\n\n" << endl;


	Lesson lesson1;
	Lesson lesson2("Обществознание");
	Lesson lesson3("Математика", teachers[2]);
	
	Lesson* lesson4 = new Lesson();
	Lesson* lesson5 = new Lesson("Английский язык");
	Lesson* lesson6 = new Lesson("Литература", teachers[1]);

	cout << "Конструкторы класса Урок для статичечких объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	lesson1.DisplayInfo();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	lesson2.DisplayInfo();
	cout << "3) Конструктор с параметрами:" << endl;
	lesson3.DisplayInfo();

	cout << "" << endl;
	cout << "Конструкторы класса Урок для динамических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	lesson4->DisplayInfo();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	lesson5->DisplayInfo();
	cout << "3) Конструктор с параметрами:" << endl;
	lesson6->DisplayInfo();
	cout << "\n\n" << endl;



	Mark markParamLess1, markParam1(3);
	Mark* markParamLess2 = new Mark(),* markParam2 = new Mark(4);
	cout << "" << endl;
	cout << "Конструкторы класса Оценка для статичечких объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	markParamLess1.DisplayInfo();
	cout << "2) Конструктор с 1-им параметром, он же с параметрами:" << endl;
	markParam1.DisplayInfo();

	cout << "" << endl;
	cout << "Конструкторы класса Оценка для динамических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	markParamLess2->DisplayInfo();
	cout << "2) Конструктор с 1-им параметром, он же с параметрами:" << endl;
	markParam2->DisplayInfo();
	cout << "\n\n" << endl;



	Student uchenik1, uchenik2("Герасимов"), uchenik3("Петров", "Владимир", "Анатольевич", marks2, 3, lessons, 3);
	Student* uchenik4 = new Student(),* uchenik5 = new Student("Сидоров"),* uchenik6 = new Student("Сидоров", "Николай", "Владимирович", marks1, 3, lessons, 3);
	cout << "" << endl;
	cout << "Конструкторы класса Ученик для статичечких объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	uchenik1.DisplayInfo();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	uchenik2.DisplayInfo();
	cout << "3) Конструктор с параметрами:" << endl;
	uchenik3.DisplayInfo();
	cout << "" << endl;
	cout << "Конструкторы класса Ученик для динамических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	uchenik4->DisplayInfo();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	uchenik5->DisplayInfo();
	cout << "3) Конструктор с параметрами:" << endl;
	uchenik6->DisplayInfo();
	cout << "\n\n" << endl;

	MyClass class1, class2("5А"), class3("2В", "2010", students, 3);
	MyClass* class4 = new MyClass(),* class5 = new MyClass("4Б"),* class6 = new MyClass("3Г", "2010", students, 3);
	cout << "" << endl;
	cout << "Конструкторы класса Мой Класс для статичечких объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	class1.DisplayInfo();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	class2.DisplayInfo();
	cout << "3) Конструктор с параметрами:" << endl;
	class3.DisplayInfo();

	cout << "" << endl;
	cout << "Конструкторы класса Мой Класс для динамических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	class4->DisplayInfo();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	class5->DisplayInfo();
	cout << "3) Конструктор с параметрами:" << endl;
	class6->DisplayInfo();
	cout << "\n\n" << endl;

	Teacher teacherArr[3];
	for (j = 0; j < 3; j++)
		teacherArr[j] = Teacher("Иванов" + to_string(j + 1));
	cout << ("Инициализировать небольшой массив конструктором с одним параметром:") <<  endl;
	for (j = 0; j < 3; j++)
		teacherArr[j].DisplayInfo();
	cout << ("\n\n") << endl;





	cout << ("Продемонстрировать различие между мелким и глубоким копированием:") << endl;

	Student masStud[2];
	masStud[0] = Student(uchenik3);
	masStud[1] = Student(*uchenik6);

	Lesson lessTestCopy1 = Lesson("Математика", teacher3), lessTestCopy2 = Lesson("Обществознание", *teacher6);

	MyClass myclassTestCopy1 = MyClass("1A", "2010", students, 3), myclassTestCopy2 = MyClass("2В", "2011", students, 3);
	
	
	cout << ("") << endl;
	lessTestCopy1 = lessTestCopy2;

	cout << ("Поверхностная копия 1-го объекта во 2-ой для класса \'УРОК\':") << endl;
	cout << ("") << endl;
	lessTestCopy1.DisplayInfo();
	cout << ("") << endl;
	lessTestCopy2.DisplayInfo();
	cout << ("") << endl;
	cout << ("Изменение 1-го объекта, а 2-ой не трогается:") << endl;
	lessTestCopy1.Set("Биология", teachers[0]);
	cout << ("") << endl;
	lessTestCopy1.DisplayInfo();
	cout << ("") << endl;
	lessTestCopy2.DisplayInfo();
	cout << ("") << endl;


	myclassTestCopy1.Set("4В", "2013", masStud, 2);
	myclassTestCopy2 = myclassTestCopy1;

	cout << ("Глубокая копия 1-го объекта во 2-ой для класса \'МОЙ КЛАСС\' с помощью перегрузки оператора \'=\':") << endl;
	cout << ("") << endl;
	myclassTestCopy1.DisplayInfo();
	cout << ("") << endl;
	myclassTestCopy2.DisplayInfo();
	cout << ("") << endl;
	cout << ("Изменение 1-го объекта, а 2-ой не трогается:") << endl;
	myclassTestCopy1.Set("1A", "2010", students, 3);
	cout << ("") << endl;
	myclassTestCopy1.DisplayInfo();
	cout << ("") << endl;
	myclassTestCopy2.DisplayInfo();
	cout << ("\n\n") << endl;
}

