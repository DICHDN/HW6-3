#include "isosceles_triangle.h"

isosceles_triangle ::isosceles_triangle()
{
    this->name = "равнобедренный треугольник";
    this->c = a;
    this->C = A;
}


isosceles_triangle::isosceles_triangle(int a, int b, int A, int B)
    {
        this->name = "равнобедренный треугольник";
        this->c = a;
        this->C = A;
        this->a = a;
        this->b = b;
        this->A = A;
        this->B = B;
    }
