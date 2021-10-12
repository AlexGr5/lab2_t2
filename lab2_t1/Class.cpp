#include "Class.h"

// �����������
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

// �������� ����� ��������� �����
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

// ������������� ��������� �����
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


// ������� ��������� �������� �����
string MyClass::GetName()
{
    return className;
}

string MyClass::GetYear()
{
    return yearOfStudy;
}



// ���� ������ � ��������� �����
void MyClass::InpNameYear()
{
    cout << "������� �������� ������: ";
    cin >> className;
    cout << endl;
    cout << "������� ��� ��������: ";
    cin >> yearOfStudy;
    cout << endl;
}

// ���������� � ������ ������
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

// ����� ������ �� ��������� �����
// fl_out (0 ��� 1)
void MyClass::DisplayShortInfo()
{

    cout << "�������� ������: " << className << endl;;
    cout << "��� ��������: " << yearOfStudy << endl;
    cout << endl;
    cout << "�������:" << endl;

    int i = 0;
    while (students[i].GetFam() != "")
    {
        students[i].DisplayShortInfo();
        i++;
    }

}

// ���� ���� ������ �� ��������� �����
void MyClass::DispFullInfo()
{
    cout << "�������� ������: " << className << endl;;
    cout << "��� ��������: " << yearOfStudy << endl;
    cout << endl;
    cout << "�������:" << endl;

    int i = 0;
    while (students[i].GetFam() != "")
    {
        students[i].DispFullInfo();
        i++;
    }
}

// ������� �� ���������� ������ �������� � ������
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

// ������� �� ���������� ������ �������� � ������
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

// ����������
MyClass::~MyClass()
{
    ;
}