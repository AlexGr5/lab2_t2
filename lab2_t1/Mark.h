#pragma once

#include "Teacher.h"

// ��������� ������
struct Mark
{
    int Value;              // ������
};

// ������������� ��������� ������
void init_m(Mark& m);

// ���� ������ � ��������� ������
int inp_Mark(Mark& m);

// ����� ������ �� ���������
int out_Mark(Mark& m);