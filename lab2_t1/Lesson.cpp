#include "Lesson.h"

// �����������
Lesson::Lesson()
{
    this->Name = "";
    this->teacher.Set("", "", "");
}

// ������������� ��������� �����
void Lesson::Set(string Name_Less, Teacher t)
{
    Name = Name_Less;
    teacher = t;
}

// ��������� �����
void Lesson::Null()
{
    this->Name = "";
    this->teacher.Set("", "", "");
}

// ���-�� ��������� ������ �� �����
string Lesson::GetNameLess()
{
    return this->Name;
}

Teacher Lesson::GetTeacher()
{
    return this->teacher;
}

// ���� �������� �����
void Lesson::InpInConsol(Teacher t)
{
    cout << "������� �������� ��������: ";
    cin >> Name;
    cout << endl;
    teacher = t;

}

// ����� ������, �������� �����, ��� ����� ��������� ����������
void Lesson::DisplayInfo()
{
    cout << "�������� ��������: " << Name << endl;
    teacher.DisplayInfo();
}


// ����������
Lesson::~Lesson()
{
    ;
}