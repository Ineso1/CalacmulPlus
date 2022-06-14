#ifndef SERIE_H
#define SERIE_H
#include <iostream>
#include <vector>
#include "Episode.h"
#include "Plus.h"

class Serie:public Plus{
    private:
    std::string name;
    std::vector<Episode> episodes;
    float rate;
    std::string gender;
    int seasons;
    public:
        Serie();
        Serie(std::string, int, std::string, float, bool);
        std::string getName();
        int getSeasons();
        std::string getGender();
        float getRate();
        void setName(std::string);
        void setSeasons(int);
        void setGender(std::string);
        void setRate(float);
        Episode getEpisodes();
        void agregarEpisodio(Episode);

        friend std::ostream& operator<< (std::ostream &, const Serie&);
        
        friend std::istream& operator>> (std::istream &, Serie&);
};

#endif // SERIE_H
