#include "Class.h"

// Конструктор
Class_::Class_()
{
    Name = "";
    year = "";
    i = 0;
    Student S;
    S.null_s();
    for (int i = 0; i < 32; i++)
    {
        mas_Stud[i] = S;
    }
}

// Очищение полей структуры Класс
void Class_::null_c()
{
    Name = "";
    year = "";
    i = 0;
    Student S;
    S.null_s();
    for (int i = 0; i < 32; i++)
    {
        mas_Stud[i] = S;
    }
}

// Инициализация структуры Класс
void Class_::set_c(string Name, string Year, Student* mas[32])
{
    Name = Name;
    year = Year;
    i = 0;
    Student S;
    S.null_s();
    for (int i = 0; i < 32; i++)
    {
        mas_Stud[i] = *mas[i];
    }
}


// Получение данных
Class_ Class_::get_c()
{
    return *this;
}

// Функции получения значений полей
string Class_::get_c_n()
{
    return Name;
}

string Class_::get_c_y()
{
    return year;
}

Student* Class_::get_c_s()
{
    return mas_Stud;
}


// Ввод данных в структуру Класс
void Class_::inp_Class_()
{
    cout << "Введите название класса: ";
    cin >> Name;
    cout << endl;
    cout << "Введите год обучения: ";
    cin >> year;
    cout << endl;
}

// Добавление к классу ченика
int Class_::add_St_to_Cl(Student st)
{
    int fl = 0;
    if (i < 20)
    {
        mas_Stud[i] = st;
        i++;
        fl = 1;
    }

    return fl;
}

// Вывод данных из структуры Класс
// fl_out (0 или 1)
void Class_::out_Class_(int fl_out)
{

    cout << "Название класса: " << Name << endl;;
    cout << "Год обучения: " << year << endl;
    cout << endl;
    cout << "Ученики:" << endl;

    if (fl_out == 0)
    {
        int i = 0;
        while (mas_Stud[i].get_s_F() != "")
        {
            mas_Stud[i].out_Stud(0);
            i++;
        }
    }
    else
    {
        int i = 0;
        while (mas_Stud[i].get_s_F() != "")
        {
            mas_Stud[i].out_Stud(1);
            i++;
        }
    }
}

// Функция по нахождению лучших учеников в классе
int Class_::Best_Stud_inClass()
{
    double mas_m[32];
    int exit = 0;

    for (int i = 0; i < 32; i++)
    {
        mas_m[i] = 0;
    }

    int i = 0;
    int k = 0;
    int sum = 0;
    while (mas_Stud[i].get_s_F() != "")
    {
        int j = 0;
        k = 0;
        sum = 0;
        while (mas_Stud[i].get_s_L()[j].get_l_N() != "")
        {
            sum += mas_Stud[i].get_s_M()[j].get_m();
            k++;
            j++;
        }
        mas_m[i] = double(sum) / k;
        i++;
    }

    if (i == 0)
        exit = -1;
    else
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
                mas_Stud[j].out_Stud(1);
        }
    }

    return exit;
}

// Функция по нахождению худших учеников в классе
int Class_::Bed_Stud_inClass()
{
    double mas_m[32];
    int exit = 0;

    for (int i = 0; i < 32; i++)
    {
        mas_m[i] = 0;
    }

    int i = 0;
    int k = 0;
    int sum = 0;
    while (mas_Stud[i].get_s_F() != "")
    {
        int j = 0;
        k = 0;
        sum = 0;
        while (mas_Stud[i].get_s_L()[j].get_l_N() != "")
        {
            sum += mas_Stud[i].get_s_M()[j].get_m();
            k++;
            j++;
        }
        mas_m[i] = double(sum) / k;
        i++;
    }

    if (i == 0)
        exit = -1;
    else
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
                mas_Stud[j].out_Stud(1);
        }
    }

    return exit;
}

// Расширение динамического массива
Class_* Class_::Exten_Stud(Class_* old_mas, int len, int difference)
{
    Class_* point;
    if (len > 0)
    {
        if (difference > 0)
        {
            Class_* new_mas = new Class_[len + difference];

            for (int i = 0; i < (len); i++)
            {
                *new_mas = *old_mas;
            }

            delete[] old_mas;

            point = new_mas;
        }
        else
            point = old_mas;
    }
    else
        point = old_mas;

    return point;
}

// Деструктор
Class_::~Class_()
{
    delete this;
}