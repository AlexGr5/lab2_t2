#include "Mark.h"

// �����������
Mark::Mark()
{
    value = 0;
}

// �����������
Mark::Mark(int value)
{
    this->value = value;
}

// ������������� ��������� ������
void Mark::Set(int v)
{
    value = v;
}

// ��������� ������
int Mark::Get()
{
    return this->value;
}

// ��������� ������ ����� ���������
void Mark::GetPoint(int* Value)
{
    *Value = value;
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
void Mark::DisplayInfo()
{
    cout << "������: " << value << endl;

}


// ���������� �������� � ����� ������
void Mark::Add(void)
{
    if (lastMark == NULL)
        this->prev = NULL;
    else 
    { 
        lastMark->next = this;
        prev = lastMark;
    }
    lastMark = this;
    this->next = NULL;
}

// ����� �� ������� ����������� ������
void Mark::reprint(void)
{
    Mark* uk;   // ��������������� ���������
    uk = lastMark;
    if (uk == NULL) 
    { 
        cout << "������ ����!"; 
        return;
    }
    else 
        cout << "\n���������� ������:\n";

    // ���� ������ � �������� ������� �������� ��������� ������:
    while (uk != NULL)
    {
        cout << uk->value << '\t';
        uk = uk->prev;
    }
}

// �������� ������ ������
void Mark::NewList()
{
    lastMark = NULL;
}

// ����������
Mark::~Mark()
{
    ;
}

// ��������� Mark + int
Mark operator+(const Mark& mark, int value)
{
    if (mark.value + value > 5)
        return mark;
    else
        return Mark(mark.value + value);
}

// ���������� ����������� ��������� '++'
Mark& Mark::operator++()
{
    value += 1;
    return *this;
}

// ���������� ������������ ��������� '++'
Mark Mark::operator++ (int)
{
    Mark m1 = *this;
    ++* this;
    return m1;
}

// ������������� �����
//Mark Mark::ShallowCopy()
//{
//    return *this;
//}

// �������� �����
//Mark Mark::DeepCopy()
//{
//    Mark other = this->Get();
//    other.Set(value);
//    return other;
//}