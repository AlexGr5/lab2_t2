#pragma once

#include "Student.h"

// ����� �����
class MyClass
{
private:
    string Name = "";       // �������� ������
    string Year = "";       // ��� ��������
    int N = 0;              // ������� ���-�� ��������
    Student Students[32];   // ������ ��������

public:
    
    // �����������
    MyClass();

    // ����������
    ~MyClass();

    // �������� ����� ��������� �����
    void NullMyClass();

    // ������������� ��������� �����
    void SetMyClass(string Name, string Year, Student mas[], int LenStud);

    // ������� ��������� �������� �����
    string GetName();
    string GetYear();

    // ���� ������ � ��������� �����
    void InpNameYearMyClass();

    // ���������� � ������ �������
    bool AddStudToMyClass(Student st);

    // ���� ������ �� ��������� �����
    void DispMyClass();

    // ���� ���� ������ �� ��������� �����
    void DispFullMyClass();

    // ������� �� ���������� ������ �������� � ������
    bool BestStudInMyClass();

    // ������� �� ���������� ������ �������� � ������
    bool BedStudInMyClass();

};
