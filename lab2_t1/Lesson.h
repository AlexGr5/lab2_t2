#pragma once

#include "Teacher.h"

// ��������� �����
struct Lessons
{
    string Name = "";       // �������� ��������
    Teacher Teach;          // �������
};

// ������������� ��������� �����
Lessons init_l(string Name_Less);

// ���� ������, �������� �����, ��� ����� ��������� ���������� � ����� �������
Lessons inp_Less(Teacher t);

// ����� ������, �������� �����, ��� ����� ��������� ����������
void out_Less(Lessons ls);