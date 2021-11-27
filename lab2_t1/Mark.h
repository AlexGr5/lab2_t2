#pragma once

#include "Lesson.h"

// Класс Оценка
class Mark
{
private:
    int value = 0;          // Оценка


    static Mark* lastMark;  // Адрес последнего элемента списка
    Mark* prev;             // На предыдущий элемент списка
    Mark* next;             // На следующий элемент списка

public:

    // Конструктор
    Mark();

    // Конструктор
    Mark(int value);

    // Деструктор
    ~Mark();

    // Инициализация структуры Оценка
    void Set(int v);

    // Получение оценки
    int Get();

    // Получение оценки через указатель
    void GetPoint(int* Value);

    // Ввод данных в структуру Оценка
    void InpMark();

    // Вывод данных из структуры
    void DisplayInfo();

    // Добавление элемента в конец списка
    void Add(void);

    // Вывод на дисплей содержимого списка
    static void reprint(void);

    // Создание нового списка
    static void NewList();

    // Перегрузка оператора '+' (Mark + int)
    friend Mark operator+(const Mark& mark, int value);

    // Перегрузка префиксного оператора '++'
    Mark& operator++();

    // Перегрузка постфиксного оператора '++'
    Mark operator++ (int);

    // Поверхностная копия
    //Mark ShallowCopy();

    // Глубокая копия
    //Mark DeepCopy();

};

