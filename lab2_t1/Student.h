#pragma once

#include "Mark.h"

// ����� ������
class Student
{
private:
    string fam = "";            // �������
    string name = "";           // ���
    string otch = "";           // ��������
    Mark marks[20];             // ������ ������
    Lesson lessons[20];         // ������ ������
    int countLess = 0;          // ������� ���-�� ������

public:

    // �����������
    Student();

    // ����������� � ����� ����������
    Student(string Fam);

    // ����������� � �����������
    Student(string Fam, string Name, string Otch, Mark mas_m[], int LenMark, Lesson mas_l[], int LenLess);

    // ����������
    ~Student();

    // ������� ��������� �������� �����
    string GetFam();
    string GetName();
    string GetOtch();

    // ���������� ������ �� ������� � �������
    Mark GetMarkByNumber(int i);

    // ���������� ���� �� ������� � �������
    Lesson GetLessByNumber(int i);

    // �������� ���� ����� ��������� ������ (Student)
    void Null();

    // ��������� �������
    void SetFam(string Fam);

    // ��������� �����
    void SetName(string Name);

    // ��������� ��������
    void SetOtch(string Otch);

    // ��������� ������
    void SetMarks(Mark mas_m[], int LenMark);

    // ��������� ������
    void SetLessons(Lesson mas_l[], int LenLess);

    // ������������� ��������� ������
    void Set(string Fam, string Name, string Otch, Mark mas_m[], int LenMark, Lesson mas_l[], int LenLess);

    // ���� ��� ������� � ���������
    void InpStudFIO();

    // ���������� � ������� �����
    bool AddLess(Lesson ls);

    // ���������� � ������� ����� � ������
    bool AddLessAndMark(Lesson ls, Mark m);

    // ���������� � ������� ������ � ����������� ��������
    bool AddMark(Lesson ls, Mark m);

    // ����� ������� � ����������, ������� � ���� ����
    void DisplayInfo();

    // ����� ������� � ����� ����������, ���� �������
    void DispFullInfo();

    // ������������� ������� ������ ��� ������� Teacher � Student
    friend void NameExchange(Teacher& teacher, Student& student);

};
