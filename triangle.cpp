#include <stdio.h>
#include "triangle.h"

Triangle::Triangle():
    base(0),
    height(0)
    {}

void Triangle::setValues(float b, float h){
    base = b;
    height = h;
}
float Triangle::area() const{
    return (base * height)/2.0;
}
