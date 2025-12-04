#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class circle
{
private:
    int m_R;
    point m_center;
public:
    void setR(int r);
    int getR();

    void setCenter(point center);
    point getCenter();
};


