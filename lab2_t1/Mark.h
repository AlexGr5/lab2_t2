#pragma once

#include "Lesson.h"

// ��������� ������
struct Mark
{
    int Value = 0;          // ������
};

// ������������� ��������� ������
Mark init_m(int v);

// ���� ������ � ��������� ������
Mark inp_Mark();

// ����� ������ �� ���������
void out_Mark(Mark m);