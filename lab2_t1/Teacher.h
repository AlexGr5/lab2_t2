#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

// ��������� �������
struct Teacher
{
    string Fam;             // �������
    string Name;            // ���
    string Otch;            // ��������
};

// ������������� ��������� �������
void init_t(Teacher& t);

// ���� �������, �������� �����, ��� ����� ��������� ����������
void inp_Teach(Teacher& t);

// ���� �������, �������� �����, ��� ����� ��������� ����������
void out_Teach(Teacher& t);