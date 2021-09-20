#pragma once

#include "Teacher.h"

// Структура Уроки
struct Lessons
{
    string Name = "";       // Название предмета
    Teacher Teach;          // Учитель
};

// Инициализация структуры Уроки
Lessons init_l(string Name_Less);

// Ввод уроков, передаем адрес, где будет храниться информация и адрес учителя
Lessons inp_Less(Teacher t);

// Вывод уроков, передаем адрес, где будет храниться информация
void out_Less(Lessons ls);