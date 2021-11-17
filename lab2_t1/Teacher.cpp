#include "Teacher.h"

// Конструктор
Teacher::Teacher()
{
    fam = "";
    name = "";
    otch = "";
}

// Конструктор с одним параметром
Teacher::Teacher(string Fam)
{
    fam = Fam;
    name = "";
    otch = "";
}

// Конструктор с параметрами
Teacher::Teacher(string Fam, string Name, string Otch)
{
    fam = Fam;
    name = Name;
    otch = Otch;
}


// Фун-ии получения данных из полей
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

// Фун-ии получения данных из полей через ссылку
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

// Инициализация класса Учитель
void Teacher::Set(string Fam_s, string Name_s, string Otch_s)
{
    this->fam = Fam_s;
    this->name = Name_s;
    this->otch = Otch_s;
}

// Ввод учителя
void Teacher::InpFIO()
{
    cout << "Введите Фамилию учителя: ";
    cin >> fam;
    cout << "Введите имя учителя: ";
    cin >> name;
    cout << "Введите отчество учителя: ";
    cin >> otch;
}

// Ввод учителя
void Teacher::DisplayInfo()
{
    cout << "ФИО учителя: " << fam << " " << name << " " << otch << endl;

}

// Обработка строк
void Teacher::AdditionSapces()
{
    fam = fam + "  ";
    name = name + "  ";
    otch = otch + "  ";
}

// Деструктор
Teacher::~Teacher()
{
    ;
}