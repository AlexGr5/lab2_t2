#include "Class.h"

// ������������� ��������� �����
void init_c(Class_& cl)
{
    cl.Name = "";
    cl.year = "";
    cl.i = 0;
    Student S;
    init_s(S);
    for (int i = 0; i < 32; i++)
    {
        cl.mas_Stud[i] = S;
    }
}

// ���� ������ � ��������� �����
int inp_Class_(Class_& cl/*, Student *mas[32]*/)
{
    cout << "������� �������� ������: ";
    cin >> cl.Name;
    cout << endl;
    cout << "������� ��� ��������: ";
    cin >> cl.year;
    cout << endl;

    /*
    for (int i = 0; i < 32; i++)
    {
        cl.mas_Stud[i] = *mas[i];
    }
    */

    return 0;
}

// ���������� � ������ ������
int add_St_to_Cl(Class_& cl, Student& st)
{
    int fl = 0;
    if (cl.i < 20)
    {
        cl.mas_Stud[cl.i] = st;
        cl.i++;
        fl = 1;
    }

    return fl;
}

// ���� ������ �� ��������� �����
// fl_out (0 ��� 1)
int out_Class_(Class_& cl, int fl_out)
{
    cout << "�������� ������: " << cl.Name << endl;;
    cout << "��� ��������: " << cl.year << endl;
    cout << endl;
    cout << "�������:" << endl;

    if (fl_out == 0)
    {
        int i = 0;
        while (cl.mas_Stud[i].Fam != "")
        {
            out_Stud(cl.mas_Stud[i], 0);
            i++;
        }
    }
    else
    {
        int i = 0;
        while (cl.mas_Stud[i].Fam != "")
        {
            out_Stud(cl.mas_Stud[i], 1);
            i++;
        }
    }

    return 0;
}

// ������� �� ���������� ������ �������� � ������
int Best_Stud_inClass(Class_& cl)
{
    double mas_m[32];
    int exit = 0;

    for (int i = 0; i < 32; i++)
    {
        mas_m[i] = 0;
    }

    int i = 0;
    int k = 0;
    int sum = 0;
    while (cl.mas_Stud[i].Fam != "")
    {
        int j = 0;
        k = 0;
        sum = 0;
        while (cl.mas_Stud[i].mas_Less[j].Name != "")
        {
            sum += cl.mas_Stud[i].mas_Marks[j].Value;
            k++;
            j++;
        }
        mas_m[i] = double(sum) / k;
        i++;
    }

    if (i == 0)
        exit = -1;
    else
    {
        double maxM = 0;
        maxM = mas_m[0];
        for (int j = 0; j < i; j++)
        {
            if (maxM < mas_m[j])
                maxM = mas_m[j];
        }

        for (int j = 0; j < i; j++)
        {
            if (mas_m[j] == maxM)
                out_Stud(cl.mas_Stud[j], 1);
        }
    }

    return exit;
}

// ������� �� ���������� ������ �������� � ������
int Bed_Stud_inClass(Class_& cl)
{
    double mas_m[32];
    int exit = 0;

    for (int i = 0; i < 32; i++)
    {
        mas_m[i] = 0;
    }

    int i = 0;
    int k = 0;
    int sum = 0;
    while (cl.mas_Stud[i].Fam != "")
    {
        int j = 0;
        k = 0;
        sum = 0;
        while (cl.mas_Stud[i].mas_Less[j].Name != "")
        {
            sum += cl.mas_Stud[i].mas_Marks[j].Value;
            k++;
            j++;
        }
        mas_m[i] = double(sum) / k;
        i++;
    }

    if (i == 0)
        exit = -1;
    else
    {
        double minM = 0;
        minM = mas_m[0];
        for (int j = 0; j < i; j++)
        {
            if (minM > mas_m[j])
                minM = mas_m[j];
        }

        for (int j = 0; j < i; j++)
        {
            if (mas_m[j] == minM)
                out_Stud(cl.mas_Stud[j], 1);
        }
    }

    return exit;
}