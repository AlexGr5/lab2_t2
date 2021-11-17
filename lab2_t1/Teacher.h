#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

class Student;

// ����� �������
class Teacher
{
private:
    string fam = "";        // �������
    string name = "";       // ���
    string otch = "";       // ��������

public:

    // �����������
    Teacher();

    // ����������� � ����� ����������
    Teacher(string Fam);

    // ����������� � �����������
    Teacher(string Fam, string Name, string Otch);

    // ���������� �������
    void SetFam(string Fam);

    // ���������� ���
    void SetName(string Name);

    // ���������� ��������
    void SetOtch(string Otch);

    // ���-�� ��������� ������ �� �����
    string GetFam();
    string GetName();
    string GetOtch();

    // ���-�� ��������� ������ �� ����� ����� ������
    void GetFamLink(string &Fam);
    void GetNameLink(string &Name);
    void GetOtchLink(string &Otch);

    // ����������
    ~Teacher();

    // ������������� ��������� �������
    void Set(string Fam, string Name, string Otch);

    // ���� �������
    void InpFIO();

    // ���� ������� �� �����
    void DisplayInfo();

    // ������������� ������� ������ ��� ������� Teacher � Student
    friend void NameExchange(Teacher &teacher, Student &student);

    // ��������� �����
    void AdditionSapces();

};

