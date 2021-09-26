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

// Обнуление полей
void Lessons::null_l()
{
    this->Name = "";
    this->Teach.set_t("", "", "");
}

// Получение данных
Lessons Lessons::get_l()
{
    return *this;
}

// Фун-ии получения данных из полей
string Lessons::get_l_N()
{
    return this->Name;
}

Teacher Lessons::get_l_T()
{
    return this->Teach;
}

// Ввод названия урока
void Lessons::inp_Less(Teacher t)
{
    cout << "Введите название предмета: ";
    cin >> Name;
    cout << endl;
    Teach = t;

}

// Вывод уроков, передаем адрес, где будет храниться информация
void Lessons::out_Less()
{
    cout << "Название предмета: " << Name << endl;
    Teach.out_Teach();
}


// Расширение динамического массива
// Указатель на старый массив, длина старого массива, во сколько раз больше новый массив
Lessons* Lessons::Extern_Less(Lessons* &old_mas, int len, int dif)
{
    Lessons* point;
    if (len > 0)
    {
        if (dif > 0)
        {
            Lessons* new_mas = new Lessons[len + dif];

            for (int i = 0; i < (len); i++)
            {
                *new_mas = *old_mas;
            }

            delete[] old_mas;

            old_mas = new_mas;
            point = old_mas;
        }
        else
            point = old_mas;
    }
    else
        point = old_mas;

    return point;
}

// Деструктор
Lessons::~Lessons()
{
    ;
}