#pragma once

#include "Student.h"

// ��������� �����
struct Class_
{
private:
    string Name = "";       // �������� ������
    string year = "";       // ��� ��������
    int i = 0;              // ������� ���-�� ��������
    Student mas_Stud[32];   // ������ ��������

public:
    
    // �����������
    Class_();

    // ����������
    ~Class_();

    // �������� ����� ��������� �����
    void null_c();

    // ������������� ��������� �����
    void set_c(string Name, string Year, Student* mas[32]);

    // ��������� ������
    Class_ get_c();

    // ������� ��������� �������� �����
    string get_c_n();
    string get_c_y();
    Student* get_c_s();

    // ���� ������ � ��������� �����
    void inp_Class_();

    // ���������� � ������ �������
    int add_St_to_Cl(Student st);

    // ���� ������ �� ��������� �����
    // fl_out (0 ��� 1)
    void out_Class_(int fl_out);

    // ������� �� ���������� ������ �������� � ������
    int Best_Stud_inClass();

    // ������� �� ���������� ������ �������� � ������
    int Bed_Stud_inClass();

    // ���������� ������������� �������
    Class_* Exten_Stud(Class_* &old_mas, int len, int difference);
};
