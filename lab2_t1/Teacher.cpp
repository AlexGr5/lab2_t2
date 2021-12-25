#include "Teacher.h"

// �����������
Teacher::Teacher()
{
    this->fam = "";
    this->name = "";
    this->otch = "";
}

// ����������� � �����������
Teacher::Teacher(string Fam, string Name, string Otch) : Persone(Fam, Name, Otch)
{
    //this->fam = Fam;
    //this->name = Name;
    //this->otch = Otch;
}

/*
// ���-�� ��������� ������ �� �����
string Teacher::GetFam()
{
    return this->fam;
}

string Teacher::GetName()
{
    return this->name;
}

string Teacher::GetOtch()
{
    return this->otch;
}

// ���-�� ��������� ������ �� ����� ����� ������
void Teacher::GetFamLink(string& Fam)
{
    Fam = this->fam;
}

void Teacher::GetNameLink(string& Name)
{
    Name = this->name;
}

void Teacher::GetOtchLink(string& Otch)
{
    Otch = this->otch;
}

// ���������� �������
void Teacher::SetFam(string Fam)
{
    this->fam = Fam;
}

// ���������� ���
void Teacher::SetName(string Name)
{
    this->name = Name;
}

// ���������� ��������
void Teacher::SetOtch(string Otch)
{
    this->otch = Otch;
}
*/

// ������������� ������ �������
/*
void Teacher::Set(string Fam_s, string Name_s, string Otch_s)
{
    this->fam = Fam_s;
    this->name = Name_s;
    this->otch = Otch_s;
}
*/

// ���� �������
void Teacher::InpFIO()
{
    //cout << "������� ������� �������: ";
    //cin >> fam;
    //cout << "������� ��� �������: ";
    //cin >> name;
    //cout << "������� �������� �������: ";
    //cin >> otch;

    cout << "���� �������:" << endl;
    Persone::InpFIO();
}

// ���� �������
void Teacher::DisplayInfo()
{
    cout << "��� �������: " << this->fam << " " << this->name << " " << this->otch << endl;

}

// ��������� �����
/*
void Teacher::AdditionSapces()
{
    this->fam = fam + "  ";
    this->name = name + "  ";
    this->otch = otch + "  ";
}
*/

// ���������� ��������� '=' (Teacher = Persone)
Teacher& Teacher::operator=(Persone& persone)
{
    this->fam = persone.GetFam();
    this->name = persone.GetName();
    this->otch = persone.GetOtch();

    return *this;
}

// ���������� �������� ��������� <<
std::ostream& operator<< (std::ostream& out, const Teacher& teacher)
{
    // ��������� operator<< �������� ������ ������ Teacher, �� �� ����� ������ ������ � ������ Teacher
    out << "��� �������: " << teacher.fam << " " << teacher.name << " " << teacher.otch;

    return out;
}

// ����������� ������� ������ ��������� �� �����, ��� �������� ������� (�������, ��������, ��������)
string Teacher::WhoIs()
{
    return "������� �������� ��������.";
}

// ����������
Teacher::~Teacher()
{
    ;
}