#include "Mark.h"

// Конструктор
Mark::Mark()
{
    value = 0;
}

// Конструктор
Mark::Mark(int value)
{
    this->value = value;
}

// Инициализация структуры Оценка
void Mark::Set(int v)
{
    value = v;
}

// Получение оценки
int Mark::Get()
{
    return this->value;
}

// Получение оценки через указатель
void Mark::GetPoint(int* Value)
{
    *Value = value;
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
void Mark::DisplayInfo()
{
    cout << "Оценка: " << value << endl;

}


// Добавление элемента в конец списка
void Mark::Add(void)
{
    if (lastMark == NULL)
        this->prev = NULL;
    else 
    { 
        lastMark->next = this;
        prev = lastMark;
    }
    lastMark = this;
    this->next = NULL;
}

// Вывод на дисплей содержимого списка
void Mark::reprint(void)
{
    Mark* uk;   // Вспомогательный указатель
    uk = lastMark;
    if (uk == NULL) 
    { 
        cout << "Список пуст!"; 
        return;
    }
    else 
        cout << "\nСодержимое списка:\n";

    // Цикл печати в обратном порядке значений элементов списка:
    while (uk != NULL)
    {
        cout << uk->value << '\t';
        uk = uk->prev;
    }
}

// Создание нового списка
void Mark::NewList()
{
    lastMark = NULL;
}

// Деструктор
Mark::~Mark()
{
    ;
}

// Выполняем Mark + int
Mark operator+(const Mark& mark, int value)
{
    if (mark.value + value > 5)
        return mark;
    else
        return Mark(mark.value + value);
}

// Перегрузка префиксного оператора '++'
Mark& Mark::operator++()
{
    value += 1;
    return *this;
}

// Перегрузка постфиксного оператора '++'
Mark Mark::operator++ (int)
{
    Mark m1 = *this;
    ++* this;
    return m1;
}

// Поверхностная копия
//Mark Mark::ShallowCopy()
//{
//    return *this;
//}

// Глубокая копия
//Mark Mark::DeepCopy()
//{
//    Mark other = this->Get();
//    other.Set(value);
//    return other;
//}