#include "Teacher.h"

// Конструктор
Teacher::Teacher()
{
    Fam = "";
    Name = "";
    Otch = "";
}


// Фун-ии получения данных из полей
string Teacher::get_t_F()
{
    return this->Fam;
}

string Teacher::get_t_N()
{
    return this->Name;
}

string Teacher::get_t_O()
{
    return this->Otch;
}

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

// Ввод учителя
void Teacher::inp_Teach()
{
    cout << "Введите Фамилию учителя: ";
    cin >> Fam;
    cout << "Введите имя учителя: ";
    cin >> Name;
    cout << "Введите отчество учителя: ";
    cin >> Otch;
}

// Ввод учителя
void Teacher::out_Teach()
{
    cout << "ФИО учителя: " << Fam << " " << Name << " " << Otch << endl;

}

// Расширение динамического массива
// Указатель на старый массив, длина старого массива, во сколько раз больше новый массив
Teacher* Teacher::Exten_mas(Teacher* old_mas, int len, int difference)
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

// Деструктор
Teacher::~Teacher()
{
    delete this;
}