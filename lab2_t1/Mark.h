#pragma once

#include "Lesson.h"

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