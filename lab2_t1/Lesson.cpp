#include "Lesson.h"

// �����������
Lessons::Lessons()
{
    this->Name = "";
    this->Teach.set_t("", "", "");
}

// ������������� ��������� �����
void Lessons::set_l(string Name_Less, Teacher t)
{
    Name = Name_Less;
    Teach = t;
}

// ��������� ������
Lessons Lessons::get_l()
{
    return *this;
}

// ���� �������� �����
void Lessons::inp_Less()
{
    cout << "������� �������� ��������: ";
    cin >> Name;
    cout << endl;

}

// ����� ������, �������� �����, ��� ����� ��������� ����������
void Lessons::out_Less()
{
    cout << "�������� ��������: " << Name << endl;
    Teach.out_Teach();
}

// ����������
Lessons::~Lessons()
{
    delete this;
}