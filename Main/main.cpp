#include <iostream>
#include "vector.h"
#include "number.h"

int main()
{
    Number a;
    a = 5;
    a.print();
    std::cout << std::endl;

    Number b(7);
    Number c;
    c = a + b;
    c.print();
    std::cout << std::endl;
    c = a - b;
    c.print();
    std::cout << std::endl;
    c = a * b;
    c.print();
    std::cout << std::endl;
    c = a / b;
    c.print();
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    Vector z(a, b);
    z.print();
    std::cout << std::endl;
    z = z + Vector::oneV;
    z.print();
    std::cout << std::endl;
    z.polarR().print();
    std::cout << std::endl;
    z.polarF().print();
    std::cout << std::endl;
    return 0;
}