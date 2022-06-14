#include <iostream>
#include <fstream>
#include <vector>
#include "Video.h"
#include "Episode.h"
#include "Movie.h"
#include "Serie.h"
#include "Plus.h"
using namespace std;

vector<Plus> catalog;


void cargarPlataforma(){
    ifstream archivo;
    archivo.open("Videos.txt");
    if (archivo.is_open()){
        char tipoVideo;
        while (archivo >> tipoVideo) {
            if (tipoVideo == 'm' ) {
                Movie peli;
                archivo >> peli;  
                catalog.push_back(peli);
            }else if (tipoVideo == 's'){
                Serie seri;
                archivo >> seri;
                catalog.push_back(seri);
                }
            else if(tipoVideo =='e'){
                Episode ep;
                archivo >> ep;
            }
            }
        }
        archivo.close();

    }



int main(){
    //Video v1; 
    //cargarPlataforma();
    //cout << v1;

    catalog.push_back(Serie("StrangerThings", 4, "Suspenso", 5, true));

    return 0;
    
}