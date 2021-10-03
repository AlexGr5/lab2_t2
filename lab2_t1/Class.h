#pragma once

#include "Student.h"

// Класс Класс
class MyClass
{
private:
    string Name = "";       // Название класса
    string Year = "";       // Год обучения
    int N = 0;              // Текущее кол-во учеников
    Student Students[32];   // Массив учеников

public:
    
    // Конструктор
    MyClass();

    // Деструктор
    ~MyClass();

    // Очищение полей структуры Класс
    void NullMyClass();

    // Инициализация структуры Класс
    void SetMyClass(string Name, string Year, Student mas[], int LenStud);

    // Функции получения значений полей
    string GetName();
    string GetYear();

    // Ввод данных в структуру Класс
    void InpNameYearMyClass();

    // Добавление к классу ученика
    bool AddStudToMyClass(Student st);

    // Выод данных из структуры Класс
    void DispMyClass();

    // Выод всех данных из структуры Класс
    void DispFullMyClass();

    // Функция по нахождению лучших учеников в классе
    bool BestStudInMyClass();

    // Функция по нахождению худших учеников в классе
    bool BedStudInMyClass();

};
