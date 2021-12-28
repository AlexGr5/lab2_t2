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
    Mark::Mark()
    {
        value = 0;
    }

    // ����������� � ����������
    Mark::Mark(T value)
    {
        this->value = 0;
        if (IsRightMark(value))
            this->value = value;
    }

    // ������������� ��������� ������
    void Mark::Set(T v)
    {
        this->value = 0;
        if (IsRightMark(v))
            this->value = v;
    }

    // ��������� ������
    T Mark::Get()
    {
        return this->value;
    }

    // ��������� ������ ����� ���������
    void Mark::GetPoint(T* Value)
    {
        *Value = value;
    }

    // ���� ������ � ����� ������
    void Mark::InpMark()
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
    void Mark::DisplayInfo()
    {
        cout << "������: " << value << endl;

    }


    // ���������� �������� � ����� ������
    void Mark::Add(void)
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
    void Mark::reprint(void)
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
    void Mark::NewList()
    {
        lastMark = NULL;
    }

    // ����������
    Mark::~Mark()
    {
        ;
    }

    // ��������� Mark + int
    Mark operator+(const Mark& mark, T value)
    {
        if (mark.value + value > 5)
            return mark;
        else
            return Mark(mark.value + value);
    }

    // ���������� ����������� ��������� '++'
    Mark& Mark::operator++()
    {
        value += 1;
        return *this;
    }

    // ���������� ������������ ��������� '++'
    Mark Mark::operator++ (int)
    {
        Mark m1 = *this;
        ++* this;
        return m1;
    }

    // �������� ����� �� ���������� ��� ������
    bool Mark::IsRightMark(int mark)
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

    // ������������� �����
    //Mark ShallowCopy();

    // �������� �����
    //Mark DeepCopy();

};

