#include "Class.h"

// Конструктор
MyClass::MyClass()
{
    className = "";
    yearOfStudy = "";
    contStuds = 0;
    Student S;
    S.Null();
    for (int i = 0; i < 32; i++)
    {
        students[i] = S;
    }
}

// Очищение полей структуры Класс
void MyClass::Null()
{
    className = "";
    yearOfStudy = "";
    contStuds = 0;
    Student S;
    S.Null();
    for (int i = 0; i < 32; i++)
    {
        students[i] = S;
    }
}

// Инициализация структуры Класс
void MyClass::Set(string Name, string Year, Student mas[], int LenStud)
{
    this->className = Name;
    this->yearOfStudy = Year;
    this->contStuds = 0;
    Student S;
    S.Null();
    for (int i = 0; i < 32 && i < LenStud; i++)
    {
        students[i] = mas[i];
    }
}


// Функции получения значений полей
string MyClass::GetName()
{
    return className;
}

string MyClass::GetYear()
{
    return yearOfStudy;
}



// Ввод данных в структуру Класс
void MyClass::InpNameYear()
{
    cout << "Введите название класса: ";
    cin >> className;
    cout << endl;
    cout << "Введите год обучения: ";
    cin >> yearOfStudy;
    cout << endl;
}

// Добавление к классу ченика
bool MyClass::AddStud(Student st)
{
    bool fl = false;
    if (contStuds < 20)
    {
        students[contStuds] = st;
        contStuds++;
        fl = true;
    }

    return fl;
}

// Вывод данных из структуры Класс
// fl_out (0 или 1)
void MyClass::DisplayShortInfo()
{

    cout << "Название класса: " << className << endl;;
    cout << "Год обучения: " << yearOfStudy << endl;
    cout << endl;
    cout << "Ученики:" << endl;

    int i = 0;
    while (students[i].GetFam() != "")
    {
        students[i].DisplayShortInfo();
        i++;
    }

}

// Выод всех данных из структуры Класс
void MyClass::DispFullInfo()
{
    cout << "Название класса: " << className << endl;;
    cout << "Год обучения: " << yearOfStudy << endl;
    cout << endl;
    cout << "Ученики:" << endl;

    int i = 0;
    while (students[i].GetFam() != "")
    {
        students[i].DispFullInfo();
        i++;
    }
}

// Функция по нахождению лучших учеников в классе
bool MyClass::BestStud()
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
    while (students[i].GetFam() != "")
    {
        int j = 0;
        k = 0;
        sum = 0;
        while (students[i].GetLessByNumber(j).GetNameLess() != "")
        {
            sum += students[i].GetMarkByNumber(j).Get();
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
                students[j].DisplayShortInfo();
        }

        exit = true;
    }

    return exit;
}

// Функция по нахождению худших учеников в классе
bool MyClass::BedStud()
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
    while (students[i].GetFam() != "")
    {
        int j = 0;
        k = 0;
        sum = 0;
        while (students[i].GetLessByNumber(j).GetNameLess() != "")
        {
            sum += students[i].GetMarkByNumber(j).Get();
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
                students[j].DisplayShortInfo();
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