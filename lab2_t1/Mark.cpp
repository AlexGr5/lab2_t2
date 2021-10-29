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
int* Mark::Get()
{
    return &this->value;
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

// ����������
Mark::~Mark()
{
    ;
}
