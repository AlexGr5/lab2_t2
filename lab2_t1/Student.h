#pragma once

#include "Mark.h"

// ��������� ������
struct Student
{
    string Fam = "";        // �������
    string Name = "";       // ���
    string Otch = "";       // ��������
    Mark mas_Marks[20];     // ������ ������
    Lessons mas_Less[20];   // ������ ������
    int i;                  // ������� ���-�� ������
};

// �������� ���� ����� ��������� ������ (Student)
Student null_s();

// ������������� ��������� ������
Student init_s(string Fam, string Name, string Otch, Mark mas_m[20], Lessons mas_l[20]);

// ���� ������ � ��������� ������
//void inp_Stud(Student& st, Mark* mas_m[20], Lessons* mas_l[20]);

// ���� ��� ������� � ���������
Student inp_FIO_Stud();

// ���������� � ������� �����
int add_Less_to_Stud(Student& st, Lessons& ls);

// ���������� � ������� ����� � ������
int add_LM_to_Stud(Student& st, Lessons& ls, Mark& m);

// ���������� � ������� ������ � ����������� ��������
int add_Mark_to_Stud(Student& st, Lessons& ls, Mark& m);

// ����� �������
// �������� ������� � ���� ��� ���������� ������ ������ � ������
// fl_out (0 ��� 1)
void out_Stud(Student st, int fl_out);