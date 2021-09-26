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

// ��������� �����
void Lessons::null_l()
{
    this->Name = "";
    this->Teach.set_t("", "", "");
}

// ��������� ������
Lessons Lessons::get_l()
{
    return *this;
}

// ���-�� ��������� ������ �� �����
string Lessons::get_l_N()
{
    return this->Name;
}

Teacher Lessons::get_l_T()
{
    return this->Teach;
}

// ���� �������� �����
void Lessons::inp_Less(Teacher t)
{
    cout << "������� �������� ��������: ";
    cin >> Name;
    cout << endl;
    Teach = t;

}

// ����� ������, �������� �����, ��� ����� ��������� ����������
void Lessons::out_Less()
{
    cout << "�������� ��������: " << Name << endl;
    Teach.out_Teach();
}


// ���������� ������������� �������
// ��������� �� ������ ������, ����� ������� �������, �� ������� ��� ������ ����� ������
Lessons* Lessons::Extern_Less(Lessons* &old_mas, int len, int dif)
{
    Lessons* point;
    if (len > 0)
    {
        if (dif > 0)
        {
            Lessons* new_mas = new Lessons[len + dif];

            for (int i = 0; i < (len); i++)
            {
                *new_mas = *old_mas;
            }

            delete[] old_mas;

            old_mas = new_mas;
            point = old_mas;
        }
        else
            point = old_mas;
    }
    else
        point = old_mas;

    return point;
}

// ����������
Lessons::~Lessons()
{
    ;
}