#include "Lesson.h"

// ������������� ��������� �����
Lessons init_l(string Name_Less)
{
    Lessons ls;
    ls.Name = Name_Less;
    Teacher t;
    t = init_t("", "", "");
    ls.Teach = t;

    return ls;
}

// ���� ������, �������� �����, ��� ����� ��������� ���������� � ����� �������
Lessons inp_Less(Teacher t)
{
    Lessons ls;
    ls = init_l("");
    cout << "������� �������� ��������: ";
    cin >> ls.Name;
    cout << endl;
    ls.Teach = t;

    return ls;
}

// ����� ������, �������� �����, ��� ����� ��������� ����������
void out_Less(Lessons ls)
{
    cout << "�������� ��������: " << ls.Name << endl;
    out_Teach(ls.Teach);
}