#pragma once

#include "Mark.h"

// ��������� ������
struct Student
{
    string Fam;             // �������
    string Name;            // ���
    string Otch;            // ��������
    Mark mas_Marks[20];     // ������ ������
    Lessons mas_Less[20];   // ������ ������
    int i;                  // ������� ���-�� ������
};

// ������������� ��������� ������
void init_s(Student& st);

// ���� ������ � ��������� ������
int inp_Stud(Student& st, Mark* mas_m[20], Lessons* mas_l[20]);

// ���� ��� ������� � ���������
int inp_FIO_Stud(Student& st);