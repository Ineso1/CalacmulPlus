#include "Movie.h"

Movie::Movie(){
    gender = " ";
}

Movie::Movie(int id, std::string name, std::string duration, double rate, std::string gender, std::string cast):Video(id, name, duration, rate){
    this-> gender = gender;
    this-> cast = cast;
}

std::string Movie::getCast(){
    return cast;
}

std::string Movie::getGender(){
    return gender;
}

void Movie::setCast(std::string cast){
    this->cast = cast;
}

void Movie::setGender(std::string gender){
    this->gender = gender;
}

void Movie::printSynopsis(){
    std::cout << "" ;
}

void Movie::printReview(){
    std::cout << "" ;
}

void Movie::printMovie(){
    std::cout << "" ;
}

void Movie::printDuration(){
    std::cout << "" ;
}