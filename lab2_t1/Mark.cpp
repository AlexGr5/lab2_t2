#include "Mark.h"

// Конструктор
Mark::Mark()
{
    value = 0;
}

// Инициализация структуры Оценка
void Mark::Set(int v)
{
    value = v;
}

// Получение оценки
int Mark::Get()
{
    return value;
}

// Ввод данных в структуру Оценка
void Mark::InpMark()
{
    string mark;
    cout << "Введите оценку: ";
    cin >> mark;
    value = stoi(mark);
    cout << endl;
}

// Вывод данных из структуры
void Mark::DisplayValue()
{
    cout << "Оценка: " << value << endl;

}

// Деструктор
Mark::~Mark()
{
    ;
}