#pragma once

#include "Lesson.h"

// Структура Оценка
struct Mark
{
    int Value = 0;          // Оценка
};

// Инициализация структуры Оценка
Mark init_m(int v);

// Ввод данных в структуру Оценка
Mark inp_Mark();

// Вывод данных из структуры
void out_Mark(Mark m);