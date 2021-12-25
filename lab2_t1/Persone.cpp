#include "Persone.h"

// �����������
Persone::Persone()
{
    fam = "";
    name = "";
    otch = "";
}

// ����������� � �����������
Persone::Persone(string Fam, string Name, string Otch)
{
    fam = Fam;
    name = Name;
    otch = Otch;
}

// ���-�� ��������� ������ �� �����
string Persone::GetFam()
{
    return this->fam;
}

string Persone::GetName()
{
    return this->name;
}

string Persone::GetOtch()
{
    return this->otch;
}

// ���-�� ��������� ������ �� ����� ����� ������
void Persone::GetFamLink(string& Fam)
{
    Fam = this->fam;
}

void Persone::GetNameLink(string& Name)
{
    Name = this->name;
}

void Persone::GetOtchLink(string& Otch)
{
    Otch = this->otch;
}

// ���������� �������
void Persone::SetFam(string Fam)
{
    fam = Fam;
}

// ���������� ���
void Persone::SetName(string Name)
{
    name = Name;
}

// ���������� ��������
void Persone::SetOtch(string Otch)
{
    otch = Otch;
}

// ������������� ������ �������
void Persone::Set(string Fam_s, string Name_s, string Otch_s)
{
    this->fam = Fam_s;
    this->name = Name_s;
    this->otch = Otch_s;
}


// ���� �������
void Persone::InpFIO()
{
    cout << "������� �������: ";
    cin >> fam;
    cout << "������� ���: ";
    cin >> name;
    cout << "������� ��������: ";
    cin >> otch;
}


// ���� �������
void Persone::DisplayInfo()
{
    cout << "���: " << fam << " " << name << " " << otch << endl;

}

// ����������� ������� ������ ��������� �� �����, ��� �������� ������� (�������, ��������, ��������)
string Persone::WhoIs()
{
    return "������� �������� �������.";
}

// ����������
Persone::~Persone()
{
    ;
}