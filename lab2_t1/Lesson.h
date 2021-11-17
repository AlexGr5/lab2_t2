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

    // Конструктор с одним параметром
    Lesson(string NameLesson);

    // Конструктор с параметрами
    Lesson(string Name_Less, Teacher Teacher1);

    // Фун-ии получения данных из полей
    string GetNameLess();
    Teacher GetTeacher();

    // Деструктор
    ~Lesson();

    // Инициализация класса Уроки
    void Set(string Name_Less, Teacher t);

    // Обнуление полей
    void Null();

    // Ввод названия урока
    void InpInConsol(Teacher t);

    // Вывод уроков
    void DisplayInfo();
};
