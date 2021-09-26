#pragma once

#include "Teacher.h"

// Структура Уроки
class Lessons
{
private:
    string Name = "";       // Название предмета
    Teacher Teach;          // Учитель
public:

    // Конструктор
    Lessons();

    // Фун-ии получения данных из полей
    string get_l_N();
    Teacher get_l_T();

    // Деструктор
    ~Lessons();

    // Инициализация структуры Уроки
    void set_l(string Name_Less, Teacher t);

    // Получение данных
    Lessons get_l();

    // Обнуление полей
    void null_l();

    // Ввод названия урока
    void inp_Less(Teacher t);

    // Фун-ия расширения динамического массива
    Lessons* Extern_Less(Lessons* &old_mas, int len, int dif);

    // Вывод уроков
    void out_Less();
};
