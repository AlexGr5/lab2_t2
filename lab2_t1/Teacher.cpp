#include "Teacher.h"

// Инициализация структуры Учитель
void Teacher::set_t(string Fam_s, string Name_s, string Otch_s)
{
    Fam = Fam_s;
    Name = Name_s;
    Otch = Otch_s;
}

// Получение данных
Teacher Teacher::get_t()
{
    return *this;
}

// Ввод учителя, передаем адрес, где будет храниться информация
void Teacher::inp_Teach()
{
    cout << "Введите Фамилию учителя: ";
    cin >> Fam;
    cout << "Введите имя учителя: ";
    cin >> Name;
    cout << "Введите отчество учителя: ";
    cin >> Otch;
}

// Ввод учителя, передаем адрес, где будет храниться информация
void Teacher::out_Teach()
{
    cout << "ФИО учителя: " << Fam << " " << Name << " " << Otch << endl;

}

// Расширение динамического массива
// Указатель на старый массив, длина старого массива, во сколько раз больше новый массив
Teacher* Exten_mas(Teacher* old_mas, int len, int difference)
{
    Teacher* point;
    if (len > 0)
    {
        if (difference > 0)
        {
            Teacher* new_mas = new Teacher[len + difference];

            for (int i = 0; i < (len); i++)
            {
                *new_mas = *old_mas;
            }

            delete[] old_mas;

            point = new_mas;
        }
        else
            point = old_mas;
    }
    else
        point = old_mas;

    return point;
}