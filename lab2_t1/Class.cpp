#include "Class.h"

// Конструктор
MyClass::MyClass()
{
    Name = "";
    Year = "";
    N = 0;
    Student S;
    S.NullStud();
    for (int i = 0; i < 32; i++)
    {
        Students[i] = S;
    }
}

// Очищение полей структуры Класс
void MyClass::NullMyClass()
{
    Name = "";
    Year = "";
    N = 0;
    Student S;
    S.NullStud();
    for (int i = 0; i < 32; i++)
    {
        Students[i] = S;
    }
}

// Инициализация структуры Класс
void MyClass::SetMyClass(string Name, string Year, Student mas[], int LenStud)
{
    this->Name = Name;
    this->Year = Year;
    this->N = 0;
    Student S;
    S.NullStud();
    for (int i = 0; i < 32 && i < LenStud; i++)
    {
        Students[i] = mas[i];
    }
}


// Функции получения значений полей
string MyClass::GetName()
{
    return Name;
}

string MyClass::GetYear()
{
    return Year;
}



// Ввод данных в структуру Класс
void MyClass::InpNameYearMyClass()
{
    cout << "Введите название класса: ";
    cin >> Name;
    cout << endl;
    cout << "Введите год обучения: ";
    cin >> Year;
    cout << endl;
}

// Добавление к классу ченика
bool MyClass::AddStudToMyClass(Student st)
{
    bool fl = false;
    if (N < 20)
    {
        Students[N] = st;
        N++;
        fl = true;
    }

    return fl;
}

// Вывод данных из структуры Класс
// fl_out (0 или 1)
void MyClass::DispMyClass()
{

    cout << "Название класса: " << Name << endl;;
    cout << "Год обучения: " << Year << endl;
    cout << endl;
    cout << "Ученики:" << endl;

    int i = 0;
    while (Students[i].GetFam() != "")
    {
        Students[i].DispStud();
        i++;
    }

}

// Выод всех данных из структуры Класс
void MyClass::DispFullMyClass()
{
    cout << "Название класса: " << Name << endl;;
    cout << "Год обучения: " << Year << endl;
    cout << endl;
    cout << "Ученики:" << endl;

    int i = 0;
    while (Students[i].GetFam() != "")
    {
        Students[i].DispFullStud();
        i++;
    }
}

// Функция по нахождению лучших учеников в классе
bool MyClass::BestStudInMyClass()
{
    double mas_m[32];
    bool exit = false;

    for (int i = 0; i < 32; i++)
    {
        mas_m[i] = 0;
    }

    int i = 0;
    int k = 0;
    int sum = 0;
    while (Students[i].GetFam() != "")
    {
        int j = 0;
        k = 0;
        sum = 0;
        while (Students[i].GetLessI(j).GetName() != "")
        {
            sum += Students[i].GetMarkI(j).GetMark();
            k++;
            j++;
        }
        mas_m[i] = double(sum) / k;
        i++;
    }

    if (i > 0)
    {
        double maxM = 0;
        maxM = mas_m[0];
        for (int j = 0; j < i; j++)
        {
            if (maxM < mas_m[j])
                maxM = mas_m[j];
        }

        for (int j = 0; j < i; j++)
        {
            if (mas_m[j] == maxM)
                Students[j].DispStud();
        }

        exit = true;
    }

    return exit;
}

// Функция по нахождению худших учеников в классе
bool MyClass::BedStudInMyClass()
{
    double mas_m[32];
    bool exit = false;

    for (int i = 0; i < 32; i++)
    {
        mas_m[i] = 0;
    }

    int i = 0;
    int k = 0;
    int sum = 0;
    while (Students[i].GetFam() != "")
    {
        int j = 0;
        k = 0;
        sum = 0;
        while (Students[i].GetLessI(j).GetName() != "")
        {
            sum += Students[i].GetMarkI(j).GetMark();
            k++;
            j++;
        }
        mas_m[i] = double(sum) / k;
        i++;
    }

    if (i > 0)
    {
        double minM = 0;
        minM = mas_m[0];
        for (int j = 0; j < i; j++)
        {
            if (minM > mas_m[j])
                minM = mas_m[j];
        }

        for (int j = 0; j < i; j++)
        {
            if (mas_m[j] == minM)
                Students[j].DispStud();
        }
        exit = true;
    }

    return exit;
}

// Деструктор
MyClass::~MyClass()
{
    ;
}