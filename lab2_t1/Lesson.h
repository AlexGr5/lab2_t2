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

    // ����������� � ����� ����������
    Lesson(string NameLesson);

    // ����������� � �����������
    Lesson(string Name_Less, Teacher Teacher1);

    // ���-�� ��������� ������ �� �����
    string GetNameLess();
    Teacher GetTeacher();

    // ����������
    ~Lesson();

    // ������������� ������ �����
    void Set(string Name_Less, Teacher t);

    // ��������� �����
    void Null();

    // ���� �������� �����
    void InpInConsol(Teacher t);

    // ����� ������
    void DisplayInfo();
};
