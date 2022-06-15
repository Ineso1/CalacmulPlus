#include "Movie.h"

Movie::Movie(){
    rate = 0;
    gender = " ";
}

Movie::Movie(char cuenta, std::string name, double duration, std::string classification, std::string synopsis, std::string url, float rate, std::string gender):Video(name, duration, classification, synopsis, url),Plus(cuenta){
    this -> rate = rate;
    this -> gender = gender;
}

float Movie::getRate(){
    return rate;
}

std::string Movie::getGender(){
    return gender;
}

void Movie::setRate(float rate){
    this -> rate = rate;
}

void Movie::setGender(std::string gender){
    this -> gender = gender;
}

void Movie::getInfo(){
    Plus::getInfo();
    std::cout<<"Name: " <<Video::getName() <<"\nRate: " << getRate() << "\nDuracion: " << Video::getDuration() <<std::endl;
}

std::ostream &operator << (std::ostream & salida, Movie& mov){
    salida << "\n" << mov.Video::getName() << "\nDuracion:\t" << mov.Video::getDuration() << "\nClasificacion:\t" << mov.Video::getClassification() << "\nSynopsis:\t" <<  mov.Video::getSynopsis() << "\nUrl:\t" << mov.Video::getUrl() << "\nRate:\t" << mov.getRate() << "\nGender:\t" << mov.getGender() << std::endl;
    return salida;
}

std::istream &operator >> (std::istream & entrada, Movie& mov){
    std::string name, classification, synopsis, url, gender;
    double duration;
    float rate;
    entrada >> name >> duration >> classification >>  synopsis >> url >> rate >> gender;
    mov = Movie('0', name, duration, classification, synopsis, url, rate, gender);
    return entrada;
}