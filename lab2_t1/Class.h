#pragma once

#include "Student.h"

// ��������� �����
struct Class_
{
    string Name = "";       // �������� ������
    string year = "";       // ��� ��������
    int i = 0;              // ������� ���-�� ��������
    Student mas_Stud[32];   // ������ ��������
};

// �������� ����� ��������� �����
Class_ null_c();

// ������������� ��������� �����
Class_ init_c(string Name, string Year, Student mas[32]);

// ���� ������ � ��������� �����
Class_ inp_Class_();

// ���������� � ������ ������
int add_St_to_Cl(Class_& cl, Student& st);

// ���� ������ �� ��������� �����
// fl_out (0 ��� 1)
void out_Class_(Class_ cl, int fl_out);

// ������� �� ���������� ������ �������� � ������
int Best_Stud_inClass(Class_ cl);

// ������� �� ���������� ������ �������� � ������
int Bed_Stud_inClass(Class_ cl);