#include "Mark.h"

// Инициализация структуры Оценка
void init_m(Mark& m)
{
    m.Value = 0;
}

// Ввод данных в структуру Оценка
void inp_Mark(Mark& m)
{
    string mark;
    cout << "Введите оценку: ";
    cin >> mark;
    m.Value = stoi(mark);
    cout << endl;

}

// Вывод данных из структуры
void out_Mark(Mark& m)
{
    cout << "Оценка: " << m.Value << endl;

}