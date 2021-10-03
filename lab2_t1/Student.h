#pragma once

#include "Mark.h"

// Класс Ученик
class Student
{
private:
    string Fam = "";            // Фамилия
    string Name = "";           // Имя
    string Otch = "";           // Отчество
    Mark Marks[20];             // Массив оценок
    Lesson Lessons[20];         // Массив уроков
    int N = 0;                  // Текущее кол-во уроков

public:

    // Конструктор
    Student();

    // Деструктор
    ~Student();

    // Функции получения значений полей
    string GetFam();
    string GetName();
    string GetOtch();

    // Возвращает оценку по индексу в массиве
    Mark GetMarkI(int i);

    // Возвращает урок по индексу в массиве
    Lesson GetLessI(int i);

    // Очищение всех полей структуры Ученик (Student)
   void NullStud();

    // Инициализация структуры Ученик
    void SetStud(string Fam, string Name, string Otch, Mark mas_m[], int LenMark, Lesson mas_l[], int LenLess);

    // Ввод ФИО ученика в структуру
    void InpStudFIO();

    // Добавление к ученику урока
    bool AddLessToStud(Lesson ls);

    // Добавление к ученику урока и оценки
    bool AddLMtoStud(Lesson ls, Mark m);

    // Добавление к ученику оценки к конкретному предмету
    bool AddMarkToStud(Lesson ls, Mark m);

    // Вывод ученика с предметами, которые у него есть
    void DispStud();

    // Вывод ученика с всеми предметами, даже пустыми
    void DispFullStud();

};
