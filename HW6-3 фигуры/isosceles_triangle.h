#pragma once
#include "triangle.h"
class isosceles_triangle :public triangle
{
public:
    isosceles_triangle()
    {
        this->name = "�������������� �����������";
        this->c = a;
        this->C = A;
    }


    isosceles_triangle(int a, int b, int A, int B)
    {
        this->name = "�������������� �����������";
        this->c = a;
        this->C = A;
        this->a = a;
        this->b = b;
        this->A = A;
        this->B = B;
    }
};