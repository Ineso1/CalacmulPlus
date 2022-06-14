#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <vector>
#include "Episode.h"
#include "Video.h"
#include "Plus.h"

class Movie:public Video, public Plus{
    private:
        float rate;
        std::string gender;
    public:
        Movie();
        Movie(std::string, double, std::string, std::string, std::string, float, std::string, bool);
        float getRate();
        std::string getGender();
        void setRate(float);
        void setGender(std::string);
        
        friend std::ostream& operator<< (std::ostream &, const Movie&);
        
        friend std::istream& operator>> (std::istream &, Movie&);

};

#endif // MOVIE_H
