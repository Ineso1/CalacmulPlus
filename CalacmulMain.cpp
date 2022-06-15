#include <iostream>
#include <fstream>
#include <vector>
#include "Video.h"
#include "Episode.h"
#include "Movie.h"
#include "Serie.h"
#include "Plus.h"
using namespace std;

vector<Plus*> catalog;



void printCatalog(){
    for (int i = 0; i < catalog.size(); i++){
        if(catalog[i]->getCuenta() == 'm'){
            Movie *peli;
            peli = dynamic_cast<Movie *>(catalog.at(i));
            cout << *peli;
        }
        else if(catalog[i]->getCuenta() == 's'){
            Serie *seri;
            seri = dynamic_cast<Serie *>(catalog.at(i));
            cout << *seri;
        }
    }
}


void cargarPlataforma(){
    ifstream archivo;
    archivo.open("Videos.txt");
    if (archivo.is_open()){
        char tipoVideo;


        while (archivo >> tipoVideo) {
            if (tipoVideo == 'm' ) {
                
                Movie peli;
                archivo >> peli;  
                peli.Plus::setCuenta(tipoVideo);

                catalog.push_back(new Movie);
                catalog[catalog.size()-1] = &peli;

                cout << peli;

            }else if (tipoVideo == 's'){

                Serie seri;
                archivo >> seri;
                seri.Plus::setCuenta(tipoVideo);
                
                catalog.push_back(new Serie);
                catalog[catalog.size()-1] = &seri;

                cout << seri;

                }
            else if(tipoVideo =='e'){
                Episode ep;
                archivo >> ep;

            }
            }
        }

        //printCatalog();
        archivo.close();

    }


int main(){
/*
    vector<Plus*> p1;
    Movie m1 ( 'm', "Garra", 120, "R", "Cuando_un_desafortunado_cazatalentos_de_basquetbol_encuentra", "https://www.youtube.com/watch?v=nM4iy0reaCA", 5, "Populares");
    Serie s1 ( 's', "StrangerThings", 4, "Suspenso", 5);

    Episode e1_s1 ( "Capitulo1", 50, "TV-14", "Will_es_testigo_de_algo_horroroso", "https://www.youtube.com/watch?v=Lpd6A7W4fYE", 1);
    Episode e2_s1 ( "Capitulo2", 55, "TV-14", "Lucas_Mike_y_Dustin_intentan_hablar_con", "https://www.youtube.com/watch?v=Lpd6A7W4fYE", 1);
    
    s1.agregarEpisodio(e1_s1);
    s1.agregarEpisodio(e2_s1);

    catalog.push_back(new Movie());
    catalog.push_back(new Serie());
    catalog[0] = &m1;
    catalog[1] = &s1;
*/

    cargarPlataforma();
    cout << catalog.size() << endl;
    //printCatalog();

    /*if(p1[1]->getCuenta() == 'm'){


        Movie *peli;
        peli = dynamic_cast<Movie *>(p1.at(1));
        cout << *peli;
    
    
    }

    else if(p1[1]->getCuenta() == 's'){
        Serie *seri;
        seri = dynamic_cast<Serie *>(p1.at(1));
        cout << *seri;
    }*/

    return 0;
    
}