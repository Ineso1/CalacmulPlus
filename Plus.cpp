#include "Plus.h"

Plus::Plus(){
    cuenta = '0';
}

Plus::Plus(char cuenta){
    this-> cuenta = cuenta;
}

char Plus::getCuenta(){
    return cuenta;
}

void Plus::setCuenta(char cuenta){
    this -> cuenta = cuenta;
}

void Plus::getInfo(){
    std::cout<< std::endl;
}

std::ostream &operator << (std::ostream & salida, Plus& p){
    salida << "\n" << p.getCuenta() << "\n";
    return salida;
}