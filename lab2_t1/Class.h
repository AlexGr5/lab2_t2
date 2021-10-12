#pragma once

#include "Student.h"

// ����� �����
class MyClass
{
private:
    string className = "";          // �������� ������
    string yearOfStudy = "";        // ��� ��������
    int contStuds = 0;              // ������� ���-�� ��������
    Student students[32];           // ������ ��������

public:
    
    // �����������
    MyClass();

    // ����������
    ~MyClass();

    // �������� ����� ��������� �����
    void Null();

    // ������������� ��������� �����
    void Set(string Name, string Year, Student mas[], int LenStud);

    // ������� ��������� �������� �����
    string GetName();
    string GetYear();

    // ���� ������ � ��������� �����
    void InpNameYear();

    // ���������� � ������ �������
    bool AddStud(Student st);

    // ���� ������ �� ��������� �����
    void DisplayShortInfo();

    // ���� ���� ������ �� ��������� �����
    void DispFullInfo();

    // ������� �� ���������� ������ �������� � ������
    bool BestStud();

    // ������� �� ���������� ������ �������� � ������
    bool BedStud();

};
