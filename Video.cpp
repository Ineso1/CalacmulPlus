#include "Video.h"

Video::Video(){
    name = "";
    duration = 0;
    classification = "";
    synopsis = "";
    url = "";
}

Video::Video(std::string _name, double _duration,std::string _classification, std::string _synopsis, std::string _url){
    this -> name  = _name;
    this -> duration = _duration;
    this -> classification = _classification;
    this -> synopsis = _synopsis;
    this -> url =  _url;
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

void Video::setName(std::string _name){
    name = _name;
}

void Video::setDuration(float _duration){
    duration = _duration;
}

void Video::setClassification(std::string _classification){
    classification = _classification;
}

void Video::setSynopsis(std::string _synopsis){
    synopsis = _synopsis;
}

void Video::setUrl(std::string _url){
    url = _url;
}

std::ostream &operator << (std::ostream & salida, const Video& video){
    salida << "\n" << video.name << "\nDuracion:\t" << video.duration << "\nClasificacion:\t" << video.classification << "\nSynopsis:\t" <<  video.synopsis << "\nUrl:\t" << video.url << std::endl;
    return salida;
}

std::istream &operator >> (std::istream & entrada, Video& video){
    entrada >> video.name >> video.duration >> video.classification >>  video.synopsis >> video.url;
    return entrada;
}