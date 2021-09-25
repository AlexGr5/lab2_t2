// lab2_t1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Class.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    cout << "========================Тест структуры Учитель===========================" << endl;
    Teacher t_Chem;
    Teacher* t_Biology = new Teacher;

    t_Chem.set_t("", "", "");
    t_Biology->set_t("", "", "");

    cout << "Введите ФИО 2-ух учителей:" << endl;
    cout << endl;
    t_Chem.inp_Teach();
    t_Chem.out_Teach();

    cout << endl;

    t_Biology->inp_Teach();
    (*t_Biology).out_Teach();
    cout << "===================================================" << endl;

    cout << endl;
    cout << endl;

    cout << "========================Тест структуры Уроки===========================" << endl;
    Lessons Chem;
    Lessons* Biology = new Lessons;

    Chem.null_l();
    (*Biology).null_l();

    cout << "Введите 2 урока:" << endl;
    cout << endl;
    cout << "Для учителя - ";
    t_Chem.out_Teach();
    Chem.inp_Less(t_Chem);
    cout << "Вывод:" << endl;
    Chem.out_Less();

    cout << endl;

    cout << "Для учителя - ";
    (*t_Biology).out_Teach();
    Biology->inp_Less(*t_Biology);
    cout << "Вывод:" << endl;
    Biology->out_Less();
    cout << "===================================================" << endl;

    cout << endl;
    cout << endl;

    cout << "=======================Тест структуры Ученик и Оценки============================" << endl;
    Student st1;
    Student* st2 = new Student;
    Student st3;

    st1.null_s();
    (*st2).null_s();
    st3.null_s();

    cout << "Введите 3 ученика:" << endl;
    cout << endl;
    cout << "Первый ученик:" << endl;
    st1.inp_FIO_Stud();

    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    cout << endl;
    Chem.out_Less();
    string str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (st1.add_Less_to_Stud(Chem))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr.set_m(0);
            mr.set_m(stoi(str));
            if ((mr.get_m() >= 1) || (mr.get_m() <= 5))
            {
                if (st1.add_Mark_to_Stud(Chem, mr))
                    cout << "Оценка добавлена!" << endl;
                else
                    cout << "Оценка не добавлена!" << endl;

            }
        }
        else
            cout << "Урок не добавлен!" << endl;
    }
    else
        cout << "Урок не добавлен!" << endl;
    cout << endl;
    cout << endl;
    cout << "Вывод:" << endl;
    st1.out_Stud(1);

    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    cout << endl;
    Biology->out_Less();
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (st1.add_Less_to_Stud(*Biology))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr.set_m(0);
            mr.set_m(stoi(str));
            if ((mr.get_m() >= 1) || (mr.get_m() <= 5))
            {
                if (st1.add_Mark_to_Stud(*Biology, mr))
                    cout << "Оценка добавлена!" << endl;
                else
                    cout << "Оценка не добавлена!" << endl;

            }
        }
        else
            cout << "Урок не добавлен!" << endl;
    }
    else
        cout << "Урок не добавлен!" << endl;
    cout << endl;
    cout << endl;
    cout << "Вывод:" << endl;
    st1.out_Stud(1);

    cout << endl;
    cout << "Второй ученик:" << endl;
    st2->inp_FIO_Stud();
    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    Chem.out_Less();
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (st2->add_Less_to_Stud(Chem))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr.set_m(0);
            mr.set_m(stoi(str));
            if ((mr.get_m() >= 1) || (mr.get_m() <= 5))
            {
                if ((*st2).add_Mark_to_Stud(Chem, mr))
                    cout << "Оценка добавлена!" << endl;
                else
                    cout << "Оценка не добавлена!" << endl;

            }
        }
        else
            cout << "Урок не добавлен!" << endl;
    }
    else
        cout << "Урок не добавлен!" << endl;
    cout << endl;
    cout << endl;
    cout << "Вывод:" << endl;
    (*st2).out_Stud(1);

    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    cout << endl;
    (*Biology).out_Less();
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (st2->add_Less_to_Stud(*Biology))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr.set_m(0);
            mr.set_m(stoi(str));
            if ((mr.get_m() >= 1) || (mr.get_m() <= 5))
            {
                if (st2->add_Mark_to_Stud(*Biology, mr))
                    cout << "Оценка добавлена!" << endl;
                else
                    cout << "Оценка не добавлена!" << endl;

            }
        }
        else
            cout << "Урок не добавлен!" << endl;
    }
    else
        cout << "Урок не добавлен!" << endl;
    cout << endl;
    cout << endl;
    cout << "Вывод:" << endl;
    st2->out_Stud(1);

    cout << endl;
    cout << "Третий ученик:" << endl;
    st3.inp_FIO_Stud();
    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    Chem.out_Less();
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (st3.add_Less_to_Stud(Chem))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr.set_m(0);
            mr.set_m(stoi(str));
            if ((mr.get_m() >= 1) || (mr.get_m() <= 5))
            {
                if (st3.add_Mark_to_Stud(Chem, mr))
                    cout << "Оценка добавлена!" << endl;
                else
                    cout << "Оценка не добавлена!" << endl;

            }
        }
        else
            cout << "Урок не добавлен!" << endl;
    }
    else
        cout << "Урок не добавлен!" << endl;
    cout << endl;
    cout << endl;
    cout << "Вывод:" << endl;
    st3.out_Stud(1);

    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    cout << endl;
    Biology->out_Less();
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (st3.add_Less_to_Stud(*Biology))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr.set_m(0);
            mr.set_m(stoi(str));
            if ((mr.get_m() >= 1) || (mr.get_m() <= 5))
            {
                if (st3.add_Mark_to_Stud(*Biology, mr))
                    cout << "Оценка добавлена!" << endl;
                else
                    cout << "Оценка не добавлена!" << endl;

            }
        }
        else
            cout << "Урок не добавлен!" << endl;
    }
    else
        cout << "Урок не добавлен!" << endl;
    cout << endl;
    cout << endl;
    cout << "Вывод:" << endl;
    st3.out_Stud(1);



    cout << "===================================================" << endl;

    cout << endl;
    cout << endl;

    cout << "=======================Тест структуры Класс============================" << endl;
    cout << "Создайте 2 класса учеников:" << endl;
    cout << endl;
    Class_ cl1;
    Class_* cl2 = new Class_;

    cl1 = null_c();
    *cl2 = null_c();

    cout << "Введите данные для первого класса" << endl;
    cl1 = inp_Class_();
    cout << endl;
    st1.out_Stud(1);
    cout << "Добавить данного ученика в класс? (д - добавить, другой набор символов - нет): ";
    str = "";
    cin >> str;
    if (str == "д")
    {
        if (add_St_to_Cl(cl1, st1))
        {
            cout << "Ученик добавлен!" << endl;
            cout << endl;
        }
        else
            cout << "Ученик не добавлен!" << endl;
    }
    else
        cout << "Ученик не добавлен!" << endl;
    cout << endl;

    cout << endl;
    st2->out_Stud(1);
    cout << "Добавить данного ученика в класс? (д - добавить, другой набор символов - нет): ";
    str = "";
    cin >> str;
    if (str == "д")
    {
        if (add_St_to_Cl(cl1, *st2))
        {
            cout << "Ученик добавлен!" << endl;
            cout << endl;
        }
        else
            cout << "Ученик не добавлен!" << endl;
    }
    else
        cout << "Ученик не добавлен!" << endl;
    cout << endl;

    cout << endl;
    st3.out_Stud(1);
    cout << "Добавить данного ученика в класс? (д - добавить, другой набор символов - нет): ";
    str = "";
    cin >> str;
    if (str == "д")
    {
        if (add_St_to_Cl(cl1, st3))
        {
            cout << "Ученик добавлен!" << endl;
            cout << endl;
        }
        else
            cout << "Ученик не добавлен!" << endl;
    }
    else
        cout << "Ученик не добавлен!" << endl;
    cout << endl;
    cout << endl;
    cout << "Вывод класаа №1" << endl;
    out_Class_(cl1, 1);

    cout << endl;
    cout << endl;
    cout << endl;


    cout << "Введите данные для второго класса" << endl;
    *cl2 = inp_Class_();
    cout << endl;
    st1.out_Stud(1);
    cout << "Добавить данного ученика в класс? (д - добавить, другой набор символов - нет): ";
    str = "";
    cin >> str;
    if (str == "д")
    {
        if (add_St_to_Cl(*cl2, st1))
        {
            cout << "Ученик добавлен!" << endl;
            cout << endl;
        }
        else
            cout << "Ученик не добавлен!" << endl;
    }
    else
        cout << "Ученик не добавлен!" << endl;
    cout << endl;

    cout << endl;
    st2->out_Stud(1);
    cout << "Добавить данного ученика в класс? (д - добавить, другой набор символов - нет): ";
    str = "";
    cin >> str;
    if (str == "д")
    {
        if (add_St_to_Cl(*cl2, *st2))
        {
            cout << "Ученик добавлен!" << endl;
            cout << endl;
        }
        else
            cout << "Ученик не добавлен!" << endl;
    }
    else
        cout << "Ученик не добавлен!" << endl;
    cout << endl;

    cout << endl;
    st3.out_Stud(1);
    cout << "Добавить данного ученика в класс? (д - добавить, другой набор символов - нет): ";
    str = "";
    cin >> str;
    if (str == "д")
    {
        if (add_St_to_Cl(*cl2, st3))
        {
            cout << "Ученик добавлен!" << endl;
            cout << endl;
        }
        else
            cout << "Ученик не добавлен!" << endl;
    }
    else
        cout << "Ученик не добавлен!" << endl;
    cout << endl;
    cout << endl;
    cout << "Вывод класаа №2" << endl;
    cout << endl;
    out_Class_(*cl2, 1);

    cout << "===================================================" << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "************************Функция поиска лучших учеников в классе***************************" << endl;

    cout << "Лучшие ученики класса №1:" << endl;
    Best_Stud_inClass(cl1);
    cout << endl;
    cout << endl;
    cout << "Лучшие ученики класса №2:" << endl;
    Best_Stud_inClass(*cl2);

    cout << "***************************************************" << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "************************Функция поиска худших учеников в классе***************************" << endl;

    cout << "Худшие ученики класса №1:" << endl;
    Bed_Stud_inClass(cl1);
    cout << endl;
    cout << endl;
    cout << "Худшие ученики класса №2:" << endl;
    Bed_Stud_inClass(*cl2);

    cout << "***************************************************" << endl;


    delete& Chem;
    delete& t_Chem;
    delete Biology;
    delete t_Biology;
    delete& st1;
    delete st2;
    delete& st3;
    delete& cl1;
    delete cl2;

    system("Pause");
}

