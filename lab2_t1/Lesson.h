#pragma once

#include "Teacher.h"

// ��������� �����
struct Lessons
{
    string Name;            // �������� ��������
    Teacher Teach;          // �������
};

// ������������� ��������� �����
void init_l(Lessons& ls);

// ���� ������, �������� �����, ��� ����� ��������� ���������� � ����� �������
int inp_Less(Lessons& ls, Teacher& t);

// ����� ������, �������� �����, ��� ����� ��������� ����������
int out_Less(Lessons& ls);