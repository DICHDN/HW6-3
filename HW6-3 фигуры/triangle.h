#pragma once
#include "figura.h"

class triangle : public figura
{
protected:
    int a = 10, b = 20, c = 30;
    int A = 30, B = 70, C = 80;
public:
    triangle()
    {
        this->field1 = 3;
        this->name = "треугольник";
    }
    triangle(int a, int b, int c, int A, int B, int C)
    {
        this->field1 = 3;
        this->name = "треугольник";
        this->C = 90;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;

    }
    void get_info() override
    {
        std::cout << "Простая фигура с количеством сторн " << field1 << " - это " << name << std::endl;
        std::cout << "Стороны а=" << a << ", b=" << b << ", c=" << c << std::endl;
        std::cout << "Углы A=" << A << ", B=" << B << ", C=" << C << std::endl;
    }
};