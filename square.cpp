#include <stdio.h>
#include "square.h"

Square::Square():
    side(0)
    {}

void Square::setValues(float s, float){
    side = s;
}

float Square::area() const{
    return (side * side);
}
