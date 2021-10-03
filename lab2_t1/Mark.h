#pragma once

#include "Lesson.h"

// Класс Оценка
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
    void SetMark(int v);

    // Получение оценки
    int GetMark();

    // Ввод данных в структуру Оценка
    void InpMark();

    // Вывод данных из структуры
    void DispMark();
};

