#pragma once

#include "Student.h"

// ����� �����
class MyClass
{
private:
    string className = "";                  // �������� ������
    string yearOfStudy = "";                // ��� ��������
    int countStuds = 0;                     // ������� ���-�� ��������
    Student* students = new Student[32];    // ������ ��������

public:
    
    // �����������
    MyClass();

    // ����������� � ����� ����������
    MyClass(string ClassName);

    // ����������� � �����������
    MyClass(string Name, string Year, Student mas[], int LenStud);

    // ����������� �����
    MyClass(const MyClass& Class);

    // ����������
    ~MyClass();

    // �������� ����� ��������� �����
    void Null();

    // ��������� ��������
    void SetName(string Name);

    // ��������� ����
    void SetYear(string Year);

    // ��������� ��������
    void SetStuds(Student mas[], int LenStud);

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
    void DisplayInfo();

    // ���� ���� ������ �� ��������� �����
    void DispFullInfo();

    // ������� �� ���������� ������ �������� � ������
    bool BestStud();

    // ������� �� ���������� ������ �������� � ������
    bool BedStud();

    // ���������� ������� ������������
    MyClass& operator=(const MyClass& Class);

};
