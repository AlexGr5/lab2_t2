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
int inp_Teach(Teacher& t);

// ���� �������, �������� �����, ��� ����� ��������� ����������
int out_Teach(Teacher& t);