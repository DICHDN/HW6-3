#include "quadrilateral.h"

quadrilateral::quadrilateral()
{
    this->field1 = 4;
    this->name = "���������������";
};
void quadrilateral :: get_info() 
    {
        std::cout << "������� ������ � ����������� ����� " << field1 << " - ��� " << name << std::endl;
        std::cout << "������� �=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
        std::cout << "���� A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl;
    }
