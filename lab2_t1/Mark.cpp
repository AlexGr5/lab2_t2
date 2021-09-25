#include "Mark.h"

// Конструктор
Mark::Mark()
{
    Value = 0;
}

// Инициализация структуры Оценка
void Mark::set_m(int v)
{
    Value = v;
}

// Получение оценки
int Mark::get_m()
{
    return Value;
}

// Ввод данных в структуру Оценка
void Mark::inp_Mark()
{
    string mark;
    cout << "Введите оценку: ";
    cin >> mark;
    Value = stoi(mark);
    cout << endl;
}

// Вывод данных из структуры
void Mark::out_Mark()
{
    cout << "Оценка: " << Value << endl;

}

// Фун-ия расширения динамического массива
Mark* Mark::Extern_Mark(Mark* old_mas, int len, int dif)
{
    Mark* ls;
    if (len > 0)
    {
        if (dif > 0)
        {
            Mark* new_mas = new Mark[len + dif];

            for (int i = 0; i < (len); i++)
            {
                *new_mas = *old_mas;
            }

            delete[] old_mas;

            ls = new_mas;
        }
        else
            ls = old_mas;
    }
    else
        ls = old_mas;

    return ls;
}

// Деструктор
Mark::~Mark()
{
    delete this;
}