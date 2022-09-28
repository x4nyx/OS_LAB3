#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H


#include "number.h"

class Vector {
private:
    Number x;
    Number y;
public:
    static const Vector zeroV;
    static const Vector oneV;

    Vector() {
        x = 0;
        y = 0;
    }

    Vector(Number _x, Number _y) {
        x = _x;
        y = _y;
    }

    Vector operator + (Vector vToAdd);
    Number polarR();
    Number polarF();
    void print();
};

#endif //VECTOR_VECTOR_H
