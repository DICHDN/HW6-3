#pragma once
#include "figura.h"

class quadrilateral : public figura
{
protected:
    int a = 10, b = 20, c = 30, d = 40;
    int A = 30, B = 40, C = 50, D = 60;
public:
    quadrilateral();
    void get_info() override;
    
};