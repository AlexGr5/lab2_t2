#pragma once

#include "Teacher.h"

// Структура Уроки
class Lessons
{
private:
    string Name = "";       // Название предмета
    Teacher Teach;          // Учитель
public:

    // Конструктор
    Lessons();

    // Деструктор
    ~Lessons();

    // Инициализация структуры Уроки
    void set_l(string Name_Less, Teacher t);

    // Получение данных
    Lessons get_l();

    // Ввод названия урока
    void inp_Less();

    // Вывод уроков
    void out_Less();
};
