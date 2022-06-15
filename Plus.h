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
        void setCuenta(char);
        virtual void getInfo();
        friend std::ostream& operator<< (std::ostream &, Plus&);

};

#endif // PLUS_H
