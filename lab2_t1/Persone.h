#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

class Persone
{
protected:
    string fam = "";        // �������
    string name = "";       // ���
    string otch = "";       // ��������

public:

    Persone();

    Persone(string Fam, string Name, string Otch);

    // ���������� �������
    void SetFam(string Fam);

    // ���������� ���
    void SetName(string Name);

    // ���������� ��������
    void SetOtch(string Otch);

    // ���-�� ��������� ������ �� �����
    string GetFam();
    string GetName();
    string GetOtch();

    // ���-�� ��������� ������ �� ����� ����� ������
    void GetFamLink(string& Fam);
    void GetNameLink(string& Name);
    void GetOtchLink(string& Otch);

    // ����������
    ~Persone();

    // ������������� ������ �������
    void Set(string Fam, string Name, string Otch);

    // ���� ��������
    virtual void InpFIO() = 0;

    // ����� �������� �� �����
    void DisplayInfo();

    // ����������� ������� ������ ��������� �� �����, ��� �������� ������� (�������, ��������, ��������)
    virtual string WhoIs();

    // ������� ������
    void SayHello();
};