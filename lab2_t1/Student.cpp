#include "Student.h"

// �����������
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

// ����������� � ����� ����������
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

// ����������� � �����������
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

// �������� ���� ����� ��������� ������ (Student)
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


// ������� ��������� �������� �����
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



// ������������� ��������� ������
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

// ���� ��� ������� � ���������
void Student::InpStudFIO()
{
    cout << "������� ������� �������: ";
    cin >> fam;
    cout << "������� ��� �������: ";
    cin >> name;
    cout << "������� �������� �������: ";
    cin >> otch;
}

// ���������� � ������� �����
// 0 - �� ������, 1 - ������
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

// ���������� � ������� ����� � ������
// 0 - �� ������, 1 - ������
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

// ���������� � ������� ������ � ����������� ��������
// 0 - �� ������, 1 - ������
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

// ����� �������
// �������� ������� � ���� ��� ���������� ������ ������ � ������
// fl_out (0 ��� 1)
void Student::DisplayShortInfo()
{
    cout << "��� �������: " << fam << " " << name << " " << otch << endl;

    cout << "�����:" << endl;
    int i = 0;
    while (lessons[i].GetNameLess() != "")
    {
        cout << " * " << lessons[i].GetNameLess() << " * " << marks[i].Get() << " * " << endl;
        i++;
    }
}




// ����� ������� � ����� ����������, ���� �������
void Student::DispFullInfo()
{
    cout << "��� �������: " << fam << " " << name << " " << otch << endl;


    cout << "�����:" << endl;
    for (int i = 0; i < 20; i++)
    {
        lessons[i].DisplayInfo();
    }
    cout << "������:" << endl;
    for (int i = 0; i < 20; i++)
    {
        marks[i].DisplayValue();
    }
}

// ����������
Student::~Student()
{
    ;
}

// ������������� ������� ������ ��� ������� Teacher � Student
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