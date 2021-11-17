#include "Lesson.h"

// Конструктор
Lesson::Lesson()
{
    this->nameLesson = "";
    this->teacher.Set("", "", "");
}

// Конструктор с одним параметром
Lesson::Lesson(string NameLesson)
{
    nameLesson = NameLesson;
    teacher.Set("", "", "");
}

// Конструктор с параметрами
Lesson::Lesson(string Name_Less, Teacher Teacher1)
{
    nameLesson = Name_Less;
    teacher = Teacher1;
}

// Установить название урока
void Lesson::SetLesson(string NameLesson)
{
    nameLesson = NameLesson;
}

// Установить учителя
void Lesson::SetTeacher(Teacher Teacher1)
{
    teacher = Teacher1;
}

// Инициализация класса Уроки
void Lesson::Set(string Name_Less, Teacher t)
{
    nameLesson = Name_Less;
    teacher = t;
}

// Обнуление полей
void Lesson::Null()
{
    this->nameLesson = "";
    this->teacher.Set("", "", "");
}

// Фун-ии получения данных из полей
string Lesson::GetNameLess()
{
    return this->nameLesson;
}

Teacher Lesson::GetTeacher()
{
    return this->teacher;
}

// Ввод названия урока
void Lesson::InpInConsol(Teacher t)
{
    cout << "Введите название предмета: ";
    cin >> nameLesson;
    cout << endl;
    teacher = t;

}

// Вывод уроков, передаем адрес, где будет храниться информация
void Lesson::DisplayInfo()
{
    cout << "Название предмета: " << nameLesson << endl;
    teacher.DisplayInfo();
}


// Деструктор
Lesson::~Lesson()
{
    ;
}