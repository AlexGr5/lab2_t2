#include "Teacher.h"

// ������������� ��������� �������
Teacher init_t(string Fam, string Name, string Otch)
{
    Teacher t;
    t.Fam = Fam;
    t.Name = Name;
    t.Otch = Otch;

    return t;
}

// ���� �������, �������� �����, ��� ����� ��������� ����������
Teacher inp_Teach()
{
    Teacher t;
    t = init_t("", "", "");
    cout << "������� ������� �������: ";
    cin >> t.Fam;
    cout << "������� ��� �������: ";
    cin >> t.Name;
    cout << "������� �������� �������: ";
    cin >> t.Otch;

    return t;
}

// ���� �������, �������� �����, ��� ����� ��������� ����������
void out_Teach(Teacher t)
{
    cout << "��� �������: " << t.Fam << " " << t.Name << " " << t.Otch << endl;

}