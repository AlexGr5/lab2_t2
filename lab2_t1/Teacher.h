#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

// Класс Учитель
class Teacher
{
private:
    string Fam = "";        // Фамилия
    string Name = "";       // Имя
    string Otch = "";       // Отчество

public:

    // Конструктор
    Teacher();

    // Фун-ии получения данных из полей
    string GetFam();
    string GetName();
    string GetOtch();

    // Деструктор
    ~Teacher();

    // Инициализация структуры Учитель
    void SetTeach(string Fam, string Name, string Otch);

    // Ввод учителя
    void InpTeachFIO();

    // Ввод учителя на экран
    void DisplayTeach();

};

