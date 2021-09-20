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

    init_t(t_Chem);
    init_t(*t_Biology);

    cout << "Введите ФИО 2-ух учителей:" << endl;
    cout << endl;
    inp_Teach(t_Chem);
    out_Teach(t_Chem);

    cout << endl;

    inp_Teach(*t_Biology);
    out_Teach(*t_Biology);
    cout << "===================================================" << endl;

    cout << endl;
    cout << endl;

    cout << "========================Тест структуры Уроки===========================" << endl;
    Lessons Chem;
    Lessons* Biology = new Lessons;

    init_l(Chem);
    init_l(*Biology);

    cout << "Введите 2 урока:" << endl;
    cout << endl;
    cout << "Для учителя - ";
    out_Teach(t_Chem);
    inp_Less(Chem, t_Chem);
    cout << "Вывод:" << endl;
    out_Less(Chem);

    cout << endl;

    cout << "Для учителя - ";
    out_Teach(*t_Biology);
    inp_Less(*Biology, *t_Biology);
    cout << "Вывод:" << endl;
    out_Less(*Biology);
    cout << "===================================================" << endl;

    cout << endl;
    cout << endl;

    cout << "=======================Тест структуры Ученик и Оценки============================" << endl;
    Student st1;
    Student* st2 = new Student;
    Student st3;

    init_s(st1);
    init_s(*st2);
    init_s(st3);

    cout << "Введите 3 ученика:" << endl;
    cout << endl;
    cout << "Первый ученик:" << endl;
    inp_FIO_Stud(st1);

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
            init_m(mr);
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
            init_m(mr);
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
    inp_FIO_Stud(*st2);
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
            init_m(mr);
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
            init_m(mr);
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
    inp_FIO_Stud(st3);
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
            init_m(mr);
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
            init_m(mr);
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

    init_c(cl1);
    init_c(*cl2);

    cout << "Введите данные для первого класса" << endl;
    inp_Class_(cl1);
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
    inp_Class_(*cl2);
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

