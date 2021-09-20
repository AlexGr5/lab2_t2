#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

// Структура Учитель
struct Teacher
{
    string Fam = "";        // Фамилия
    string Name = "";       // Имя
    string Otch = "";       // Отчество
};

// Инициализация структуры Учитель
Teacher init_t(string Fam, string Name, string Otch);

// Ввод учителя, передаем адрес, где будет храниться информация
Teacher inp_Teach();

// Ввод учителя, передаем адрес, где будет храниться информация
void out_Teach(Teacher t);