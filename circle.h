#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <math.h>

class Circle: public Shape{
    protected:
        float radius;
    public:
        Circle();
        // ~Circle();

        void setValues(float r);
        float area();
};

#endif //CIRCLE_H