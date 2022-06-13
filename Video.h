#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>

class Video{
    private:
        int id;
        std::string name;
        int duration;
        double rate;
    public:
        Video();
        Video(int,std::string,int,double);
        int getId() const;
        std::string getName() const;
        int getDuration() const;
        double getRate() const;
        void setId(int);
        void setName(std::string);
        void setDuration(int);
        void setRate(double);
        void printVideo();
};

#endif // VIDEO_H
