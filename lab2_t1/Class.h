#pragma once

#include "Student.h"

// ��������� �����
struct Class_
{
    string Name;            // �������� ������
    string year;            // ��� ��������
    int i;                  // ������� ���-�� ��������
    Student mas_Stud[32];   // ������ ��������
};

// ������������� ��������� �����
void init_c(Class_& cl);

// ���� ������ � ��������� �����
void inp_Class_(Class_& cl/*, Student *mas[32]*/);

// ���������� � ������ ������
int add_St_to_Cl(Class_& cl, Student& st);

// ���� ������ �� ��������� �����
// fl_out (0 ��� 1)
void out_Class_(Class_& cl, int fl_out);

// ������� �� ���������� ������ �������� � ������
int Best_Stud_inClass(Class_& cl);

// ������� �� ���������� ������ �������� � ������
int Bed_Stud_inClass(Class_& cl);