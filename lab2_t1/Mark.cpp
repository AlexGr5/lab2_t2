#include "Mark.h"

// ������������� ��������� ������
void init_m(Mark& m)
{
    m.Value = 0;
}

// ���� ������ � ��������� ������
int inp_Mark(Mark& m)
{
    string mark;
    cout << "������� ������: ";
    cin >> mark;
    m.Value = stoi(mark);
    cout << endl;

    return 0;
}

// ����� ������ �� ���������
int out_Mark(Mark& m)
{
    cout << "������: " << m.Value << endl;

    return 0;
}