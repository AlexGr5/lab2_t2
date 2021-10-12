#include "Lesson.h"

// Конструктор
Lesson::Lesson()
{
    this->Name = "";
    this->teacher.Set("", "", "");
}

// Инициализация структуры Уроки
void Lesson::Set(string Name_Less, Teacher t)
{
    Name = Name_Less;
    teacher = t;
}

// Обнуление полей
void Lesson::Null()
{
    this->Name = "";
    this->teacher.Set("", "", "");
}

// Фун-ии получения данных из полей
string Lesson::GetNameLess()
{
    return this->Name;
}

Teacher Lesson::GetTeacher()
{
    return this->teacher;
}

// Ввод названия урока
void Lesson::InpInConsol(Teacher t)
{
    cout << "Введите название предмета: ";
    cin >> Name;
    cout << endl;
    teacher = t;

}

// Вывод уроков, передаем адрес, где будет храниться информация
void Lesson::DisplayInfo()
{
    cout << "Название предмета: " << Name << endl;
    teacher.DisplayInfo();
}


// Деструктор
Lesson::~Lesson()
{
    ;
}