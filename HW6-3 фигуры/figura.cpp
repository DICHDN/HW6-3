#include "figura.h"

figura::figura()
{
    this->field1 = 0;
    this->name = "точка";
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
        std::cout << "ѕроста€ фигура с количеством сторн " << field1 << " - это " << name << std::endl;
    }
