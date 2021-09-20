#include "Teacher.h"

// Инициализация структуры Учитель
Teacher init_t(string Fam, string Name, string Otch)
{
    Teacher t;
    t.Fam = Fam;
    t.Name = Name;
    t.Otch = Otch;

    return t;
}

// Ввод учителя, передаем адрес, где будет храниться информация
Teacher inp_Teach()
{
    Teacher t;
    t = init_t("", "", "");
    cout << "Введите Фамилию учителя: ";
    cin >> t.Fam;
    cout << "Введите имя учителя: ";
    cin >> t.Name;
    cout << "Введите отчество учителя: ";
    cin >> t.Otch;

    return t;
}

// Ввод учителя, передаем адрес, где будет храниться информация
void out_Teach(Teacher t)
{
    cout << "ФИО учителя: " << t.Fam << " " << t.Name << " " << t.Otch << endl;

}