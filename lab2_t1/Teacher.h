#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

// Структура Учитель
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
    string get_t_F();
    string get_t_N();
    string get_t_O();

    // Деструктор
    ~Teacher();

    // Инициализация структуры Учитель
    void set_t(string Fam, string Name, string Otch);

    // Получение данных
    Teacher get_t();

    // Ввод учителя
    void inp_Teach();

    // Ввод учителя
    void out_Teach();

    // Расширение динамического массива
    Teacher* Exten_mas(Teacher* &old_mas, int len, int difference);
};

