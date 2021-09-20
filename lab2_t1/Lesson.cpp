#include "Lesson.h"

// Инициализация структуры Уроки
Lessons init_l(string Name_Less)
{
    Lessons ls;
    ls.Name = Name_Less;
    Teacher t;
    t = init_t("", "", "");
    ls.Teach = t;

    return ls;
}

// Ввод уроков, передаем адрес, где будет храниться информация и адрес учителя
Lessons inp_Less(Teacher t)
{
    Lessons ls;
    ls = init_l("");
    cout << "Введите название предмета: ";
    cin >> ls.Name;
    cout << endl;
    ls.Teach = t;

    return ls;
}

// Вывод уроков, передаем адрес, где будет храниться информация
void out_Less(Lessons ls)
{
    cout << "Название предмета: " << ls.Name << endl;
    out_Teach(ls.Teach);
}