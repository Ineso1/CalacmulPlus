#include "Episode.h"

Episode::Episode(){
    title = "";
    duration = 0;
    season = 0;
    classification = "";
}

Episode::Episode(std::string title, int duration, int season, std::string classification){
    this -> title = title;
    this -> duration = duration;
    this -> season = season;
    this -> classification = classification;
}

std::string Episode::getTitle() const{
    return title;
}

int Episode::getDuration() const{
    return duration;
}

int Episode::getSeason() const{
    return season;
}

std::string Episode::getClassification() const{
    return classification;
}

void Episode::setTitle(std::string title){
    this->title = title;
}

void Episode::setDuration(int duration){
    this->duration = duration;
}

void Episode::setSeason(int season){
    this->season = season;
}

void Episode::setClassification(std::string classification){
    this->classification = classification;
}

void Episode::printEpisode(){
    std::cout<<"-------EPISODE DETAILS---------\n" << "-Title: " << title << std::endl << "-Duration: " << duration << std::endl <<"-Season" << season << std::endl << "-Classification: " << classification << std::endl;
}
