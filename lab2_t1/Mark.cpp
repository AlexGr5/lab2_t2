#include "Mark.h"

// Инициализация структуры Оценка
Mark init_m(int v)
{
    Mark m;
    m.Value = v;

    return m;
}

// Ввод данных в структуру Оценка
Mark inp_Mark()
{
    Mark m;
    m = init_m(0);
    string mark;
    cout << "Введите оценку: ";
    cin >> mark;
    m.Value = stoi(mark);
    cout << endl;

    return m;
}

// Вывод данных из структуры
void out_Mark(Mark m)
{
    cout << "Оценка: " << m.Value << endl;

}