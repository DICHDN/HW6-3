#pragma once
#include "rectangle.h"

class square : public rectangle
{
public:
    square()
    {
        this->name = "квадрат";
        this->c = a;
        this->b = a;
        this->d = a;

    }

    square(int a)
    {
        this->name = "квадрат";
        this->a = a;
        this->c = a;
        this->b = a;
        this->d = a;
    }

};