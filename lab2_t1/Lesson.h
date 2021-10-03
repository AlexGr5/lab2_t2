#pragma once

#include "Teacher.h"

// Класс Уроки
class Lesson
{
private:
    string Name = "";       // Название предмета
    Teacher Teach;          // Учитель
public:

    // Конструктор
    Lesson();

    // Фун-ии получения данных из полей
    string GetName();
    Teacher GetTeach();

    // Деструктор
    ~Lesson();

    // Инициализация структуры Уроки
    void SetLess(string Name_Less, Teacher t);

    // Обнуление полей
    void NullLess();

    // Ввод названия урока
    void InpLessName(Teacher t);

    // Вывод уроков
    void out_Less();
};
