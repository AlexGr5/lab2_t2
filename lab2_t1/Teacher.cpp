#include "Teacher.h"

// ������������� ��������� �������
void init_t(Teacher& t)
{
    t.Fam = "";
    t.Name = "";
    t.Otch = "";
}

// ���� �������, �������� �����, ��� ����� ��������� ����������
void inp_Teach(Teacher& t)
{
    cout << "������� ������� �������: ";
    cin >> t.Fam;
    cout << "������� ��� �������: ";
    cin >> t.Name;
    cout << "������� �������� �������: ";
    cin >> t.Otch;
}

// ���� �������, �������� �����, ��� ����� ��������� ����������
void out_Teach(Teacher& t)
{
    cout << "��� �������: " << t.Fam << " " << t.Name << " " << t.Otch << endl;

}