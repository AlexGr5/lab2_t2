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
void inp_Less(Lessons& ls, Teacher& t);

// ����� ������, �������� �����, ��� ����� ��������� ����������
void out_Less(Lessons& ls);