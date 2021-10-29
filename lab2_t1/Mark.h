#pragma once

#include "Lesson.h"

// ����� ������
class Mark
{
private:
    int value = 0;          // ������


    static Mark* lastMark;  // ����� ���������� �������� ������
    Mark* prev;             // �� ���������� ������� ������
    Mark* next;             // �� ��������� ������� ������

public:

    // �����������
    Mark();

    // �����������
    Mark(int value);

    // ����������
    ~Mark();

    // ������������� ��������� ������
    void Set(int v);

    // ��������� ������
    int* Get();

    // ���� ������ � ��������� ������
    void InpMark();

    // ����� ������ �� ���������
    void DisplayValue();

    // ���������� �������� � ����� ������
    void Add(void);

    // ����� �� ������� ����������� ������
    static void reprint(void);

    // ���������� ��������� '+' (Mark + int)
    friend Mark operator+(const Mark& mark, int value);

    // ���������� ����������� ��������� '++'
    Mark& operator++();

    // ���������� ������������ ��������� '++'
    Mark operator++ (int);

};

