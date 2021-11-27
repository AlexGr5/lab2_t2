#pragma once

#include "Mark.h"

// Класс Ученик
class Student
{
private:
    string fam = "";            // Фамилия
    string name = "";           // Имя
    string otch = "";           // Отчество
    Mark marks[20];             // Массив оценок
    Lesson lessons[20];         // Массив уроков
    int countLess = 0;          // Текущее кол-во уроков

public:

    // Конструктор
    Student();

    // Конструктор с одним параметром
    Student(string Fam);

    // Конструктор с параметрами
    Student(string Fam, string Name, string Otch, Mark mas_m[], int LenMark, Lesson mas_l[], int LenLess);

    // Деструктор
    ~Student();

    // Функции получения значений полей
    string GetFam();
    string GetName();
    string GetOtch();

    // Возвращает оценку по индексу в массиве
    Mark GetMarkByNumber(int i);

    // Возвращает урок по индексу в массиве
    Lesson GetLessByNumber(int i);

    // Очищение всех полей структуры Ученик (Student)
    void Null();

    // Установка фамилии
    void SetFam(string Fam);

    // Установка Имени
    void SetName(string Name);

    // Установка Отчества
    void SetOtch(string Otch);

    // Установка Оценок
    void SetMarks(Mark mas_m[], int LenMark);

    // Установка Уроков
    void SetLessons(Lesson mas_l[], int LenLess);

    // Инициализация структуры Ученик
    void Set(string Fam, string Name, string Otch, Mark mas_m[], int LenMark, Lesson mas_l[], int LenLess);

    // Ввод ФИО ученика в структуру
    void InpStudFIO();

    // Добавление к ученику урока
    bool AddLess(Lesson ls);

    // Добавление к ученику урока и оценки
    bool AddLessAndMark(Lesson ls, Mark m);

    // Добавление к ученику оценки к конкретному предмету
    bool AddMark(Lesson ls, Mark m);

    // Вывод ученика с предметами, которые у него есть
    void DisplayInfo();

    // Вывод ученика с всеми предметами, даже пустыми
    void DispFullInfo();

    // Дружественная функция обмена ФИО классов Teacher и Student
    friend void NameExchange(Teacher& teacher, Student& student);

};
