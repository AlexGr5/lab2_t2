#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

class Student;

// Класс Учитель
class Teacher
{
private:
    string fam = "";        // Фамилия
    string name = "";       // Имя
    string otch = "";       // Отчество

public:

    // Конструктор
    Teacher();

    // Фун-ии получения данных из полей
    string GetFam();
    string GetName();
    string GetOtch();

    // Фун-ии получения данных из полей через ссылку
    void GetFamLink(string &Fam);
    void GetNameLink(string &Name);
    void GetOtchLink(string &Otch);

    // Деструктор
    ~Teacher();

    // Инициализация структуры Учитель
    void Set(string Fam, string Name, string Otch);

    // Ввод учителя
    void InpFIO();

    // Ввод учителя на экран
    void DisplayInfo();

    // Дружественная функция обмена ФИО классов Teacher и Student
    friend void NameExchange(Teacher &teacher, Student &student);

    // Обработка строк
    void AdditionSapces();

};

