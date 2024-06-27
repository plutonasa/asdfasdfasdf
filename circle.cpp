#include <stdio.h>
#include "circle.h"

Circle::Circle():
    radius(0)
    {}

void Circle::setValues(float r, float){
    radius = r;
}
float Circle::area() const{
    return M_PI * pow(radius,2);
}
