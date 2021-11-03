#include "Teacher.h"

// Конструктор
Teacher::Teacher()
{
    fam = "";
    name = "";
    otch = "";
}


// Фун-ии получения данных из полей
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