#include "Lesson.h"

// �����������
Lesson::Lesson()
{
    this->Name = "";
    this->Teach.SetTeach("", "", "");
}

// ������������� ��������� �����
void Lesson::SetLess(string Name_Less, Teacher t)
{
    Name = Name_Less;
    Teach = t;
}

// ��������� �����
void Lesson::NullLess()
{
    this->Name = "";
    this->Teach.SetTeach("", "", "");
}

// ���-�� ��������� ������ �� �����
string Lesson::GetName()
{
    return this->Name;
}

Teacher Lesson::GetTeach()
{
    return this->Teach;
}

// ���� �������� �����
void Lesson::InpLessName(Teacher t)
{
    cout << "������� �������� ��������: ";
    cin >> Name;
    cout << endl;
    Teach = t;

}

// ����� ������, �������� �����, ��� ����� ��������� ����������
void Lesson::out_Less()
{
    cout << "�������� ��������: " << Name << endl;
    Teach.DisplayTeach();
}


// ����������
Lesson::~Lesson()
{
    ;
}