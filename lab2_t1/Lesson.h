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

    // ����������
    ~Lessons();

    // ������������� ��������� �����
    void set_l(string Name_Less, Teacher t);

    // ��������� ������
    Lessons get_l();

    // ���� �������� �����
    void inp_Less();

    // ����� ������
    void out_Less();
};
