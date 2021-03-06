#ifndef VECTOR_H
#define VECTOR_H

#include "Core.h"
#include "Variant.h"

class Vector {
public:
    Vector()
    {
        steps = 0;
    }

    Vector(s32 steps, Variant time)
    {
        Vector::steps = steps;
        Vector::time = time;
    }

    s32 steps;
    Variant time;
};

#endif
