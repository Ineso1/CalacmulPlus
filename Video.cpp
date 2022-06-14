#include "Video.h"

Video::Video(){
    name = "";
    duration = 0;
    classification = "";
    synopsis = "";
    url = "";
}

Video::Video(std::string name, double duration,std::string classification, std::string synopsis, std::string url){
    this -> name  = name;
    this -> duration = duration;
    this -> classification = classification;
    this -> synopsis = synopsis;
    this -> url =  url;
}

std::string Video::getName(){
    return name;
}

double Video::getDuration(){
    return duration;
}

std::string Video::getClassification(){
    return classification;
}

std::string Video::getSynopsis(){
    return synopsis;
}

std::string Video::getUrl(){
    return url;
}

void Video::setName(std::string name){
    this -> name = name;
}

void Video::setDuration(float duration){
    this -> duration = duration;
}

void Video::setClassification(std::string classification){
    this -> classification = classification;
}

void Video::setSynopsis(std::string synopsis){
    this -> synopsis = synopsis;
}

void Video::setUrl(std::string url){
    this -> url = url;
}

std::ostream &operator << (std::ostream & salida, const Video& video){
    salida << "\n" << video.name << "\nDuracion:\t" << video.duration << "\nClasificacion:\t" << video.classification << "\nSynopsis:\t" <<  video.synopsis << "\nUrl:\t" << video.url << std::endl;
    return salida;
}

std::istream &operator >> (std::istream & entrada, Video& video){
    entrada >> video.name >> video.duration >> video.classification >>  video.synopsis >> video.url;
    return entrada;
}