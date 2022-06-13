#ifndef EPISODE_H
#define EPISODE_H
#include <iostream>

class Episode{
    private:
        std::string title;
        int duration;
        int season;
        std::string classification;

    public:
        Episode();
        Episode(std::string, int, int, std::string);
        std::string getTitle() const;
        int getDuration() const;
        int getSeason() const;
        std::string getClassification() const; 
        void setTitle(std::string);
        void setDuration(int);
        void setSeason(int);
        void setClassification(std::string);
        void printEpisode();
};

#endif // EPISODE_H
