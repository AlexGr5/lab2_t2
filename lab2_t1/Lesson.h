#pragma once

#include "Teacher.h"

// ����� �����
class Lesson
{
private:
    string Name = "";       // �������� ��������
    Teacher Teach;          // �������
public:

    // �����������
    Lesson();

    // ���-�� ��������� ������ �� �����
    string GetName();
    Teacher GetTeach();

    // ����������
    ~Lesson();

    // ������������� ��������� �����
    void SetLess(string Name_Less, Teacher t);

    // ��������� �����
    void NullLess();

    // ���� �������� �����
    void InpLessName(Teacher t);

    // ����� ������
    void out_Less();
};
