#include "circle.h"

void circle::setR(int r)
{
    m_R = r;
}
int circle::getR()
{
    return m_R;
}

void circle::setCenter(point center)
{
    m_center = center;
}
point circle::getCenter()
{
    return m_center;
}