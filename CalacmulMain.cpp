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


Movie upCastPlus_Movie(Plus* obj){
    Movie* peli = dynamic_cast<Movie *>(obj);
    return *peli;
}

Serie upCastPlus_Serie(Plus* obj ){
    Serie* seri = dynamic_cast<Serie *>(obj);
    return *seri;
}

void printCatalog(){
    for (int i = 0; i < catalog.size(); i++)
    {
        if(catalog[i]->getCuenta() == 'm'){
            Movie mov = upCastPlus_Movie(catalog.at(i));
            cout << mov;
        }
        else if(catalog[i]->getCuenta() == 's'){
            Serie seri = upCastPlus_Serie(catalog.at(i));
            cout << seri;
        }
    }
}

void printNames(){
    for (int i = 0; i < catalog.size(); i++)
    {
      char typePlus = catalog.at(i) -> getCuenta();
      cout << "#" << i <<"\t";
        if(typePlus == 'm'){
            Movie mov = upCastPlus_Movie(catalog.at(i));
            cout << mov.getCuenta() << endl;
        }
        else if(typePlus == 's'){
            Serie seri = upCastPlus_Serie(catalog.at(i));
            cout << seri.getName() << endl;
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

            }else if (tipoVideo == 's'){

                Serie seri;
                archivo >> seri;
                seri.Plus::setCuenta(tipoVideo);
                
                catalog.push_back(new Serie);
                catalog[catalog.size()-1] = &seri;

                }
            else if(tipoVideo =='e'){
                Episode ep;
                Serie *seri;
                archivo >> ep;
                seri = dynamic_cast<Serie *>(catalog[catalog.size()-1]);
                seri->agregarEpisodio(ep);
                catalog[catalog.size()] = seri;
            }
            else{
                break;
            }

            }
        }

        printCatalog();
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
    //vector<Plus*> catalog;

   cargarPlataforma();
    try
    {
        printCatalog();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
    
}