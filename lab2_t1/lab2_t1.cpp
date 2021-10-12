// lab2_t1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Class.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    cout << "========================Тест класса Учитель===========================" << endl;
    Teacher t_Chem;
    Teacher* t_Biology = new Teacher;

    t_Chem.Set("", "", "");
    t_Biology->Set("", "", "");

    cout << "Введите ФИО 2-ух учителей:" << endl;
    cout << endl;
    t_Chem.InpFIO();
    t_Chem.DisplayInfo();

    cout << endl;

    t_Biology->InpFIO();
    (*t_Biology).DisplayInfo();
    cout << "===================================================" << endl;

    cout << endl;
    cout << endl;

    cout << "========================Тест класса Уроки===========================" << endl;
    Lesson Chem;
    Lesson* Biology = new Lesson;

    Chem.Null();
    (*Biology).Null();

    cout << "Введите 2 урока:" << endl;
    cout << endl;
    cout << "Для учителя - ";
    t_Chem.DisplayInfo();
    Chem.InpInConsol(t_Chem);
    cout << "Вывод:" << endl;
    Chem.DisplayInfo();

    cout << endl;

    cout << "Для учителя - ";
    (*t_Biology).DisplayInfo();
    Biology->InpInConsol(*t_Biology);
    cout << "Вывод:" << endl;
    Biology->DisplayInfo();
    cout << "===================================================" << endl;

    cout << endl;
    cout << endl;

    cout << "=======================Тест класса Ученик и Оценки============================" << endl;
    Student st1;
    Student* st2 = new Student;
    Student st3;

    st1.Null();
    (*st2).Null();
    st3.Null();

    cout << "Введите 3 ученика:" << endl;
    cout << endl;
    cout << "Первый ученик:" << endl;
    st1.InpStudFIO();

    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    cout << endl;
    Chem.DisplayInfo();
    string str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (st1.AddLess(Chem))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr.Set(0);
            mr.Set(stoi(str));
            if ((mr.Get() >= 1) || (mr.Get() <= 5))
            {
                if (st1.AddMark(Chem, mr))
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
    st1.DisplayShortInfo();

    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    cout << endl;
    Biology->DisplayInfo();
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (st1.AddLess(*Biology))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr.Set(0);
            mr.Set(stoi(str));
            if ((mr.Get() >= 1) || (mr.Get() <= 5))
            {
                if (st1.AddMark(*Biology, mr))
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
    st1.DisplayShortInfo();

    cout << endl;
    cout << "Второй ученик:" << endl;
    st2->InpStudFIO();
    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    Chem.DisplayInfo();
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (st2->AddLess(Chem))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr.Set(0);
            mr.Set(stoi(str));
            if ((mr.Get() >= 1) || (mr.Get() <= 5))
            {
                if ((*st2).AddMark(Chem, mr))
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
    (*st2).DisplayShortInfo();

    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    cout << endl;
    (*Biology).DisplayInfo();
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (st2->AddLess(*Biology))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr.Set(0);
            mr.Set(stoi(str));
            if ((mr.Get() >= 1) || (mr.Get() <= 5))
            {
                if (st2->AddMark(*Biology, mr))
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
    st2->DisplayShortInfo();

    cout << endl;
    cout << "Третий ученик:" << endl;
    st3.InpStudFIO();
    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    Chem.DisplayInfo();
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (st3.AddLess(Chem))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr.Set(0);
            mr.Set(stoi(str));
            if ((mr.Get() >= 1) || (mr.Get() <= 5))
            {
                if (st3.AddMark(Chem, mr))
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
    st3.DisplayShortInfo();

    cout << endl;
    cout << "Выберите, какие уроки у первого ученика:" << endl;
    cout << endl;
    Biology->DisplayInfo();
    str = "";
    cout << "Добавить этот предмет ученику? (д - добавить, другой набор символов - нет): ";
    cin >> str;
    if (str == "д")
    {
        if (st3.AddLess(*Biology))
        {
            cout << "Урок добавлен!" << endl;
            cout << endl;
            cout << "Добавить оценку (1,2,3,4,5 - добавить, другой набор символов - нет):" << endl;
            str = "";
            cin >> str;
            Mark mr;
            mr.Set(0);
            mr.Set(stoi(str));
            if ((mr.Get() >= 1) || (mr.Get() <= 5))
            {
                if (st3.AddMark(*Biology, mr))
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
    st3.DisplayShortInfo();



    cout << "===================================================" << endl;

    cout << endl;
    cout << endl;

    cout << "=======================Тест класса Класс============================" << endl;
    cout << "Создайте 2 класса учеников:" << endl;
    cout << endl;
    MyClass cl1;
    MyClass* cl2 = new MyClass;

    cl1.Null();
    (*cl2).Null();

    cout << "Введите данные для первого класса" << endl;
    cl1.InpNameYear();
    cout << endl;
    st1.DisplayShortInfo();
    cout << "Добавить данного ученика в класс? (д - добавить, другой набор символов - нет): ";
    str = "";
    cin >> str;
    if (str == "д")
    {
        if (cl1.AddStud(st1))
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
    st2->DisplayShortInfo();
    cout << "Добавить данного ученика в класс? (д - добавить, другой набор символов - нет): ";
    str = "";
    cin >> str;
    if (str == "д")
    {
        if (cl1.AddStud(*st2))
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
    st3.DisplayShortInfo();
    cout << "Добавить данного ученика в класс? (д - добавить, другой набор символов - нет): ";
    str = "";
    cin >> str;
    if (str == "д")
    {
        if (cl1.AddStud(st3))
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
    cl1.DisplayShortInfo();

    cout << endl;
    cout << endl;
    cout << endl;


    cout << "Введите данные для второго класса" << endl;
    cl2->InpNameYear();
    cout << endl;
    st1.DisplayShortInfo();
    cout << "Добавить данного ученика в класс? (д - добавить, другой набор символов - нет): ";
    str = "";
    cin >> str;
    if (str == "д")
    {
        if (cl2->AddStud(st1))
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
    st2->DisplayShortInfo();
    cout << "Добавить данного ученика в класс? (д - добавить, другой набор символов - нет): ";
    str = "";
    cin >> str;
    if (str == "д")
    {
        if ((*cl2).AddStud(*st2))
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
    st3.DisplayShortInfo();
    cout << "Добавить данного ученика в класс? (д - добавить, другой набор символов - нет): ";
    str = "";
    cin >> str;
    if (str == "д")
    {
        if ((*cl2).AddStud(st3))
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
    (*cl2).DisplayShortInfo();

    cout << "===================================================" << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "************************Функция поиска лучших учеников в классе***************************" << endl;

    cout << "Лучшие ученики класса №1:" << endl;
    cl1.BestStud();
    cout << endl;
    cout << endl;
    cout << "Лучшие ученики класса №2:" << endl;
    (*cl2).BestStud();

    cout << "***************************************************" << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "************************Функция поиска худших учеников в классе***************************" << endl;

    cout << "Худшие ученики класса №1:" << endl;
    cl1.BedStud();
    cout << endl;
    cout << endl;
    cout << "Худшие ученики класса №2:" << endl;
    cl2->BedStud();

    cout << "***************************************************" << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "*************************Динамический массив объектов класса Ученик**************************" << endl;

    Student* mas_s = new Student[3];

    mas_s[0] = st1;
    mas_s[1] = *st2;
    mas_s[2] = st3;

    for (int i = 0; i < 3; i++)
        mas_s[i].DisplayShortInfo();

    Mark m1;
    m1.Set(5);
    cout << "***************************************************" << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "*************************Массив динамических объектов класса Ученик**************************" << endl;

    Mark mas_M[20];
    Lesson mas_L[20];
    string Fam, Name, Otch;
    Teacher teach;
    for (int i = 0; i < 5; i++)
    {
        Fam = "Иванова" + to_string(i);
        Name = "Марина" + to_string(i);
        Otch = "Васильвна" + to_string(i);
        teach.Set(Fam, Name, Otch);
        mas_M[i].Set(4 + i % 2);
        mas_L[i].Set("Урок" + to_string(i), teach);
    }

    Student* mas_s2[5];

    for (int i = 0; i < 5; i++)
    {
        mas_s2[i] = new Student;
        mas_s2[i]->Set("Сидоров" + to_string(i), "Николай" + to_string(i), "Генадьевич" + to_string(i), mas_M, 20, mas_L, 20);
    }

    for (int i = 0; i < 5; i++)
        mas_s2[i]->DisplayShortInfo();

    cout << "***************************************************" << endl;

    system("Pause");

    delete t_Biology;
    delete Biology;
    delete st2;
    delete cl2;
    delete[] mas_s;
}

