#include "Mark.h"

// �����������
Mark::Mark()
{
    Value = 0;
}

// ������������� ��������� ������
void Mark::set_m(int v)
{
    Value = v;
}

// ��������� ������
int Mark::get_m()
{
    return Value;
}

// ���� ������ � ��������� ������
void Mark::inp_Mark()
{
    string mark;
    cout << "������� ������: ";
    cin >> mark;
    Value = stoi(mark);
    cout << endl;
}

// ����� ������ �� ���������
void Mark::out_Mark()
{
    cout << "������: " << Value << endl;

}

// ���-�� ���������� ������������� �������
Mark* Mark::Extern_Mark(Mark* old_mas, int len, int dif)
{
    Mark* ls;
    if (len > 0)
    {
        if (dif > 0)
        {
            Mark* new_mas = new Mark[len + dif];

            for (int i = 0; i < (len); i++)
            {
                *new_mas = *old_mas;
            }

            delete[] old_mas;

            ls = new_mas;
        }
        else
            ls = old_mas;
    }
    else
        ls = old_mas;

    return ls;
}

// ����������
Mark::~Mark()
{
    delete this;
}