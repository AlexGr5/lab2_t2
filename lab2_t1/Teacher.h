#pragma once
#include "Persone.h"

//#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <locale.h>

//using namespace std;

class Student;

// Класс Учитель
class Teacher : public Persone
{
private:
    //string fam = "";        // Фамилия
    //string name = "";       // Имя
    //string otch = "";       // Отчество

public:

    // Конструктор
    Teacher();

    // Конструктор с параметрами
    Teacher(string Fam, string Name, string Otch);

    // Установить фамилию
    //void SetFam(string Fam);

    // Установить имя
    //void SetName(string Name);

    // Установить отчество
    //void SetOtch(string Otch);

    // Фун-ии получения данных из полей
    //string GetFam();
    //string GetName();
    //string GetOtch();

    // Фун-ии получения данных из полей через ссылку
    //void GetFamLink(string &Fam);
    //void GetNameLink(string &Name);
    //void GetOtchLink(string &Otch);

    // Деструктор
    ~Teacher();

    // Инициализация класса Учитель
    //void Set(string Fam, string Name, string Otch);

    // Ввод учителя
    /*virtual*/ void InpFIO()/* = 0*/;

    // Вывод учителя на экран
    void DisplayInfo();

    // Дружественная функция обмена ФИО классов Teacher и Student
    friend void NameExchange(Teacher &teacher, Student &student);

    // Обработка строк
    //void AdditionSapces();

    // Перегрузка оператора '=' (Teacher = Persone)
    Teacher& operator=(Persone &persone);

    // Расширение действий оператора <<
    friend std::ostream& operator<< (std::ostream& out, const Teacher& teaher);

    // Виртуальная функция вывода сообщения на екран, кем является человек (рабочим, учителем, учеником)
    virtual string WhoIs();

   

};

