#include <iostream>
#include <fstream>
#include <vector>
#include "Video.h"
#include "Episode.h"
#include "Movie.h"
#include "Serie.h"
#include "Plus.h"
#include "Plataform.h"
using namespace std;

Plataform Calakmul;

int main(){

    Calakmul.loadPlataformB();
    //Calakmul.printNames();
    cout << *Calakmul[0];
    
}