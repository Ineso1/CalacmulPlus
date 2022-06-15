#include "Plataform.h"


Plataform::Plataform(){
    std::cout<<"\n";
}


Plus* &Plataform::operator[](int index){
    if (index>=0 && index<vecPlataform.size()){
        return vecPlataform.at(index);
    }
}

void Plataform::loadPlataformA(){
    std::ifstream archivo;
    archivo.open("Videos.txt");
    if (archivo.is_open()){
        char tipoVideo;
        while (archivo >> tipoVideo) {
                if (tipoVideo == 'm' ) {
                    
                    Movie peli;
                    archivo >> peli;  
                    peli.Plus::setCuenta(tipoVideo);

                    vecPlataform.push_back(new Movie);
                    vecPlataform[vecPlataform.size()-1] = &peli;
                                    

                }else if (tipoVideo == 's'){

                    Serie seri;
                    archivo >> seri;
                    seri.Plus::setCuenta(tipoVideo);
                    
                    vecPlataform.push_back(new Serie);
                    vecPlataform[vecPlataform.size()-1] = &seri;

                    }
                else if(tipoVideo =='e'){
                    Episode ep;
                    Serie *seri;
                    archivo >> ep;
                    seri = dynamic_cast<Serie *>(vecPlataform[vecPlataform.size()-1]);
                    seri->agregarEpisodio(ep);
                    vecPlataform[vecPlataform.size()] = seri;
                }
                else{
                    break;
                }
                    printNames();
                }
            }

        //printCatalog(catalog);
        archivo.close();
}

void Plataform::loadPlataformB(){
    
    Movie m1 ( 'm', "Garra", 120, "R", "Cuando_un_desafortunado_cazatalentos_de_basquetbol_encuentra", "https://www.youtube.com/watch?v=nM4iy0reaCA", 5, "Populares");
    Serie s1 ( 's', "StrangerThings", 4, "Suspenso", 5);

    Episode e1_s1 ( "Capitulo1", 50, "TV-14", "Will_es_testigo_de_algo_horroroso", "https://www.youtube.com/watch?v=Lpd6A7W4fYE", 1);
    Episode e2_s1 ( "Capitulo2", 55, "TV-14", "Lucas_Mike_y_Dustin_intentan_hablar_con", "https://www.youtube.com/watch?v=Lpd6A7W4fYE", 1);
    
    s1.agregarEpisodio(e1_s1);
    s1.agregarEpisodio(e2_s1);

    vecPlataform.push_back(new Movie());
    vecPlataform.push_back(new Serie());
    vecPlataform[0] = &m1;
    vecPlataform[1] = &s1;

}


Movie Plataform::upCastPlus_Movie(Plus*& obj){
    Movie* peli = dynamic_cast<Movie *>(obj);
    return *peli;
}

Serie Plataform::upCastPlus_Serie(Plus*& obj ){
    Serie* seri = dynamic_cast<Serie *>(obj);
    return *seri;
}

void Plataform::printNames(){
    for (int i = 0; i < vecPlataform.size(); i++)
    {
      char typePlus = vecPlataform.at(i) -> getCuenta();
      std::cout << "#" << i <<"\t";
        if(typePlus == 'm'){
            Movie mov = upCastPlus_Movie(vecPlataform.at(i));
            std::cout << mov.getCuenta() << std::endl;
        }
        else if(typePlus == 's'){
            Serie seri = upCastPlus_Serie(vecPlataform.at(i));
            std::cout << seri.getName() << std::endl;
        }
    }
}


