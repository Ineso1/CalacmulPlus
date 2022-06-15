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

    vector<Plus*> p1;
    Movie m1 ( 'm', "Garra", 120, "R", "Cuando_un_desafortunado_cazatalentos_de_basquetbol_encuentra", "https://www.youtube.com/watch?v=nM4iy0reaCA", 5, "Populares");
    Serie s1 ( 's', "StrangerThings", 4, "Suspenso", 5);

    Episode e1_s1 ( "Capitulo1", 50, "TV-14", "Will_es_testigo_de_algo_horroroso", "https://www.youtube.com/watch?v=Lpd6A7W4fYE", 1);
    Episode e2_s1 ( "Capitulo2", 55, "TV-14", "Lucas_Mike_y_Dustin_intentan_hablar_con", "https://www.youtube.com/watch?v=Lpd6A7W4fYE", 1);
    
    s1.agregarEpisodio(e1_s1);
    s1.agregarEpisodio(e2_s1);

    p1.push_back(new Movie());
    p1[0] = &m1;

    if(p1[0]->getCuenta() == 'm'){


        Movie *peli;
        peli = dynamic_cast<Movie *>(p1.at(0));
        cout << *peli;
    
    
    }

    else if(p1[0]->getCuenta() == 's'){
        Serie *seri;
        seri = dynamic_cast<Serie *>(p1.at(0));
        cout << *seri;
    }

    //cout << m1;
    //cout << s1;
    //cout << *p1[0];

    return 0;
    
}