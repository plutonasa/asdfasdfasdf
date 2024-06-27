#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle: public Shape{
    protected:
        float base;
        float height;
    public:
        Triangle();
        // ~Triangle();


        void setValues(float b, float h);
        float area();
};

#endif //TRIANGLE_H