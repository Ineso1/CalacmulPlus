#include "Movie.h"

Movie::Movie(){
    rate = 0;
    gender = " ";
}

Movie::Movie(std::string name, double duration, std::string classification, std::string synopsis, std::string url, float rate, std::string gender, bool cuenta):Video(name, duration, classification, synopsis, url),Plus(cuenta){
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

std::ostream &operator << (std::ostream & salida, Movie& mov){
    salida << "\n" << mov.Video::getName() << "\nDuracion:\t" << mov.Video::getDuration() << "\nClasificacion:\t" << mov.Video::getClassification() << "\nSynopsis:\t" <<  mov.Video::getSynopsis() << "\nUrl:\t" << mov.Video::getUrl() << "\nRate:\t" << mov.getRate() << "\nGender:\t" << mov.getGender() << std::endl;
    return salida;
}

std::istream &operator >> (std::istream & entrada, Movie& mov){
    std::string name, classification, synopsis, url, gender;
    double duration;
    float rate;
    bool cuenta;
    entrada >> name >> duration >> classification >>  synopsis >> url >> cuenta;
    mov = Movie(name, duration, classification, synopsis, url, rate, gender, cuenta);
    return entrada;
}