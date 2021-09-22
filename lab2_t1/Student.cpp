#include "Student.h"

// �������� ���� ����� ��������� ������ (Student)
Student null_s()
{
    Student st;

    st.Fam = "";
    st.Name = "";
    st.Otch = "";
    Lessons L;
    Mark M;
    L = init_l("");
    M = init_m(0);
    st.i = 0;
    for (int i = 0; i < 20; i++)
    {
        st.mas_Less[i] = L;
    }

    for (int i = 0; i < 20; i++)
    {
        st.mas_Marks[i] = M;
    }

    return st;
}


// ������������� ��������� ������
Student init_s(string Fam, string Name, string Otch, Mark mas_m[20], Lessons mas_l[20])
{
    Student st;
    st = null_s();

    st.Fam = Fam;
    st.Name = Name;
    st.Otch = Otch;
    
    st.i = 0;
    
    int i = 0;
    while (st.mas_Less[i].Name != "")
    {
        st.mas_Less[i] = mas_l[i];
        i++;
        st.i++;
    }

    for (int i = 0; i < 20; i++)
    {
        st.mas_Marks[i] = mas_m[i];
    }

    return st;
}

// ���� ��� ������� � ���������
Student inp_FIO_Stud()
{
    Student st;
    st = null_s();
    cout << "������� ������� �������: ";
    cin >> st.Fam;
    cout << "������� ��� �������: ";
    cin >> st.Name;
    cout << "������� �������� �������: ";
    cin >> st.Otch;

    return st;
}

// ���������� � ������� �����
// 0 - �� ������, 1 - ������
int add_Less_to_Stud(Student& st, Lessons& ls)
{
    int fl = 0;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (st.mas_Less[i].Name == "")
        {
            st.mas_Less[i] = ls;
            fl = 1;
        }
    }

    return fl;
}

// ���������� � ������� ����� � ������
// 0 - �� ������, 1 - ������
int add_LM_to_Stud(Student& st, Lessons& ls, Mark& m)
{
    int fl = 0;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (st.mas_Less[i].Name == "")
        {
            st.mas_Less[i] = ls;
            st.mas_Marks[i] = m;
            fl = 1;
        }
    }

    return fl;
}

// ���������� � ������� ������ � ����������� ��������
// 0 - �� ������, 1 - ������
int add_Mark_to_Stud(Student& st, Lessons& ls, Mark& m)
{
    int fl = 0;

    for (int i = 0; (i < 20) && (fl == 0); i++)
    {
        if (st.mas_Less[i].Name == ls.Name)
        {
            if (st.mas_Less[i].Teach.Fam == ls.Teach.Fam)
            {
                if (st.mas_Less[i].Teach.Name == ls.Teach.Name)
                {
                    if (st.mas_Less[i].Teach.Otch == ls.Teach.Otch)
                    {
                        st.mas_Marks[i] = m;
                        fl = 1;
                    }
                }
            }
        }
    }

    return fl;
}

// ����� �������
// �������� ������� � ���� ��� ���������� ������ ������ � ������
// fl_out (0 ��� 1)
void out_Stud(Student st, int fl_out)
{
    cout << "��� �������: " << st.Fam << " " << st.Name << " " << st.Otch << endl;

    if (fl_out == 0)
    {
        cout << "�����:" << endl;
        for (int i = 0; i < 20; i++)
        {
            out_Less(st.mas_Less[i]);
        }
        cout << "������:" << endl;
        for (int i = 0; i < 20; i++)
        {
            st.mas_Marks[i];
        }
    }
    else
    {
        cout << "�����:" << endl;
        int i = 0;
        while (st.mas_Less[i].Name != "")
        {
            cout << " * " << st.mas_Less[i].Name << " * " << st.mas_Marks[i].Value << " * " << endl;
            i++;
        }
    }
}


// ������ �����������
void hel1(Student st)
{
    cout << "������������, � " << st.Name << "!" << endl;
}

void hel2(Student st)
{
    cout  << st.Name << " ������������ ���!" << endl;
}

void hel3(Student st)
{
    cout << "���� ������, � " << st.Name << "!" << endl;
}