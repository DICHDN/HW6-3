#pragma once
#include "figura.h"

class quadrilateral : public figura
{
protected:
    int a = 10, b = 20, c = 30, d = 40;
    int A = 30, B = 40, C = 50, D = 60;
public:
    quadrilateral()
    {
        this->field1 = 4;
        this->name = "четырехугольник";
    }
    void get_info() override
    {
        std::cout << "Простая фигура с количеством сторн " << field1 << " - это " << name << std::endl;
        std::cout << "Стороны а=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
        std::cout << "Углы A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl;
    }
};