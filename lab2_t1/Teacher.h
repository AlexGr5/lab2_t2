#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

// ��������� �������
class Teacher
{
private:
    string Fam = "";        // �������
    string Name = "";       // ���
    string Otch = "";       // ��������

public:

    // �����������
    Teacher();

    // ����������
    ~Teacher();

    // ������������� ��������� �������
    void set_t(string Fam, string Name, string Otch);

    // ��������� ������
    Teacher get_t();

    // ���� �������
    void inp_Teach();

    // ���� �������
    void out_Teach();

    // ���������� ������������� �������
    Teacher* Exten_mas(Teacher* old_mas);
};

