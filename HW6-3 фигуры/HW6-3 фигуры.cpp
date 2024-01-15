#include "triangle90.h"
#include "rhomb.h"
#include "square.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"


void print_info(figura* a)
{
    a->get_info();
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    figura dot;
    triangle tri;
    quadrilateral quadro;
    triangle90 tri1;
    isosceles_triangle tri2;
    equilateral_triangle tri3;
    rectangle quadro1;
    square quadro2;
    parallelogram quadro3;
    rhomb quadro4;

    print_info(&tri);
    print_info(&tri1);
    print_info(&tri2);
    print_info(&tri3);
    print_info(&quadro);
    print_info(&quadro1);
    print_info(&quadro2);
    print_info(&quadro3);
    print_info(&quadro4);

    return 0;
}