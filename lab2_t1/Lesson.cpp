#include "Lesson.h"

// �����������
Lesson::Lesson()
{
    this->nameLesson = "";
    this->teacher.Set("", "", "");
}

// ������������� ��������� �����
void Lesson::Set(string Name_Less, Teacher t)
{
    nameLesson = Name_Less;
    teacher = t;
}

// ��������� �����
void Lesson::Null()
{
    this->nameLesson = "";
    this->teacher.Set("", "", "");
}

// ���-�� ��������� ������ �� �����
string Lesson::GetNameLess()
{
    return this->nameLesson;
}

Teacher Lesson::GetTeacher()
{
    return this->teacher;
}

// ���� �������� �����
void Lesson::InpInConsol(Teacher t)
{
    cout << "������� �������� ��������: ";
    cin >> nameLesson;
    cout << endl;
    teacher = t;

}

// ����� ������, �������� �����, ��� ����� ��������� ����������
void Lesson::DisplayInfo()
{
    cout << "�������� ��������: " << nameLesson << endl;
    teacher.DisplayInfo();
}


// ����������
Lesson::~Lesson()
{
    ;
}