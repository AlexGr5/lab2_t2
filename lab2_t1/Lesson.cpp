#include "Lesson.h"

// ������������� ��������� �����
void init_l(Lessons& ls)
{
    ls.Name = "";
    Teacher t;
    init_t(t);
    ls.Teach = t;
}

// ���� ������, �������� �����, ��� ����� ��������� ���������� � ����� �������
void inp_Less(Lessons& ls, Teacher& t)
{
    cout << "������� �������� ��������: ";
    cin >> ls.Name;
    cout << endl;
    ls.Teach = t;
}

// ����� ������, �������� �����, ��� ����� ��������� ����������
void out_Less(Lessons& ls)
{
    cout << "�������� ��������: " << ls.Name << endl;
    out_Teach(ls.Teach);
}