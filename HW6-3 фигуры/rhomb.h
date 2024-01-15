#pragma once
#include "parallelogram.h"
class rhomb : public parallelogram
{
public:
    rhomb()
    {
        this->name = "ромб";
        this->c = a;
        this->b = a;
        this->d = b;
    }
    rhomb(int a, int A, int B)
    {
        this->name = "ромб";
        this->a = a;
        this->c = a;
        this->b = a;
        this->d = a;
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = B;
    }

};