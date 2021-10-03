#include "Teacher.h"

// Конструктор
Teacher::Teacher()
{
    Fam = "";
    Name = "";
    Otch = "";
}


// Фун-ии получения данных из полей
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

// Инициализация структуры Учитель
void Teacher::SetTeach(string Fam_s, string Name_s, string Otch_s)
{
    this->Fam = Fam_s;
    this->Name = Name_s;
    this->Otch = Otch_s;
}

// Ввод учителя
void Teacher::InpTeachFIO()
{
    cout << "Введите Фамилию учителя: ";
    cin >> Fam;
    cout << "Введите имя учителя: ";
    cin >> Name;
    cout << "Введите отчество учителя: ";
    cin >> Otch;
}

// Ввод учителя
void Teacher::DisplayTeach()
{
    cout << "ФИО учителя: " << Fam << " " << Name << " " << Otch << endl;

}

// Деструктор
Teacher::~Teacher()
{
    ;
}