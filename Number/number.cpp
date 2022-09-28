#include "number.h"

Number Number::zero = 0;
Number Number::one = 1;

double Number::getValue() {
    return number;
}

void Number::setValue(double value) {
    number = value;
}

void Number::print() {
    std::cout << number;
}

Number sqrt(Number num) {
    return Number(sqrt(num.getValue()));
}

Number sin(Number num) {
    return Number(sin(num.getValue()));
}

Number arctg(Number num) {
    return Number(atan(num.getValue()));
}
