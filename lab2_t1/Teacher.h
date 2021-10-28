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
    string fam = "";        // Фамилия
    string name = "";       // Имя
    string otch = "";       // Отчество

public:

    // Конструктор
    Teacher();

    // Фун-ии получения данных из полей
    string& GetFam();
    string& GetName();
    string& GetOtch();

    // Деструктор
    ~Teacher();

    // Инициализация структуры Учитель
    void Set(string Fam, string Name, string Otch);

    // Ввод учителя
    void InpFIO();

    // Ввод учителя на экран
    void DisplayInfo();

};

