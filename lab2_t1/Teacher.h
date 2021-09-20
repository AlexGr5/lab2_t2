#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

// Структура Учитель
struct Teacher
{
    string Fam;             // Фамилия
    string Name;            // Имя
    string Otch;            // Отчество
};

// Инициализация структуры Учитель
void init_t(Teacher& t);

// Ввод учителя, передаем адрес, где будет храниться информация
void inp_Teach(Teacher& t);

// Ввод учителя, передаем адрес, где будет храниться информация
void out_Teach(Teacher& t);