#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

// ��������� �������
struct Teacher
{
    string Fam = "";        // �������
    string Name = "";       // ���
    string Otch = "";       // ��������
};

// ������������� ��������� �������
Teacher init_t(string Fam, string Name, string Otch);

// ���� �������, �������� �����, ��� ����� ��������� ����������
Teacher inp_Teach();

// ���� �������, �������� �����, ��� ����� ��������� ����������
void out_Teach(Teacher t);