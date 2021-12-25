#include "Persone.h"

// Конструктор
Persone::Persone()
{
    fam = "";
    name = "";
    otch = "";
}

// Конструктор с параметрами
Persone::Persone(string Fam, string Name, string Otch)
{
    fam = Fam;
    name = Name;
    otch = Otch;
}

// Фун-ии получения данных из полей
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

// Фун-ии получения данных из полей через ссылку
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

// Установить фамилию
void Persone::SetFam(string Fam)
{
    fam = Fam;
}

// Установить имя
void Persone::SetName(string Name)
{
    name = Name;
}

// Установить отчество
void Persone::SetOtch(string Otch)
{
    otch = Otch;
}

// Инициализация класса Учитель
void Persone::Set(string Fam_s, string Name_s, string Otch_s)
{
    this->fam = Fam_s;
    this->name = Name_s;
    this->otch = Otch_s;
}


// Ввод учителя
void Persone::InpFIO()
{
    cout << "Введите Фамилию: ";
    cin >> fam;
    cout << "Введите имя: ";
    cin >> name;
    cout << "Введите отчество: ";
    cin >> otch;
}


// Ввод учителя
void Persone::DisplayInfo()
{
    cout << "ФИО: " << fam << " " << name << " " << otch << endl;

}

// Виртуальная функция вывода сообщения на екран, кем является человек (рабочим, учителем, учеником)
string Persone::WhoIs()
{
    return "Человек является рабочим.";
}

// Деструктор
Persone::~Persone()
{
    ;
}