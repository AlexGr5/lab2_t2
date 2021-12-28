#pragma once

#include "Lesson.h"

template <class T> // это шаблон класса с T вместо фактического (передаваемого) типа данных

// Класс Оценка
class Mark
{
private:
    //int value = 0;          // Оценка

    T value = 0;          // Оценка

    static Mark* lastMark;  // Адрес последнего элемента списка
    Mark* prev;             // На предыдущий элемент списка
    Mark* next;             // На следующий элемент списка

public:

    // Конструктор
    Mark()
    {
        value = 0;
    }

    // Конструктор с параметром
    Mark(T value)
    {
        this->value = 0;
        //if (IsRightMark(value))
            this->value = value;
    }

    // Инициализация структуры Оценка
    void Set(T v)
    {
        this->value = 0;
        //if (IsRightMark(v))
            this->value = v;
    }

    // Получение оценки
    T Get()
    {
        return this->value;
    }

    // Получение оценки через указатель
    void GetPoint(T* Value)
    {
        *Value = value;
    }

    // Ввод данных в Класс Оценка
    void InpMark()
    {
        string mark;
        cout << "Введите оценку: ";
        cin >> mark;

        try                                                 // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch          
        {
            for (int i = 0; i < mark.length(); i++)
            {
                if ((mark[i] < '0') || (mark[i] > '9'))
                    throw "It string is not number!";       // выбрасывается исключение типа const char*
            }
            Set(stof(T));
        }
        catch (const char* exception)                       // обработчик исключений типа const char*
        {
            std::cerr << "Error: " << exception << '\n';
            //std::cerr << "Error: " << "It string is not number!" << '\n';
        }
        cout << endl;
    }

    // Вывод данных из класса
    void DisplayInfo()
    {
        cout << "Оценка: " << value << endl;

    }


    // Добавление элемента в конец списка
    void Add(void)
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
    void reprint(void)
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
    void NewList()
    {
        lastMark = NULL;
    }

    // Деструктор
    ~Mark()
    {
        ;
    }

    /*
    // Выполняем Mark + int
    Mark operator+(const Mark& mark, T value)
    {
        if (mark.value + value > 5)
            return mark;
        else
            return Mark(mark.value + value);
    }

    // Перегрузка префиксного оператора '++'
    Mark& operator++()
    {
        value += 1;
        return *this;
    }

    // Перегрузка постфиксного оператора '++'
    Mark operator++ (int)
    {
        Mark m1 = *this;
        ++* this;
        return m1;
    }

    // Проверка числа на подходящее для оценки
    bool IsRightMark(int mark)
    {
        bool res = true;
        try                                     // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
        {
            if (mark < 0 || mark > 5)           // Если пользователь ввел неверное число, то выбрасывается исключение
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
    */

    // Поверхностная копия
    //Mark ShallowCopy();

    // Глубокая копия
    //Mark DeepCopy();

};

