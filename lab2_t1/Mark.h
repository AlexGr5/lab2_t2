#pragma once

#include "Lesson.h"

// ����� ������
class Mark
{
private:
    int value = 0;          // ������

public:

    // �����������
    Mark();

    // ����������
    ~Mark();

    // ������������� ��������� ������
    void Set(int v);

    // ��������� ������
    int Get();

    // ���� ������ � ��������� ������
    void InpMark();

    // ����� ������ �� ���������
    void DisplayValue();
};

