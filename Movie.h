#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <vector>
#include "Episode.h"
#include "Video.h"

class Movie:public Video{
    private:
        std::vector <std::string*> cast;
        std::string gender;
    public:
        Movie();
        Movie(int, std::string, std::string , double, std::string, std::string);
        std::string getCast() const;
        std::string getGender() const;
        void setCast(std::string);
        void setGender(std::string);
        void printSynopsis();
        void printReview();
        void printMovie();
};

#endif // MOVIE_H
