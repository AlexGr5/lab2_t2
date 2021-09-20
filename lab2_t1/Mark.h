#pragma once

#include "Teacher.h"

// Структура Оценка
struct Mark
{
    int Value;              // Оценка
};

// Инициализация структуры Оценка
void init_m(Mark& m);

// Ввод данных в структуру Оценка
int inp_Mark(Mark& m);

// Вывод данных из структуры
int out_Mark(Mark& m);