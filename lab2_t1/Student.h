#pragma once

#include "Mark.h"

// Структура Ученик
struct Student
{
private:
    string Fam = "";            // Фамилия
    string Name = "";           // Имя
    string Otch = "";           // Отчество
    Mark mas_Marks[20];         // Массив оценок
    Lessons mas_Less[20];       // Массив уроков
    int i = 0;                  // Текущее кол-во уроков

public:

    // Конструктор
    Student();

    // Деструктор
    ~Student();

    // Функция получения
    Student get_s();

    // Функции получения значений полей
    string get_s_F();
    string get_s_N();
    string get_s_O();
    Mark* get_s_M();
    Lessons* get_s_L();

    // Очищение всех полей структуры Ученик (Student)
   void null_s();

    // Инициализация структуры Ученик
    void set_s(string Fam, string Name, string Otch, Mark mas_m[20], Lessons mas_l[20]);

    // Ввод ФИО ученика в структуру
    void inp_FIO_Stud();

    // Добавление к ученику урока
    int add_Less_to_Stud(Lessons ls);

    // Добавление к ученику урока и оценки
    int add_LM_to_Stud(Lessons ls, Mark m);

    // Добавление к ученику оценки к конкретному предмету
    int add_Mark_to_Stud(Lessons ls, Mark m);

    // Вывод ученика
    // Передаем ученика и флаг для различного вывода уроков и оценок
    // fl_out (0 или 1)
    void out_Stud(int fl_out);

    // Расширение динамического массива
    Student* Exten_Stud(Student* old_mas, int len, int difference);
};
