#pragma once
#include "triangle.h"

class triangle90 : public triangle
{
public:
    triangle90()
    {
        this->name = "������������� �����������";
        this->C = 90;
    }

    triangle90(int a, int b, int c, int A, int B)
    {
        this->name = "������������� �����������";
        this->C = 90;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
    }
};