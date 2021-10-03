#include "Mark.h"

// Конструктор
Mark::Mark()
{
    Value = 0;
}

// Инициализация структуры Оценка
void Mark::SetMark(int v)
{
    Value = v;
}

// Получение оценки
int Mark::GetMark()
{
    return Value;
}

// Ввод данных в структуру Оценка
void Mark::InpMark()
{
    string mark;
    cout << "Введите оценку: ";
    cin >> mark;
    Value = stoi(mark);
    cout << endl;
}

// Вывод данных из структуры
void Mark::DispMark()
{
    cout << "Оценка: " << Value << endl;

}

// Деструктор
Mark::~Mark()
{
    ;
}