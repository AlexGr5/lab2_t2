#pragma once

#include "Lesson.h"

// Класс Оценка
class Mark
{
private:
    int value = 0;          // Оценка

public:

    // Конструктор
    Mark();

    // Деструктор
    ~Mark();

    // Инициализация структуры Оценка
    void Set(int v);

    // Получение оценки
    int Get();

    // Ввод данных в структуру Оценка
    void InpMark();

    // Вывод данных из структуры
    void DisplayValue();
};

