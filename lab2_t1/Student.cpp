#include "Student.h"

// Конструктор
Student::Student()
{
    fam = "";
    name = "";
    otch = "";
    Lesson L;
    Mark M;
    L.Null();
    M.Set(0);
    countLess = 0;
    for (int i = 0; i < 20; i++)
    {
        lessons[i] = L;
    }

    for (int i = 0; i < 20; i++)
    {
        marks[i] = M;
    }
}

// Конструктор с одним параметром
Student::Student(string Fam)
{
    fam = Fam;
    name = "";
    otch = "";
    Lesson L;
    Mark M;
    L.Null();
    M.Set(0);
    countLess = 0;
    for (int i = 0; i < 20; i++)
    {
        lessons[i] = L;
    }

    for (int i = 0; i < 20; i++)
    {
        marks[i] = M;
    }

}

// Конструктор с параметрами
Student::Student(string Fam, string Name, string Otch, Mark mas_m[], int LenMark, Lesson mas_l[], int LenLess)
{
    this->fam = Fam;
    this->name = Name;
    this->otch = Otch;

    this->countLess = 0;

    int i = 0;
    for (i = 0; i < LenLess && i < 20; i++)
    {
        lessons[i] = mas_l[i];
        this->countLess++;
    }

    for (int i = 0; i < LenMark && i < 20; i++)
    {
        marks[i] = mas_m[i];
    }
}

// Очищение всех полей структуры Ученик (Student)
void Student::Null()
{

    fam = "";
    name = "";
    otch = "";
    Lesson L;
    Mark M;
    L.Null();
    M.Set(0);
    this->countLess = 0;
    for (int i = 0; i < 20; i++)
    {
        lessons[i] = L;
    }

    for (int i = 0; i < 20; i++)
    {
        marks[i] = M;
    }
}


// Функции получения значений полей
string Student::GetFam()
{
    return this->fam;
}

string Student::GetName()
{
    return this->name;
}

string Student::GetOtch()
{
    return this->otch;
}

Mark Student::GetMarkByNumber(int i)
{
    Mark m;
    if (i < 20 && i > -1)
        m = marks[i];
    
    return m;
}

Lesson Student::GetLessByNumber(int i)
{
    Lesson l;
    if (i < 20 && i > -1)
        l = lessons[i];

    return l;
}



// Инициализация структуры Ученик
void Student::Set(string Fam, string Name, string Otch, Mark mas_m[], int LenMark, Lesson mas_l[], int LenLess)
{
    this->fam = Fam;
    this->name = Name;
    this->otch = Otch;
    
    this->countLess = 0;
    
    int i = 0;
    for ( i = 0; i < LenLess && i < 20; i++)
    {
        lessons[i] = mas_l[i];
        this->countLess++;
    }

    for (int i = 0; i < LenMark && i < 20; i++)
    {
        marks[i] = mas_m[i];
    }
}

// Ввод ФИО ученика в структуру
void Student::InpStudFIO()
{
    cout << "Введите Фамилию ученика: ";
    cin >> fam;
    cout << "Введите Имя ученика: ";
    cin >> name;
    cout << "Введите Отчество ученика: ";
    cin >> otch;
}

// Добавление к ученику урока
// 0 - не удачно, 1 - удачно
bool Student::AddLess(Lesson ls)
{
    bool fl = false;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (lessons[i].GetNameLess() == "")
        {
            lessons[i] = ls;
            fl = true;
        }
    }

    return fl;
}

// Добавление к ученику урока и оценки
// 0 - не удачно, 1 - удачно
bool Student::AddLessAndMark(Lesson ls, Mark m)
{
    bool fl = false;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (lessons[i].GetNameLess() == "")
        {
            lessons[i] = ls;
            marks[i] = m;
            fl = true;
        }
    }

    return fl;
}

// Добавление к ученику оценки к конкретному предмету
// 0 - не удачно, 1 - удачно
bool Student::AddMark(Lesson ls, Mark m)
{
    bool fl = false;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (lessons[i].GetNameLess() == ls.GetNameLess())
        {
            if (lessons[i].GetTeacher().GetFam() == ls.GetTeacher().GetFam())
            {
                if (lessons[i].GetTeacher().GetName() == ls.GetTeacher().GetName())
                {
                    if (lessons[i].GetTeacher().GetOtch() == ls.GetTeacher().GetOtch())
                    {
                        marks[i] = m;
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
void Student::DisplayShortInfo()
{
    cout << "ФИО ученика: " << fam << " " << name << " " << otch << endl;

    cout << "Уроки:" << endl;
    int i = 0;
    while (lessons[i].GetNameLess() != "")
    {
        cout << " * " << lessons[i].GetNameLess() << " * " << marks[i].Get() << " * " << endl;
        i++;
    }
}




// Вывод ученика с всеми предметами, даже пустыми
void Student::DispFullInfo()
{
    cout << "ФИО ученика: " << fam << " " << name << " " << otch << endl;


    cout << "Уроки:" << endl;
    for (int i = 0; i < 20; i++)
    {
        lessons[i].DisplayInfo();
    }
    cout << "Оценки:" << endl;
    for (int i = 0; i < 20; i++)
    {
        marks[i].DisplayValue();
    }
}

// Деструктор
Student::~Student()
{
    ;
}

// Дружественная функция обмена ФИО классов Teacher и Student
void NameExchange(Teacher& teacher, Student& student)
{
    string fam, name, otch;

    fam = teacher.fam;
    teacher.fam = student.fam;
    student.fam = fam;

    name = teacher.name;
    teacher.name = student.name;
    student.name = name;

    otch = teacher.otch;
    teacher.otch = student.otch;
    student.otch = otch;
}