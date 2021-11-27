#include "Class.h"

// �����������
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

// ����������� � ����� ����������
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

// ����������� � �����������
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

// �������� ����� ��������� �����
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

// ��������� ��������
void MyClass::SetName(string Name)
{
    className = Name;
}

// ��������� ����
void MyClass::SetYear(string Year)
{
    yearOfStudy = Year;
}

// ��������� ��������
void MyClass::SetStuds(Student mas[], int LenStud)
{
    for (int i = 0; i < 32 && i < LenStud; i++)
    {
        students[i] = mas[i];
        countStuds++;
    }
}

// ������������� ��������� �����
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
    if (countStuds < 20)
    {
        students[countStuds] = st;
        countStuds++;
        fl = true;
    }

    return fl;
}

// ����� ������ �� ��������� �����
// fl_out (0 ��� 1)
void MyClass::DisplayInfo()
{

    cout << "�������� ������: " << className << endl;;
    cout << "��� ��������: " << yearOfStudy << endl;
    cout << endl;
    cout << "�������:" << endl;

    int i = 0;
    for (i = 0; i < countStuds; i++)
    {
        students[i].DisplayInfo();
    }

}

// ����� ���� ������ �� ��������� �����
void MyClass::DispFullInfo()
{
    cout << "�������� ������: " << className << endl;;
    cout << "��� ��������: " << yearOfStudy << endl;
    cout << endl;
    cout << "�������:" << endl;

    int i = 0;
    for (i = 0; i < countStuds; i++)
    {
        students[i].DispFullInfo();
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
                students[j].DisplayInfo();
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
                students[j].DisplayInfo();
        }
        exit = true;
    }

    return exit;
}


// ����������� �����
MyClass::MyClass(const MyClass& Class)
{
    // ������������� �����������, �.�. ��� �� ���������
    className = Class.className;

    // ������������� �����������, �.�. ��� �� ���������
    yearOfStudy = Class.yearOfStudy;

    // ������������� �����������, �.�. ��� �� ���������
    countStuds = Class.countStuds;
    
    if (Class.countStuds > 0)
    {
        // ��� ��� students - ��� ������, �� �������� �������� �����������
        for (int i = 0; i < Class.countStuds; i++)
        {
            students[i] = Class.students[i];
        }
    }

}

// ����������
MyClass::~MyClass()
{
    ;
}


// ���������� ������� ������������
MyClass& MyClass::operator=(const MyClass& Class)
{
    // �������� �� ����������������
    if (this == &Class)
        return *this;

    // ������� ��� ����� �������� ���������� �������� m_data (����� �������� �������)
    delete[] students;

    className = Class.className;

    yearOfStudy = Class.yearOfStudy;

    countStuds = Class.countStuds;

    // m_data �������� ����������, ������� ��� ����� ��������� �������� �����������, ��� �������, ��� ���� ��������� �� �������� �������
    if (Class.students)
    {
        // �������� ������ ��� ����� �����
        students = new Student[32];

        // ��������� �����������
        for (int i = 0; i < Class.countStuds; ++i)
            students[i] = Class.students[i];
    }

    return *this;
}