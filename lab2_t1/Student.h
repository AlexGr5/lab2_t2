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
void inp_Stud(Student& st, Mark* mas_m[20], Lessons* mas_l[20]);

// ���� ��� ������� � ���������
void inp_FIO_Stud(Student& st);

// ���������� � ������� �����
int add_Less_to_Stud(Student& st, Lessons& ls);

// ���������� � ������� ����� � ������
int add_LM_to_Stud(Student& st, Lessons& ls, Mark& m);

// ���������� � ������� ������ � ����������� ��������
int add_Mark_to_Stud(Student& st, Lessons& ls, Mark& m);

// ����� �������
// �������� ������� � ���� ��� ���������� ������ ������ � ������
// fl_out (0 ��� 1)
void out_Stud(Student& st, int fl_out);