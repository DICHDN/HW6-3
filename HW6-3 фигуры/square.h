#pragma once
#include "rectangle.h"

class square : public rectangle
{
public:
    square()
    {
        this->name = "�������";
        this->c = a;
        this->b = a;
        this->d = a;

    }

    square(int a)
    {
        this->name = "�������";
        this->a = a;
        this->c = a;
        this->b = a;
        this->d = a;
    }

};