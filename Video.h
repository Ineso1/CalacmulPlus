#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>

class Video{
    private:
        std::string name;
        double duration;
        std::string classification;
        std::string synopsis;
        std::string url;
    public:
        Video();
        Video(std::string, double, std::string, std::string, std::string);
        std::string getName();
        double getDuration();
        std::string getClassification();
        std::string getSynopsis();
        std::string getUrl();

        void setName(std::string);
        void setDuration(float);
        void setClassification(std::string);
        void setSynopsis(std::string);
        void setUrl(std::string);

        friend std::ostream& operator<< (std::ostream &, const Video&);
        
        friend std::istream& operator>> (std::istream &, Video&);

};

#endif // VIDEO_H
