#include "Teacher.h"

// �����������
Teacher::Teacher()
{
    fam = "";
    name = "";
    otch = "";
}


// ���-�� ��������� ������ �� �����
string& Teacher::GetFam()
{
    return this->fam;
}

string& Teacher::GetName()
{
    return this->name;
}

string& Teacher::GetOtch()
{
    return this->otch;
}

// ������������� ������ �������
void Teacher::Set(string Fam_s, string Name_s, string Otch_s)
{
    this->fam = Fam_s;
    this->name = Name_s;
    this->otch = Otch_s;
}

// ���� �������
void Teacher::InpFIO()
{
    cout << "������� ������� �������: ";
    cin >> fam;
    cout << "������� ��� �������: ";
    cin >> name;
    cout << "������� �������� �������: ";
    cin >> otch;
}

// ���� �������
void Teacher::DisplayInfo()
{
    cout << "��� �������: " << fam << " " << name << " " << otch << endl;

}

// ��������� �����
void Teacher::AdditionSapces()
{
    fam = fam + "  ";
    name = name + "  ";
    otch = otch + "  ";
}

// ����������
Teacher::~Teacher()
{
    ;
}