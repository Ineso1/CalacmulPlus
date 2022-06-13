#include "Video.h"

Video::Video(){
    id = 0;
    name = "default";
    duration = 0;
    rate = 0;
}

Video::Video(int id, std::string name, int duration, double rate){
    this -> id  = id;
    this -> name = name;
    this -> duration = duration;
    this -> rate =  rate;
}

//Seccion getters
int Video::getId() const{
    return id;
}

std::string Video::getName() const{
    return name;
}

int Video::getDuration() const{
    return duration;
}

double Video::getRate() const{
    return rate;
}

//Seccion setters 
void Video::setId(int id){
    this -> id =  id;
}

void Video::setName(int duration){
    this -> duration = duration;
}

void Video::setDuration(int duration){
    this -> duration =  duration;
}

void Video::setRate(double rate){
    this -> rate = rate;
}

void Video::printVideo(){
    std::cout << "-------VIDEO DETAILS---------\n" << "-ID: " << id << std::endl << "-Nombre: " << name << std::endl <<"-Duración" << duration << std::endl << "-Calificacion: " << rate << std::endl;
}
