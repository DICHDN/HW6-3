#include "triangle90.h"

triangle90::triangle90()
{
    this->name = "прямоугольный треугольник";
    this->C = 90;
};

triangle90::triangle90(int a, int b, int c, int A, int B)
{
    this->name = "прямоугольный треугольник";
    this->C = 90;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
};
