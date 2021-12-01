#include "Mark.h"

// Конструктор
Mark::Mark()
{
    value = 0;
}

// Конструктор с параметром
Mark::Mark(int value)
{
    this->value = 0;
    if (IsRightMark(value))
        this->value = value;
}

// Инициализация структуры Оценка
void Mark::Set(int v)
{
    this->value = 0;
    if (IsRightMark(v))
        this->value = v;
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

// Ввод данных в Класс Оценка
void Mark::InpMark()
{
    string mark;
    cout << "Введите оценку: ";
    cin >> mark;

    try                                                 // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch          
    {
        for (int i = 0; i < mark.length(); i++)
        {
            if ((mark[i]  < '0') || (mark[i] > '9'))
                throw "It string is not number!";       // выбрасывается исключение типа const char*
        }
        Set(stoi(mark));
    }
    catch (const char* exception)                       // обработчик исключений типа const char*
    {
        std::cerr << "Error: " << exception << '\n';
        //std::cerr << "Error: " << "It string is not number!" << '\n';
    }
    cout << endl;
}

// Вывод данных из класса
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

// Проверка числа на подходящее для оценки
bool Mark::IsRightMark(int mark)
{
    bool res = true;
    try                                     // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
    {
        if (mark < 1 || mark > 5)           // Если пользователь ввел неверное число, то выбрасывается исключение
            throw "Incorrect value.";       // выбрасывается исключение типа const char*
    }
    catch (const char* exception)           // обработчик исключений типа const char*
    {
        std::cerr << "Error: " << exception << '\n';
        res = false;
        return res;
    }

    return res;
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