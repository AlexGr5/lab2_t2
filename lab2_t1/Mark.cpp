#include "Mark.h"

// ������������� ��������� ������
Mark init_m(int v)
{
    Mark m;
    m.Value = v;

    return m;
}

// ���� ������ � ��������� ������
Mark inp_Mark()
{
    Mark m;
    m = init_m(0);
    string mark;
    cout << "������� ������: ";
    cin >> mark;
    m.Value = stoi(mark);
    cout << endl;

    return m;
}

// ����� ������ �� ���������
void out_Mark(Mark m)
{
    cout << "������: " << m.Value << endl;

}