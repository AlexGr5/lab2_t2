#pragma once

#include "Teacher.h"

// ��������� �����
class Lessons
{
private:
    string Name = "";       // �������� ��������
    Teacher Teach;          // �������
public:

    // �����������
    Lessons();

    // ���-�� ��������� ������ �� �����
    string get_l_N();
    Teacher get_l_T();

    // ����������
    ~Lessons();

    // ������������� ��������� �����
    void set_l(string Name_Less, Teacher t);

    // ��������� ������
    Lessons get_l();

    // ��������� �����
    void null_l();

    // ���� �������� �����
    void inp_Less(Teacher t);

    // ���-�� ���������� ������������� �������
    Lessons* Extern_Less(Lessons* &old_mas, int len, int dif);

    // ����� ������
    void out_Less();
};
