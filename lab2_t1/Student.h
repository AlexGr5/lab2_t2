#pragma once

#include "Mark.h"

// ��������� ������
struct Student
{
private:
    string Fam = "";            // �������
    string Name = "";           // ���
    string Otch = "";           // ��������
    Mark mas_Marks[20];         // ������ ������
    Lessons mas_Less[20];       // ������ ������
    int i = 0;                  // ������� ���-�� ������

public:

    // �����������
    Student();

    // ����������
    ~Student();

    // ������� ���������
    Student get_s();

    // ������� ��������� �������� �����
    string get_s_F();
    string get_s_N();
    string get_s_O();
    Mark* get_s_M();
    Lessons* get_s_L();

    // �������� ���� ����� ��������� ������ (Student)
   void null_s();

    // ������������� ��������� ������
    void set_s(string Fam, string Name, string Otch, Mark mas_m[20], Lessons mas_l[20]);

    // ���� ��� ������� � ���������
    void inp_FIO_Stud();

    // ���������� � ������� �����
    int add_Less_to_Stud(Lessons ls);

    // ���������� � ������� ����� � ������
    int add_LM_to_Stud(Lessons ls, Mark m);

    // ���������� � ������� ������ � ����������� ��������
    int add_Mark_to_Stud(Lessons ls, Mark m);

    // ����� �������
    // �������� ������� � ���� ��� ���������� ������ ������ � ������
    // fl_out (0 ��� 1)
    void out_Stud(int fl_out);

    // ���������� ������������� �������
    Student* Exten_Stud(Student* old_mas, int len, int difference);
};
