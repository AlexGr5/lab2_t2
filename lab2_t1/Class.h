#pragma once

#include "Student.h"

// Структура Класс
struct Class_
{
private:
    string Name = "";       // Название класса
    string year = "";       // Год обучения
    int i = 0;              // Текущее кол-во учеников
    Student mas_Stud[32];   // Массив учеников

public:
    
    // Конструктор
    Class_();

    // Деструктор
    ~Class_();

    // Очищение полей структуры Класс
    void null_c();

    // Инициализация структуры Класс
    void set_c(string Name, string Year, Student* mas[32]);

    // Получение данных
    Class_ get_c();

    // Функции получения значений полей
    string get_c_n();
    string get_c_y();
    Student* get_c_s();

    // Ввод данных в структуру Класс
    void inp_Class_();

    // Добавление к классу ученика
    int add_St_to_Cl(Student st);

    // Выод данных из структуры Класс
    // fl_out (0 или 1)
    void out_Class_(int fl_out);

    // Функция по нахождению лучших учеников в классе
    int Best_Stud_inClass();

    // Функция по нахождению худших учеников в классе
    int Bed_Stud_inClass();

    // Расширение динамического массива
    Class_* Exten_Stud(Class_* &old_mas, int len, int difference);
};
