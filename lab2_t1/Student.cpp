#include "Student.h"

// Конструктор
Student::Student()
{
    Fam = "";
    Name = "";
    Otch = "";
    Lesson L;
    Mark M;
    L.NullLess();
    M.SetMark(0);
    N = 0;
    for (int i = 0; i < 20; i++)
    {
        Lessons[i] = L;
    }

    for (int i = 0; i < 20; i++)
    {
        Marks[i] = M;
    }
}

// Очищение всех полей структуры Ученик (Student)
void Student::NullStud()
{

    Fam = "";
    Name = "";
    Otch = "";
    Lesson L;
    Mark M;
    L.NullLess();
    M.SetMark(0);
    this->N = 0;
    for (int i = 0; i < 20; i++)
    {
        Lessons[i] = L;
    }

    for (int i = 0; i < 20; i++)
    {
        Marks[i] = M;
    }
}


// Функции получения значений полей
string Student::GetFam()
{
    return this->Fam;
}

string Student::GetName()
{
    return this->Name;
}

string Student::GetOtch()
{
    return this->Otch;
}

Mark Student::GetMarkI(int i)
{
    Mark m;
    if (i < 20 && i > -1)
        m = Marks[i];
    
    return m;
}

Lesson Student::GetLessI(int i)
{
    Lesson l;
    if (i < 20 && i > -1)
        l = Lessons[i];

    return l;
}



// Инициализация структуры Ученик
void Student::SetStud(string Fam, string Name, string Otch, Mark mas_m[], int LenMark, Lesson mas_l[], int LenLess)
{
    this->Fam = Fam;
    this->Name = Name;
    this->Otch = Otch;
    
    this->N = 0;
    
    int i = 0;
    for ( i = 0; i < LenLess && i < 20; i++)
    {
        Lessons[i] = mas_l[i];
        this->N++;
    }

    for (int i = 0; i < LenMark && i < 20; i++)
    {
        Marks[i] = mas_m[i];
    }
}

// Ввод ФИО ученика в структуру
void Student::InpStudFIO()
{
    cout << "Введите Фамилию ученика: ";
    cin >> Fam;
    cout << "Введите Имя ученика: ";
    cin >> Name;
    cout << "Введите Отчество ученика: ";
    cin >> Otch;
}

// Добавление к ученику урока
// 0 - не удачно, 1 - удачно
bool Student::AddLessToStud(Lesson ls)
{
    bool fl = false;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (Lessons[i].GetName() == "")
        {
            Lessons[i] = ls;
            fl = true;
        }
    }

    return fl;
}

// Добавление к ученику урока и оценки
// 0 - не удачно, 1 - удачно
bool Student::AddLMtoStud(Lesson ls, Mark m)
{
    bool fl = false;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (Lessons[i].GetName() == "")
        {
            Lessons[i] = ls;
            Marks[i] = m;
            fl = true;
        }
    }

    return fl;
}

// Добавление к ученику оценки к конкретному предмету
// 0 - не удачно, 1 - удачно
bool Student::AddMarkToStud(Lesson ls, Mark m)
{
    bool fl = false;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (Lessons[i].GetName() == ls.GetName())
        {
            if (Lessons[i].GetTeach().GetFam() == ls.GetTeach().GetFam())
            {
                if (Lessons[i].GetTeach().GetName() == ls.GetTeach().GetName())
                {
                    if (Lessons[i].GetTeach().GetOtch() == ls.GetTeach().GetOtch())
                    {
                        Marks[i] = m;
                        fl = true;
                    }
                }
            }
        }
    }

    return fl;
}

// Вывод ученика
// Передаем ученика и флаг для различного вывода уроков и оценок
// fl_out (0 или 1)
void Student::DispStud()
{
    cout << "ФИО ученика: " << Fam << " " << Name << " " << Otch << endl;

    cout << "Уроки:" << endl;
    int i = 0;
    while (Lessons[i].GetName() != "")
    {
        cout << " * " << Lessons[i].GetName() << " * " << Marks[i].GetMark() << " * " << endl;
        i++;
    }
}




// Вывод ученика с всеми предметами, даже пустыми
void Student::DispFullStud()
{
    cout << "ФИО ученика: " << Fam << " " << Name << " " << Otch << endl;


    cout << "Уроки:" << endl;
    for (int i = 0; i < 20; i++)
    {
        Lessons[i].out_Less();
    }
    cout << "Оценки:" << endl;
    for (int i = 0; i < 20; i++)
    {
        Marks[i];
    }
}

// Деструктор
Student::~Student()
{
    ;
}