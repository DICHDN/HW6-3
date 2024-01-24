#include "quadrilateral.h"

quadrilateral::quadrilateral()
{
    this->field1 = 4;
    this->name = "четырехугольник";
};
void quadrilateral :: get_info() 
    {
        std::cout << "Простая фигура с количеством сторн " << field1 << " - это " << name << std::endl;
        std::cout << "Стороны а=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
        std::cout << "Углы A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl;
    }
