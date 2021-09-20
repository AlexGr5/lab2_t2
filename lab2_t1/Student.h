#pragma once

#include "Mark.h"

// Структура Ученик
struct Student
{
    string Fam = "";        // Фамилия
    string Name = "";       // Имя
    string Otch = "";       // Отчество
    Mark mas_Marks[20];     // Массив оценок
    Lessons mas_Less[20];   // Массив уроков
    int i;                  // Текущее кол-во уроков
};

// Очищение всех полей структуры Ученик (Student)
Student null_s();

// Инициализация структуры Ученик
Student init_s(string Fam, string Name, string Otch, Mark mas_m[20], Lessons mas_l[20]);

// Ввод данных в структуру Ученик
//void inp_Stud(Student& st, Mark* mas_m[20], Lessons* mas_l[20]);

// Ввод ФИО ученика в структуру
Student inp_FIO_Stud();

// Добавление к ученику урока
int add_Less_to_Stud(Student& st, Lessons& ls);

// Добавление к ученику урока и оценки
int add_LM_to_Stud(Student& st, Lessons& ls, Mark& m);

// Добавление к ученику оценки к конкретному предмету
int add_Mark_to_Stud(Student& st, Lessons& ls, Mark& m);

// Вывод ученика
// Передаем ученика и флаг для различного вывода уроков и оценок
// fl_out (0 или 1)
void out_Stud(Student st, int fl_out);