#include "Mark.h"

// �����������
Mark::Mark()
{
    value = 0;
}

// ������������� ��������� ������
void Mark::Set(int v)
{
    value = v;
}

// ��������� ������
int Mark::Get()
{
    return value;
}

// ���� ������ � ��������� ������
void Mark::InpMark()
{
    string mark;
    cout << "������� ������: ";
    cin >> mark;
    value = stoi(mark);
    cout << endl;
}

// ����� ������ �� ���������
void Mark::DisplayValue()
{
    cout << "������: " << value << endl;

}

// ����������
Mark::~Mark()
{
    ;
}