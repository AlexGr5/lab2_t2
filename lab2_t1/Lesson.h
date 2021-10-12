#pragma once

#include "Teacher.h"

// Класс Уроки
class Lesson
{
private:
    string nameLesson = "";       // Название предмета
    Teacher teacher;              // Учитель
public:

    // Конструктор
    Lesson();

    // Фун-ии получения данных из полей
    string GetNameLess();
    Teacher GetTeacher();

    // Деструктор
    ~Lesson();

    // Инициализация структуры Уроки
    void Set(string Name_Less, Teacher t);

    // Обнуление полей
    void Null();

    // Ввод названия урока
    void InpInConsol(Teacher t);

    // Вывод уроков
    void DisplayInfo();
};
