#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

class Persone
{
protected:
    string fam = "";        // Фамилия
    string name = "";       // Имя
    string otch = "";       // Отчество

public:

    Persone();

    Persone(string Fam, string Name, string Otch);

    // Установить фамилию
    void SetFam(string Fam);

    // Установить имя
    void SetName(string Name);

    // Установить отчество
    void SetOtch(string Otch);

    // Фун-ии получения данных из полей
    string GetFam();
    string GetName();
    string GetOtch();

    // Фун-ии получения данных из полей через ссылку
    void GetFamLink(string& Fam);
    void GetNameLink(string& Name);
    void GetOtchLink(string& Otch);

    // Деструктор
    ~Persone();

    // Инициализация класса Учитель
    void Set(string Fam, string Name, string Otch);

    // Ввод учителя
    void InpFIO();

    // Ввод учителя на экран
    void DisplayInfo();

    // Виртуальная функция вывода сообщения на екран, кем является человек (рабочим, учителем, учеником)
    virtual string WhoIs();
};