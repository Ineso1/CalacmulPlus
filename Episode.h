#ifndef EPISODE_H
#define EPISODE_H
#include <iostream>
#include "Video.h"

class Episode:public Video{
    private:
        int season;

    public:
        Episode();
        Episode(std::string, double, std::string, std::string, std::string, int);
        int getSeason();
        void setSeason(int);

        friend std::ostream& operator<< (std::ostream &, const Episode&);
        
        friend std::istream& operator>> (std::istream &, Episode&);
        
};

#endif // EPISODE_H
