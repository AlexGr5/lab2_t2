#include "Teacher.h"

// ������������� ��������� �������
void Teacher::set_t(string Fam_s, string Name_s, string Otch_s)
{
    Fam = Fam_s;
    Name = Name_s;
    Otch = Otch_s;
}

// ��������� ������
Teacher Teacher::get_t()
{
    return *this;
}

// ���� �������, �������� �����, ��� ����� ��������� ����������
void Teacher::inp_Teach()
{
    cout << "������� ������� �������: ";
    cin >> Fam;
    cout << "������� ��� �������: ";
    cin >> Name;
    cout << "������� �������� �������: ";
    cin >> Otch;
}

// ���� �������, �������� �����, ��� ����� ��������� ����������
void Teacher::out_Teach()
{
    cout << "��� �������: " << Fam << " " << Name << " " << Otch << endl;

}

// ���������� ������������� �������
// ��������� �� ������ ������, ����� ������� �������, �� ������� ��� ������ ����� ������
Teacher* Exten_mas(Teacher* old_mas, int len, int difference)
{
    Teacher* point;
    if (len > 0)
    {
        if (difference > 0)
        {
            Teacher* new_mas = new Teacher[len + difference];

            for (int i = 0; i < (len); i++)
            {
                *new_mas = *old_mas;
            }

            delete[] old_mas;

            point = new_mas;
        }
        else
            point = old_mas;
    }
    else
        point = old_mas;

    return point;
}