#include "Teacher.h"

// Конструктор
Teacher::Teacher()
{
    this->fam = "";
    this->name = "";
    this->otch = "";
}

// Конструктор с параметрами
Teacher::Teacher(string Fam, string Name, string Otch) : Persone(Fam, Name, Otch)
{
    //this->fam = Fam;
    //this->name = Name;
    //this->otch = Otch;
}

/*
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

// Установить фамилию
void Teacher::SetFam(string Fam)
{
    this->fam = Fam;
}

// Установить имя
void Teacher::SetName(string Name)
{
    this->name = Name;
}

// Установить отчество
void Teacher::SetOtch(string Otch)
{
    this->otch = Otch;
}
*/

// Инициализация класса Учитель
/*
void Teacher::Set(string Fam_s, string Name_s, string Otch_s)
{
    this->fam = Fam_s;
    this->name = Name_s;
    this->otch = Otch_s;
}
*/

// Ввод учителя
void Teacher::InpFIO()
{
    //cout << "Введите Фамилию учителя: ";
    //cin >> fam;
    //cout << "Введите имя учителя: ";
    //cin >> name;
    //cout << "Введите отчество учителя: ";
    //cin >> otch;

    cout << "Ввод учителя:" << endl;
    Persone::InpFIO();
}

// Ввод учителя
void Teacher::DisplayInfo()
{
    cout << "ФИО учителя: " << this->fam << " " << this->name << " " << this->otch << endl;

}

// Обработка строк
/*
void Teacher::AdditionSapces()
{
    this->fam = fam + "  ";
    this->name = name + "  ";
    this->otch = otch + "  ";
}
*/

// Перегрузка оператора '=' (Teacher = Persone)
Teacher& Teacher::operator=(Persone& persone)
{
    this->fam = persone.GetFam();
    this->name = persone.GetName();
    this->otch = persone.GetOtch();

    return *this;
}

// Расширение действий оператора <<
std::ostream& operator<< (std::ostream& out, const Teacher& teacher)
{
    // Поскольку operator<< является другом класса Teacher, то мы имеем прямой доступ к членам Teacher
    out << "ФИО учителя: " << teacher.fam << " " << teacher.name << " " << teacher.otch;

    return out;
}

// Виртуальная функция вывода сообщения на екран, кем является человек (рабочим, учителем, учеником)
string Teacher::WhoIs()
{
    return "Человек является учителем.";
}

// Деструктор
Teacher::~Teacher()
{
    ;
}