#pragma once

#include "Student.h"

// Класс Класс
class MyClass
{
private:
    string className = "";          // Название класса
    string yearOfStudy = "";        // Год обучения
    int contStuds = 0;              // Текущее кол-во учеников
    Student students[32];           // Массив учеников

public:
    
    // Конструктор
    MyClass();

    // Конструктор с одним параметром
    MyClass(string ClassName);

    // Конструктор с параметрами
    MyClass(string Name, string Year, Student mas[], int LenStud);

    // Деструктор
    ~MyClass();

    // Очищение полей структуры Класс
    void Null();

    // Установка Названия
    void SetName(string Name);

    // Установка Года
    void SetYear(string Year);

    // Установка учеников
    void SetStuds(Student mas[], int LenStud);

    // Инициализация структуры Класс
    void Set(string Name, string Year, Student mas[], int LenStud);

    // Функции получения значений полей
    string GetName();
    string GetYear();

    // Ввод данных в структуру Класс
    void InpNameYear();

    // Добавление к классу ученика
    bool AddStud(Student st);

    // Выод данных из структуры Класс
    void DisplayShortInfo();

    // Выод всех данных из структуры Класс
    void DispFullInfo();

    // Функция по нахождению лучших учеников в классе
    bool BestStud();

    // Функция по нахождению худших учеников в классе
    bool BedStud();

};
