#pragma once

#include "Lesson.h"

// ����� ������
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
    void SetMark(int v);

    // ��������� ������
    int GetMark();

    // ���� ������ � ��������� ������
    void InpMark();

    // ����� ������ �� ���������
    void DispMark();
};

