#include "Mark.h"

// �����������
Mark::Mark()
{
    Value = 0;
}

// ������������� ��������� ������
void Mark::SetMark(int v)
{
    Value = v;
}

// ��������� ������
int Mark::GetMark()
{
    return Value;
}

// ���� ������ � ��������� ������
void Mark::InpMark()
{
    string mark;
    cout << "������� ������: ";
    cin >> mark;
    Value = stoi(mark);
    cout << endl;
}

// ����� ������ �� ���������
void Mark::DispMark()
{
    cout << "������: " << Value << endl;

}

// ����������
Mark::~Mark()
{
    ;
}