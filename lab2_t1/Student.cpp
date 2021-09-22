#include "Student.h"

// Очищение всех полей структуры Ученик (Student)
Student null_s()
{
    Student st;

    st.Fam = "";
    st.Name = "";
    st.Otch = "";
    Lessons L;
    Mark M;
    L = init_l("");
    M = init_m(0);
    st.i = 0;
    for (int i = 0; i < 20; i++)
    {
        st.mas_Less[i] = L;
    }

    for (int i = 0; i < 20; i++)
    {
        st.mas_Marks[i] = M;
    }

    return st;
}


// Инициализация структуры Ученик
Student init_s(string Fam, string Name, string Otch, Mark mas_m[20], Lessons mas_l[20])
{
    Student st;
    st = null_s();

    st.Fam = Fam;
    st.Name = Name;
    st.Otch = Otch;
    
    st.i = 0;
    
    int i = 0;
    while (st.mas_Less[i].Name != "")
    {
        st.mas_Less[i] = mas_l[i];
        i++;
        st.i++;
    }

    for (int i = 0; i < 20; i++)
    {
        st.mas_Marks[i] = mas_m[i];
    }

    return st;
}

// Ввод ФИО ученика в структуру
Student inp_FIO_Stud()
{
    Student st;
    st = null_s();
    cout << "Введите Фамилию ученика: ";
    cin >> st.Fam;
    cout << "Введите Имя ученика: ";
    cin >> st.Name;
    cout << "Введите Отчество ученика: ";
    cin >> st.Otch;

    return st;
}

// Добавление к ученику урока
// 0 - не удачно, 1 - удачно
int add_Less_to_Stud(Student& st, Lessons& ls)
{
    int fl = 0;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (st.mas_Less[i].Name == "")
        {
            st.mas_Less[i] = ls;
            fl = 1;
        }
    }

    return fl;
}

// Добавление к ученику урока и оценки
// 0 - не удачно, 1 - удачно
int add_LM_to_Stud(Student& st, Lessons& ls, Mark& m)
{
    int fl = 0;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (st.mas_Less[i].Name == "")
        {
            st.mas_Less[i] = ls;
            st.mas_Marks[i] = m;
            fl = 1;
        }
    }

    return fl;
}

// Добавление к ученику оценки к конкретному предмету
// 0 - не удачно, 1 - удачно
int add_Mark_to_Stud(Student& st, Lessons& ls, Mark& m)
{
    int fl = 0;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (st.mas_Less[i].Name == ls.Name)
        {
            if (st.mas_Less[i].Teach.Fam == ls.Teach.Fam)
            {
                if (st.mas_Less[i].Teach.Name == ls.Teach.Name)
                {
                    if (st.mas_Less[i].Teach.Otch == ls.Teach.Otch)
                    {
                        st.mas_Marks[i] = m;
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
void out_Stud(Student st, int fl_out)
{
    cout << "ФИО ученика: " << st.Fam << " " << st.Name << " " << st.Otch << endl;

    if (fl_out == 0)
    {
        cout << "Уроки:" << endl;
        for (int i = 0; i < 20; i++)
        {
            out_Less(st.mas_Less[i]);
        }
        cout << "Оценки:" << endl;
        for (int i = 0; i < 20; i++)
        {
            st.mas_Marks[i];
        }
    }
    else
    {
        cout << "Уроки:" << endl;
        int i = 0;
        while (st.mas_Less[i].Name != "")
        {
            cout << " * " << st.mas_Less[i].Name << " * " << st.mas_Marks[i].Value << " * " << endl;
            i++;
        }
    }
}


// Разные приветствия
void hel1(Student st)
{
    cout << "Здравствуйте, я " << st.Name << "!" << endl;
}

void hel2(Student st)
{
    cout  << st.Name << " приветствует вас!" << endl;
}

void hel3(Student st)
{
    cout << "Всем привет, я " << st.Name << "!" << endl;
}