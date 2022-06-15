#ifndef PLUS_H
#define PLUS_H
#include <iostream>

class Plus{
    private:
        char cuenta;
    public:
        Plus();
        Plus(char);
        virtual ~Plus() {}
        char getCuenta();
};

#endif // PLUS_H
