#include "Serie.h"

Serie::Serie(){
    name = "";
    seasons = 0;
    gender = "";
    rate = 0;
}

Serie::Serie(char cuenta, std::string name, int seasons, std::string gender, float rate):Plus(cuenta){
    this -> name = name; 
    this -> seasons = seasons;
    this -> gender = gender;
    this -> rate = rate;
}

std::string Serie::getName(){
    return name;
}

int Serie::getSeasons(){
    return seasons;
}

std::string Serie::getGender(){
    return gender;
}

float Serie::getRate(){
    return rate;
}

void Serie::setName(std::string name){
    this -> name = name;
}

void Serie::setSeasons(int seasons){
    this -> seasons = seasons;
}

void Serie::setGender(std::string gender){
    this -> gender = gender; 
}

void Serie::setRate(float rate){
    this -> rate = rate;
}

void Serie::agregarEpisodio(Episode ep){
    episodes.push_back(ep);
}

void Serie::getInfo(){
    Plus::getInfo();
    std::cout << "Name: " <<getName()<<"\nRate: " << getRate() <<"\nEpisodios: " << getSeasons() <<std::endl;
}

std::ostream &operator << (std::ostream & salida, Serie& ser){
    salida << "\n" << ser.getName() << "\nRate:\t" << ser.getRate() << "\nGender:\t" << ser.getGender() << "\nSeasons:\t" <<  ser.getSeasons() << "\nEpisodes:\n";
    for (int i = 0; i < ser.episodes.size(); i++){
        salida << "\tep " << i << ": "<< ser.episodes[i].getName() << std::endl;    
    }
    return salida;
}

std::istream &operator >> (std::istream & entrada, Serie& ser){
    entrada >> ser.name >> ser.rate >> ser.gender >>  ser.seasons;
    return entrada;
}