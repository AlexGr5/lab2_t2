#include "Lesson.h"

// Инициализация структуры Уроки
void init_l(Lessons& ls)
{
    ls.Name = "";
    Teacher t;
    init_t(t);
    ls.Teach = t;
}

// Ввод уроков, передаем адрес, где будет храниться информация и адрес учителя
int inp_Less(Lessons& ls, Teacher& t)
{
    cout << "Введите название предмета: ";
    cin >> ls.Name;
    cout << endl;
    ls.Teach = t;

    return 0;
}

// Вывод уроков, передаем адрес, где будет храниться информация
int out_Less(Lessons& ls)
{
    cout << "Название предмета: " << ls.Name << endl;
    out_Teach(ls.Teach);

    return 0;
}