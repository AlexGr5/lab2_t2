#pragma once

#include "Teacher.h"

// ����� �����
class Lesson
{
private:
    string nameLesson = "";       // �������� ��������
    Teacher teacher;              // �������
public:

    // �����������
    Lesson();

    // ���-�� ��������� ������ �� �����
    string GetNameLess();
    Teacher GetTeacher();

    // ����������
    ~Lesson();

    // ������������� ��������� �����
    void Set(string Name_Less, Teacher t);

    // ��������� �����
    void Null();

    // ���� �������� �����
    void InpInConsol(Teacher t);

    // ����� ������
    void DisplayInfo();
};
