#include "Teacher.h"

// �����������
Teacher::Teacher()
{
    Fam = "";
    Name = "";
    Otch = "";
}


// ���-�� ��������� ������ �� �����
string Teacher::GetFam()
{
    return this->Fam;
}

string Teacher::GetName()
{
    return this->Name;
}

string Teacher::GetOtch()
{
    return this->Otch;
}

// ������������� ��������� �������
void Teacher::SetTeach(string Fam_s, string Name_s, string Otch_s)
{
    this->Fam = Fam_s;
    this->Name = Name_s;
    this->Otch = Otch_s;
}

// ���� �������
void Teacher::InpTeachFIO()
{
    cout << "������� ������� �������: ";
    cin >> Fam;
    cout << "������� ��� �������: ";
    cin >> Name;
    cout << "������� �������� �������: ";
    cin >> Otch;
}

// ���� �������
void Teacher::DisplayTeach()
{
    cout << "��� �������: " << Fam << " " << Name << " " << Otch << endl;

}

// ����������
Teacher::~Teacher()
{
    ;
}