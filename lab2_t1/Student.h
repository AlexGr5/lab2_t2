#pragma once

#include "Mark.h"

// ����� ������
class Student
{
private:
    string Fam = "";            // �������
    string Name = "";           // ���
    string Otch = "";           // ��������
    Mark Marks[20];             // ������ ������
    Lesson Lessons[20];         // ������ ������
    int N = 0;                  // ������� ���-�� ������

public:

    // �����������
    Student();

    // ����������
    ~Student();

    // ������� ��������� �������� �����
    string GetFam();
    string GetName();
    string GetOtch();

    // ���������� ������ �� ������� � �������
    Mark GetMarkI(int i);

    // ���������� ���� �� ������� � �������
    Lesson GetLessI(int i);

    // �������� ���� ����� ��������� ������ (Student)
   void NullStud();

    // ������������� ��������� ������
    void SetStud(string Fam, string Name, string Otch, Mark mas_m[], int LenMark, Lesson mas_l[], int LenLess);

    // ���� ��� ������� � ���������
    void InpStudFIO();

    // ���������� � ������� �����
    bool AddLessToStud(Lesson ls);

    // ���������� � ������� ����� � ������
    bool AddLMtoStud(Lesson ls, Mark m);

    // ���������� � ������� ������ � ����������� ��������
    bool AddMarkToStud(Lesson ls, Mark m);

    // ����� ������� � ����������, ������� � ���� ����
    void DispStud();

    // ����� ������� � ����� ����������, ���� �������
    void DispFullStud();

};
