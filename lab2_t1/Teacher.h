#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

// ����� �������
class Teacher
{
private:
    string Fam = "";        // �������
    string Name = "";       // ���
    string Otch = "";       // ��������

public:

    // �����������
    Teacher();

    // ���-�� ��������� ������ �� �����
    string GetFam();
    string GetName();
    string GetOtch();

    // ����������
    ~Teacher();

    // ������������� ��������� �������
    void SetTeach(string Fam, string Name, string Otch);

    // ���� �������
    void InpTeachFIO();

    // ���� ������� �� �����
    void DisplayTeach();

};

