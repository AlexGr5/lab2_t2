#include "Student.h"

// �����������
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

// �������� ���� ����� ��������� ������ (Student)
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


// ������� ��������� �������� �����
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



// ������������� ��������� ������
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

// ���� ��� ������� � ���������
void Student::InpStudFIO()
{
    cout << "������� ������� �������: ";
    cin >> Fam;
    cout << "������� ��� �������: ";
    cin >> Name;
    cout << "������� �������� �������: ";
    cin >> Otch;
}

// ���������� � ������� �����
// 0 - �� ������, 1 - ������
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

// ���������� � ������� ����� � ������
// 0 - �� ������, 1 - ������
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

// ���������� � ������� ������ � ����������� ��������
// 0 - �� ������, 1 - ������
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

// ����� �������
// �������� ������� � ���� ��� ���������� ������ ������ � ������
// fl_out (0 ��� 1)
void Student::DispStud()
{
    cout << "��� �������: " << Fam << " " << Name << " " << Otch << endl;

    cout << "�����:" << endl;
    int i = 0;
    while (Lessons[i].GetName() != "")
    {
        cout << " * " << Lessons[i].GetName() << " * " << Marks[i].GetMark() << " * " << endl;
        i++;
    }
}




// ����� ������� � ����� ����������, ���� �������
void Student::DispFullStud()
{
    cout << "��� �������: " << Fam << " " << Name << " " << Otch << endl;


    cout << "�����:" << endl;
    for (int i = 0; i < 20; i++)
    {
        Lessons[i].out_Less();
    }
    cout << "������:" << endl;
    for (int i = 0; i < 20; i++)
    {
        Marks[i];
    }
}

// ����������
Student::~Student()
{
    ;
}