#include "Class.h"

// Конструктор
MyClass::MyClass()
{
    className = "";
    yearOfStudy = "";
    countStuds = 0;
    //Student S;
    //S.Null();
    //for (int i = 0; i < 32; i++)
    //{
    //    students[i] = S;
    //}
}

// Конструктор с одним параметром
MyClass::MyClass(string ClassName)
{
    className = ClassName;
    yearOfStudy = "";
    countStuds = 0;
    //Student S;
    //S.Null();
    //for (int i = 0; i < 32; i++)
    //{
    //    students[i] = S;
    //}
}

// Конструктор с параметрами
MyClass::MyClass(string Name, string Year, Student mas[], int LenStud)
{
    this->className = Name;
    this->yearOfStudy = Year;
    this->countStuds = 0;
    for (int i = 0; i < 32 && i < LenStud; i++)
    {
        students[i] = mas[i];
        countStuds++;
    }
}

// Очищение полей структуры Класс
void MyClass::Null()
{
    className = "";
    yearOfStudy = "";
    countStuds = 0;
    Student S;
    S.Null();
    for (int i = 0; i < 32; i++)
    {
        students[i] = S;
    }
}

// Установка Названия
void MyClass::SetName(string Name)
{
    className = Name;
}

// Установка Года
void MyClass::SetYear(string Year)
{
    yearOfStudy = Year;
}

// Установка учеников
void MyClass::SetStuds(Student mas[], int LenStud)
{
    for (int i = 0; i < 32 && i < LenStud; i++)
    {
        students[i] = mas[i];
        countStuds++;
    }
}

// Инициализация структуры Класс
void MyClass::Set(string Name, string Year, Student mas[], int LenStud)
{
    this->className = Name;
    this->yearOfStudy = Year;
    this->countStuds = 0;
    for (int i = 0; i < 32 && i < LenStud; i++)
    {
        students[i] = mas[i];
        countStuds++;
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
    if (countStuds < 20)
    {
        students[countStuds] = st;
        countStuds++;
        fl = true;
    }

    return fl;
}

// Вывод данных из структуры Класс
// fl_out (0 или 1)
void MyClass::DisplayInfo()
{

    cout << "Название класса: " << className << endl;;
    cout << "Год обучения: " << yearOfStudy << endl;
    cout << endl;
    cout << "Ученики:" << endl;

    int i = 0;
    for (i = 0; i < countStuds; i++)
    {
        students[i].DisplayInfo();
    }

}

// Вывод всех данных из структуры Класс
void MyClass::DispFullInfo()
{
    cout << "Название класса: " << className << endl;;
    cout << "Год обучения: " << yearOfStudy << endl;
    cout << endl;
    cout << "Ученики:" << endl;

    int i = 0;
    for (i = 0; i < countStuds; i++)
    {
        students[i].DispFullInfo();
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
                students[j].DisplayInfo();
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
                students[j].DisplayInfo();
        }
        exit = true;
    }

    return exit;
}


// Констроктор копии
MyClass::MyClass(const MyClass& Class)
{
    // Поверхностное копирование, т.к. это не указатель
    className = Class.className;

    // Поверхностное копирование, т.к. это не указатель
    yearOfStudy = Class.yearOfStudy;

    // Поверхностное копирование, т.к. это не указатель
    countStuds = Class.countStuds;
    
    if (Class.countStuds > 0)
    {
        // Так как students - это массив, то выполним глубокое копирование
        for (int i = 0; i < Class.countStuds; i++)
        {
            students[i] = Class.students[i];
        }
    }

}

// Деструктор
MyClass::~MyClass()
{
    ;
}


// Перегрузка функции присваивания
MyClass& MyClass::operator=(const MyClass& Class)
{
    // Проверка на самоприсваивание
    if (this == &Class)
        return *this;

    // Сначала нам нужно очистить предыдущее значение m_data (члена неявного объекта)
    delete[] students;

    className = Class.className;

    yearOfStudy = Class.yearOfStudy;

    countStuds = Class.countStuds;

    // m_data является указателем, поэтому нам нужно выполнить глубокое копирование, при условии, что этот указатель не является нулевым
    if (Class.students)
    {
        // Выделяем память для нашей копии
        students = new Student[32];

        // Выполняем копирование
        for (int i = 0; i < Class.countStuds; ++i)
            students[i] = Class.students[i];
    }

    return *this;
}