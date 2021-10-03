#include "Lesson.h"

// Конструктор
Lesson::Lesson()
{
    this->Name = "";
    this->Teach.SetTeach("", "", "");
}

// Инициализация структуры Уроки
void Lesson::SetLess(string Name_Less, Teacher t)
{
    Name = Name_Less;
    Teach = t;
}

// Обнуление полей
void Lesson::NullLess()
{
    this->Name = "";
    this->Teach.SetTeach("", "", "");
}

// Фун-ии получения данных из полей
string Lesson::GetName()
{
    return this->Name;
}

Teacher Lesson::GetTeach()
{
    return this->Teach;
}

// Ввод названия урока
void Lesson::InpLessName(Teacher t)
{
    cout << "Введите название предмета: ";
    cin >> Name;
    cout << endl;
    Teach = t;

}

// Вывод уроков, передаем адрес, где будет храниться информация
void Lesson::out_Less()
{
    cout << "Название предмета: " << Name << endl;
    Teach.DisplayTeach();
}


// Деструктор
Lesson::~Lesson()
{
    ;
}