#include "figura.h"

figura::figura()
{
    this->field1 = 0;
    this->name = "�����";
};
   
int figura::  get_sides_count()
    {
      return field1;
    }
std::string figura::get_name()
    {
        return name;
    }
void figura::get_info()
    {
        std::cout << "������� ������ � ����������� ����� " << field1 << " - ��� " << name << std::endl;
    }
