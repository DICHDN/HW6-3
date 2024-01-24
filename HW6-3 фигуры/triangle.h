#pragma once
#include "figura.h"

class triangle : public figura
{
protected:
    int a = 10, b = 20, c = 30;
    int A = 30, B = 70, C = 80;
public:
    triangle();
    triangle(int a, int b, int c, int A, int B, int C);
    void get_info() override;
};