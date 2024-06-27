#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square: public Shape{
    protected:
        float side;
    public:
        Square();
        // ~Square();

        void setValues(float s);
        float area();
};

#endif //SQUARE_H