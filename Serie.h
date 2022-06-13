#ifndef SERIE_H
#define SERIE_H
#include <iostream>
#include <vector>
#include "Episode.h"

class Serie{
    std::vector<Episode> episodes;
    public:
        Serie();
        Serie(int, std::string, std::string, double, Episode);
        void printSynopsis();
        void printReview();
        void printMovie();
        void printEpisodes();
};

#endif // SERIE_H
