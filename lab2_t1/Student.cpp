#include "Student.h"

// ������������� ��������� ������
void init_s(Student& st)
{
    st.Fam = "";
    st.Name = "";
    st.Otch = "";
    Lessons L;
    Mark M;
    init_l(L);
    init_m(M);
    st.i = 0;
    for (int i = 0; i < 20; i++)
    {
        st.mas_Less[i] = L;
    }

    for (int i = 0; i < 20; i++)
    {
        st.mas_Marks[i] = M;
    }
}

// ���� ������ � ��������� ������
int inp_Stud(Student& st, Mark* mas_m[20], Lessons* mas_l[20])
{
    cout << "������� ������� �������: ";
    cin >> st.Fam;
    cout << "������� ��� �������: ";
    cin >> st.Name;
    cout << "������� �������� �������: ";
    cin >> st.Otch;

    for (int i = 0; i < 20; i++)
    {
        st.mas_Less[i] = *mas_l[i];
    }

    for (int i = 0; i < 20; i++)
    {
        st.mas_Marks[i] = *mas_m[i];
    }

    return 0;
}

// ���� ��� ������� � ���������
int inp_FIO_Stud(Student& st)
{
    cout << "������� ������� �������: ";
    cin >> st.Fam;
    cout << "������� ��� �������: ";
    cin >> st.Name;
    cout << "������� �������� �������: ";
    cin >> st.Otch;

    return 0;
}