#pragma once

#include "Mark.h"

// Структура Ученик
struct Student
{
    string Fam;             // Фамилия
    string Name;            // Имя
    string Otch;            // Отчество
    Mark mas_Marks[20];     // Массив оценок
    Lessons mas_Less[20];   // Массив уроков
    int i;                  // Текущее кол-во уроков
};

// Инициализация структуры Ученик
void init_s(Student& st);

// Ввод данных в структуру Ученик
int inp_Stud(Student& st, Mark* mas_m[20], Lessons* mas_l[20]);

// Ввод ФИО ученика в структуру
int inp_FIO_Stud(Student& st);