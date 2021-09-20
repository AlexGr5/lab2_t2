#pragma once

#include "Student.h"

// Структура Класс
struct Class_
{
    string Name;            // Название класса
    string year;            // Год обучения
    int i;                  // Текущее кол-во учеников
    Student mas_Stud[32];   // Массив учеников
};

// Инициализация структуры Класс
void init_c(Class_& cl);

// Ввод данных в структуру Класс
void inp_Class_(Class_& cl/*, Student *mas[32]*/);

// Добавление к классу ченика
int add_St_to_Cl(Class_& cl, Student& st);

// Выод данных из структуры Класс
// fl_out (0 или 1)
void out_Class_(Class_& cl, int fl_out);

// Функция по нахождению лучших учеников в классе
int Best_Stud_inClass(Class_& cl);

// Функция по нахождению худших учеников в классе
int Bed_Stud_inClass(Class_& cl);