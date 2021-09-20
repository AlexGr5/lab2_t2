#pragma once

#include "Lesson.h"

// Структура Оценка
struct Mark
{
    int Value;              // Оценка
};

// Инициализация структуры Оценка
void init_m(Mark& m);

// Ввод данных в структуру Оценка
void inp_Mark(Mark& m);

// Вывод данных из структуры
void out_Mark(Mark& m);