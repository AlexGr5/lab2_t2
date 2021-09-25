#pragma once

#include "Lesson.h"

// Структура Оценка
class Mark
{
private:
    int Value = 0;          // Оценка

public:

    // Конструктор
    Mark();

    // Деструктор
    ~Mark();

    // Инициализация структуры Оценка
    void set_m(int v);

    // Получение оценки
    int get_m();

    // Ввод данных в структуру Оценка
    void inp_Mark();

    // Фун-ия расширения динамического массива
    Mark* Extern_Mark(Mark* old_mas, int len, int dif);

    // Вывод данных из структуры
    void out_Mark();
};

