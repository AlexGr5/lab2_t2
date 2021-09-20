#include "Teacher.h"

// Инициализация структуры Учитель
void init_t(Teacher& t)
{
    t.Fam = "";
    t.Name = "";
    t.Otch = "";
}

// Ввод учителя, передаем адрес, где будет храниться информация
void inp_Teach(Teacher& t)
{
    cout << "Введите Фамилию учителя: ";
    cin >> t.Fam;
    cout << "Введите имя учителя: ";
    cin >> t.Name;
    cout << "Введите отчество учителя: ";
    cin >> t.Otch;
}

// Ввод учителя, передаем адрес, где будет храниться информация
void out_Teach(Teacher& t)
{
    cout << "ФИО учителя: " << t.Fam << " " << t.Name << " " << t.Otch << endl;

}