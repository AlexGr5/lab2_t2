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
int* Mark::Get()
{
    return &this->value;
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

// Деструктор
Mark::~Mark()
{
    ;
}
