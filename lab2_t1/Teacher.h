#pragma once
#include "Persone.h"

//#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <locale.h>

//using namespace std;

class Student;

// ����� �������
class Teacher : public Persone
{
private:
    //string fam = "";        // �������
    //string name = "";       // ���
    //string otch = "";       // ��������

public:

    // �����������
    Teacher();

    // ����������� � �����������
    Teacher(string Fam, string Name, string Otch);

    // ���������� �������
    //void SetFam(string Fam);

    // ���������� ���
    //void SetName(string Name);

    // ���������� ��������
    //void SetOtch(string Otch);

    // ���-�� ��������� ������ �� �����
    //string GetFam();
    //string GetName();
    //string GetOtch();

    // ���-�� ��������� ������ �� ����� ����� ������
    //void GetFamLink(string &Fam);
    //void GetNameLink(string &Name);
    //void GetOtchLink(string &Otch);

    // ����������
    ~Teacher();

    // ������������� ������ �������
    //void Set(string Fam, string Name, string Otch);

    // ���� �������
    /*virtual*/ void InpFIO()/* = 0*/;

    // ����� ������� �� �����
    void DisplayInfo();

    // ������������� ������� ������ ��� ������� Teacher � Student
    friend void NameExchange(Teacher &teacher, Student &student);

    // ��������� �����
    //void AdditionSapces();

    // ���������� ��������� '=' (Teacher = Persone)
    Teacher& operator=(Persone &persone);

    // ���������� �������� ��������� <<
    friend std::ostream& operator<< (std::ostream& out, const Teacher& teaher);

    // ����������� ������� ������ ��������� �� �����, ��� �������� ������� (�������, ��������, ��������)
    virtual string WhoIs();

   

};

