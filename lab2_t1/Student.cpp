#include "Student.h"

// Конструктор
Student::Student()
{
    Fam = "";
    Name = "";
    Otch = "";
    Lessons L;
    Mark M;
    L.null_l();
    M.set_m(0);
    i = 0;
    for (int i = 0; i < 20; i++)
    {
        mas_Less[i] = L;
    }

    for (int i = 0; i < 20; i++)
    {
        mas_Marks[i] = M;
    }
}

// Очищение всех полей структуры Ученик (Student)
void Student::null_s()
{

    Fam = "";
    Name = "";
    Otch = "";
    Lessons L;
    Mark M;
    L.null_l();
    M.set_m(0);
    this->i = 0;
    for (int i = 0; i < 20; i++)
    {
        mas_Less[i] = L;
    }

    for (int i = 0; i < 20; i++)
    {
        mas_Marks[i] = M;
    }
}

// Функция получения
Student Student::get_s()
{
    return *this;
}

// Функции получения значений полей
string Student::get_s_F()
{
    return this->Fam;
}

string Student::get_s_N()
{
    return this->Name;
}

string Student::get_s_O()
{
    return this->Otch;
}

Mark* Student::get_s_M()
{
    return this->mas_Marks;
}

Lessons* Student::get_s_L()
{
    return this->mas_Less;
}


// Инициализация структуры Ученик
void Student::set_s(string Fam, string Name, string Otch, Mark mas_m[20], Lessons mas_l[20])
{
    Fam = Fam;
    Name = Name;
    Otch = Otch;
    
    this->i = 0;
    
    int i = 0;
    while (mas_Less[i].get_l_N() != "")
    {
        mas_Less[i] = mas_l[i];
        i++;
        this->i++;
    }

    for (int i = 0; i < this->i; i++)
    {
        mas_Marks[i] = mas_m[i];
    }
}

// Ввод ФИО ученика в структуру
void Student::inp_FIO_Stud()
{
    cout << "Введите Фамилию ученика: ";
    cin >> Fam;
    cout << "Введите Имя ученика: ";
    cin >> Name;
    cout << "Введите Отчество ученика: ";
    cin >> Otch;
}

// Добавление к ученику урока
// 0 - не удачно, 1 - удачно
int Student::add_Less_to_Stud(Lessons ls)
{
    int fl = 0;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (mas_Less[i].get_l_N() == "")
        {
            mas_Less[i] = ls;
            fl = 1;
        }
    }

    return fl;
}

// Добавление к ученику урока и оценки
// 0 - не удачно, 1 - удачно
int Student::add_LM_to_Stud(Lessons ls, Mark m)
{
    int fl = 0;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (mas_Less[i].get_l_N() == "")
        {
            mas_Less[i] = ls;
            mas_Marks[i] = m;
            fl = 1;
        }
    }

    return fl;
}

// Добавление к ученику оценки к конкретному предмету
// 0 - не удачно, 1 - удачно
int Student::add_Mark_to_Stud(Lessons ls, Mark m)
{
    int fl = 0;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (mas_Less[i].get_l_N() == ls.get_l_N())
        {
            if (mas_Less[i].get_l_T().get_t_F() == ls.get_l_T().get_t_F())
            {
                if (mas_Less[i].get_l_T().get_t_N() == ls.get_l_T().get_t_N())
                {
                    if (mas_Less[i].get_l_T().get_t_O() == ls.get_l_T().get_t_O())
                    {
                        mas_Marks[i] = m;
                        fl = 1;
                    }
                }
            }
        }
    }

    return fl;
}

// Вывод ученика
// Передаем ученика и флаг для различного вывода уроков и оценок
// fl_out (0 или 1)
void Student::out_Stud(int fl_out)
{
    cout << "ФИО ученика: " << Fam << " " << Name << " " << Otch << endl;

    if (fl_out == 0)
    {
        cout << "Уроки:" << endl;
        for (int i = 0; i < 20; i++)
        {
            mas_Less[i].out_Less();
        }
        cout << "Оценки:" << endl;
        for (int i = 0; i < 20; i++)
        {
            mas_Marks[i];
        }
    }
    else
    {
        cout << "Уроки:" << endl;
        int i = 0;
        while (mas_Less[i].get_l_N() != "")
        {
            cout << " * " << mas_Less[i].get_l_N() << " * " << mas_Marks[i].get_m() << " * " << endl;
            i++;
        }
    }
}


// Расширение динамического массива
// Указатель на старый массив, длина старого массива, во сколько раз больше новый массив
Student* Student::Exten_Stud(Student* &old_mas, int len, int difference)
{
    Student* point;
    if (len > 0)
    {
        if (difference > 0)
        {
            Student* new_mas = new Student[len + difference];

            for (int i = 0; i < (len); i++)
            {
                *new_mas = *old_mas;
            }

            delete[] old_mas;

            old_mas = new_mas;
            point = old_mas;
        }
        else
            point = old_mas;
    }
    else
        point = old_mas;

    return point;
}

// Деструктор
Student::~Student()
{
    ;
}