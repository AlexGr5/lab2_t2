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
    string fam = "";        // �������
    string name = "";       // ���
    string otch = "";       // ��������

public:

    // �����������
    Teacher();

    // ���-�� ��������� ������ �� �����
    string& GetFam();
    string& GetName();
    string& GetOtch();

    // ����������
    ~Teacher();

    // ������������� ��������� �������
    void Set(string Fam, string Name, string Otch);

    // ���� �������
    void InpFIO();

    // ���� ������� �� �����
    void DisplayInfo();

};

