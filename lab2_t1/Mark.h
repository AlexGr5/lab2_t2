#pragma once

#include "Lesson.h"

template <class T> // ��� ������ ������ � T ������ ������������ (�������������) ���� ������

// ����� ������
class Mark
{
private:
    //int value = 0;          // ������

    T value = 0;          // ������

    static Mark* lastMark;  // ����� ���������� �������� ������
    Mark* prev;             // �� ���������� ������� ������
    Mark* next;             // �� ��������� ������� ������

public:

    // �����������
    Mark()
    {
        value = 0;
    }

    // ����������� � ����������
    Mark(T value)
    {
        this->value = 0;
        //if (IsRightMark(value))
            this->value = value;
    }

    // ������������� ��������� ������
    void Set(T v)
    {
        this->value = 0;
        //if (IsRightMark(v))
            this->value = v;
    }

    // ��������� ������
    T Get()
    {
        return this->value;
    }

    // ��������� ������ ����� ���������
    void GetPoint(T* Value)
    {
        *Value = value;
    }

    // ���� ������ � ����� ������
    void InpMark()
    {
        string mark;
        cout << "������� ������: ";
        cin >> mark;

        try                                                 // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch          
        {
            for (int i = 0; i < mark.length(); i++)
            {
                if ((mark[i] < '0') || (mark[i] > '9'))
                    throw "It string is not number!";       // ������������� ���������� ���� const char*
            }
            Set(stof(T));
        }
        catch (const char* exception)                       // ���������� ���������� ���� const char*
        {
            std::cerr << "Error: " << exception << '\n';
            //std::cerr << "Error: " << "It string is not number!" << '\n';
        }
        cout << endl;
    }

    // ����� ������ �� ������
    void DisplayInfo()
    {
        cout << "������: " << value << endl;

    }


    // ���������� �������� � ����� ������
    void Add(void)
    {
        if (lastMark == NULL)
            this->prev = NULL;
        else
        {
            lastMark->next = this;
            prev = lastMark;
        }
        lastMark = this;
        this->next = NULL;
    }

    // ����� �� ������� ����������� ������
    void reprint(void)
    {
        Mark* uk;   // ��������������� ���������
        uk = lastMark;
        if (uk == NULL)
        {
            cout << "������ ����!";
            return;
        }
        else
            cout << "\n���������� ������:\n";

        // ���� ������ � �������� ������� �������� ��������� ������:
        while (uk != NULL)
        {
            cout << uk->value << '\t';
            uk = uk->prev;
        }
    }

    // �������� ������ ������
    void NewList()
    {
        lastMark = NULL;
    }

    // ����������
    ~Mark()
    {
        ;
    }

    /*
    // ��������� Mark + int
    Mark operator+(const Mark& mark, T value)
    {
        if (mark.value + value > 5)
            return mark;
        else
            return Mark(mark.value + value);
    }

    // ���������� ����������� ��������� '++'
    Mark& operator++()
    {
        value += 1;
        return *this;
    }

    // ���������� ������������ ��������� '++'
    Mark operator++ (int)
    {
        Mark m1 = *this;
        ++* this;
        return m1;
    }

    // �������� ����� �� ���������� ��� ������
    bool IsRightMark(int mark)
    {
        bool res = true;
        try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
        {
            if (mark < 0 || mark > 5)           // ���� ������������ ���� �������� �����, �� ������������� ����������
                throw "Incorrect value.";       // ������������� ���������� ���� const char*
        }
        catch (const char* exception)           // ���������� ���������� ���� const char*
        {
            std::cerr << "Error: " << exception << '\n';
            res = false;
            return res;
        }

        return res;
    }
    */

    // ������������� �����
    //Mark ShallowCopy();

    // �������� �����
    //Mark DeepCopy();

};

