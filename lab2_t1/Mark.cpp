#include "Mark.h"

// ������������� ��������� ������
void init_m(Mark& m)
{
    m.Value = 0;
}

// ���� ������ � ��������� ������
void inp_Mark(Mark& m)
{
    string mark;
    cout << "������� ������: ";
    cin >> mark;
    m.Value = stoi(mark);
    cout << endl;

}

// ����� ������ �� ���������
void out_Mark(Mark& m)
{
    cout << "������: " << m.Value << endl;

}