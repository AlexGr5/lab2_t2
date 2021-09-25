#include "Lesson.h"

// Конструктор
Lessons::Lessons()
{
    this->Name = "";
    this->Teach.set_t("", "", "");
}

// Инициализация структуры Уроки
void Lessons::set_l(string Name_Less, Teacher t)
{
    Name = Name_Less;
    Teach = t;
}

// Получение данных
Lessons Lessons::get_l()
{
    return *this;
}

// Ввод названия урока
void Lessons::inp_Less()
{
    cout << "Введите название предмета: ";
    cin >> Name;
    cout << endl;

}

// Вывод уроков, передаем адрес, где будет храниться информация
void Lessons::out_Less()
{
    cout << "Название предмета: " << Name << endl;
    Teach.out_Teach();
}

// Деструктор
Lessons::~Lessons()
{
    delete this;
}