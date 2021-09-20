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

    t_Chem = init_t("", "", "");
    *t_Biology = init_t("", "", "");

    cout << "Введите ФИО 2-ух учителей:" << endl;
    cout << endl;
    t_Chem = inp_Teach();
    out_Teach(t_Chem);

    cout << endl;

    *t_Biology = inp_Teach();
    out_Teach(*t_Biology);
    cout << "===================================================" << endl;

    cout << endl;
    cout << endl;

    cout << "========================Тест структуры Уроки===========================" << endl;
    Lessons Chem;
    Lessons* Biology = new Lessons;

    Chem = init_l("");
    *Biology = init_l("");

    cout << "Введите 2 урока:" << endl;
    cout << endl;
    cout << "Для учителя - ";
    out_Teach(t_Chem);
    Chem = inp_Less(t_Chem);
    cout << "Вывод:" << endl;
    out_Less(Chem);

    cout << endl;

    cout << "Для учителя - ";
    out_Teach(*t_Biology);
    *Biology = inp_Less(*t_Biology);
    cout << "Вывод:" << endl;
    out_Less(*Biology);
    cout << "===================================================" << endl;

    cout << endl;
    cout << endl;

    cout << "=======================Тест структуры Ученик и Оценки============================" << endl;
    Student st1;
    Student* st2 = new Student;
    Student st3;

    st1 = null_s();
    *st2 = null_s();
    st3 = null_s();

    cout << "Введите 3 ученика:" << endl;
    cout << endl;
    cout << "Первый ученик:" << endl;
    st1 = inp_FIO_Stud();

    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    cout << endl;
    out_Less(Chem);
    string str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (add_Less_to_Stud(st1, Chem))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr = init_m(0);
            mr.Value = stoi(str);
            if ((mr.Value >= 1) || (mr.Value <= 5))
            {
                if (add_Mark_to_Stud(st1, Chem, mr))
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
    out_Stud(st1, 1);

    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    cout << endl;
    out_Less(*Biology);
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (add_Less_to_Stud(st1, *Biology))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr = init_m(0);
            mr.Value = stoi(str);
            if ((mr.Value >= 1) || (mr.Value <= 5))
            {
                if (add_Mark_to_Stud(st1, *Biology, mr))
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
    out_Stud(st1, 1);

    cout << endl;
    cout << "Второй ученик:" << endl;
    *st2 = inp_FIO_Stud();
    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    out_Less(Chem);
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (add_Less_to_Stud(*st2, Chem))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr = init_m(0);
            mr.Value = stoi(str);
            if ((mr.Value >= 1) || (mr.Value <= 5))
            {
                if (add_Mark_to_Stud(*st2, Chem, mr))
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
    out_Stud(*st2, 1);

    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    cout << endl;
    out_Less(*Biology);
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (add_Less_to_Stud(*st2, *Biology))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr = init_m(0);
            mr.Value = stoi(str);
            if ((mr.Value >= 1) || (mr.Value <= 5))
            {
                if (add_Mark_to_Stud(*st2, *Biology, mr))
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
    out_Stud(*st2, 1);

    cout << endl;
    cout << "Третий ученик:" << endl;
    st3 = inp_FIO_Stud();
    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    out_Less(Chem);
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (add_Less_to_Stud(st3, Chem))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr = init_m(0);
            mr.Value = stoi(str);
            if ((mr.Value >= 1) || (mr.Value <= 5))
            {
                if (add_Mark_to_Stud(st3, Chem, mr))
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
    out_Stud(st3, 1);

    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    cout << endl;
    out_Less(*Biology);
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (add_Less_to_Stud(st3, *Biology))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr = init_m(0);
            mr.Value = stoi(str);
            if ((mr.Value >= 1) || (mr.Value <= 5))
            {
                if (add_Mark_to_Stud(st3, *Biology, mr))
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
    out_Stud(st3, 1);



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
    out_Stud(st1, 1);
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
    out_Stud(*st2, 1);
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
    out_Stud(st3, 1);
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
    out_Stud(st1, 1);
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
    out_Stud(*st2, 1);
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
    out_Stud(st3, 1);
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
}

