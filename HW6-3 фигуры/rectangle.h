#pragma once
#include "quadrilateral.h"

class rectangle : public quadrilateral
{
public:
    rectangle()
    {
        this->name = "прямоугольник";
        this->c = a;
        this->d = b;
        this->A = 90;
        this->B = A;
        this->C = A;
        this->D = A;
    }

    rectangle(int a, int b)
    {
        this->name = "прямоугольник";
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = 90;
        this->B = A;
        this->C = A;
        this->D = A;
    }

};