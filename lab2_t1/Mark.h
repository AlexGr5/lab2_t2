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
void inp_Mark(Mark& m);

// ����� ������ �� ���������
void out_Mark(Mark& m);