#pragma once
#include <iostream>
#include <windows.h>
#include <string>

class figura
{
protected:
    int field1;
    std::string name;
public:
    figura()
    {
        this->field1 = 0;
        this->name = "�����";
    }
    int get_sides_count()
    {
        return field1;
    }
    std::string get_name()
    {
        return name;
    }
    virtual void get_info()
    {
        std::cout << "������� ������ � ����������� ����� " << field1 << " - ��� " << name << std::endl;
    }
};