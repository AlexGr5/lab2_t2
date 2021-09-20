#pragma once

#include "Teacher.h"

// Структура Уроки
struct Lessons
{
    string Name;            // Название предмета
    Teacher Teach;          // Учитель
};

// Инициализация структуры Уроки
void init_l(Lessons& ls);

// Ввод уроков, передаем адрес, где будет храниться информация и адрес учителя
int inp_Less(Lessons& ls, Teacher& t);

// Вывод уроков, передаем адрес, где будет храниться информация
int out_Less(Lessons& ls);