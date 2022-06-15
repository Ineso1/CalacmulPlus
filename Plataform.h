#ifndef PLATAFORM_H
#define PLATAFORM_H
#include <vector>
#include <iostream>
#include "Plus.h"
#include "Movie.h"
#include "Serie.h"
#include "Episode.h"
#include <fstream>

class Plataform{
    private:
        std::vector<Plus*> vecPlataform;
    public:
        Plataform();
        //virtual ~Plataform();
        Plus* &operator[](int);
        void loadPlataformA();
        void loadPlataformB();

        void printNames();
        Movie upCastPlus_Movie(Plus*&);
        Serie upCastPlus_Serie(Plus*&);
};

#endif // PLATAFORM_H
