#pragma once

#include "Lesson.h"

// ��������� ������
class Mark
{
private:
    int Value = 0;          // ������

public:

    // �����������
    Mark();

    // ����������
    ~Mark();

    // ������������� ��������� ������
    void set_m(int v);

    // ��������� ������
    int get_m();

    // ���� ������ � ��������� ������
    void inp_Mark();

    // ���-�� ���������� ������������� �������
    Mark* Extern_Mark(Mark* old_mas, int len, int dif);

    // ����� ������ �� ���������
    void out_Mark();
};

