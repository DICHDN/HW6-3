#pragma once
#include "triangle.h"
class equilateral_triangle : public triangle
{
public:
    equilateral_triangle()
    {
        this->name = "равносторонний треугольник";
        this->A = 60;
        this->c = a;
        this->b = a;
        this->C = A;
        this->B = A;
        this->a = a;
    }

    equilateral_triangle(int a)
    {
        this->name = "равносторонний треугольник";
        this->A = 60;
        this->c = a;
        this->b = a;
        this->C = A;
        this->B = A;
        this->a = a;
    }
};