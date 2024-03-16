#ifndef GAMEENTRY_H_
#define GAMEENTRY_H_
#include <iostream>
#include <string.h>

using namespace std;

class GameEntry {
    
    private:
        string name; //player's name
        int score; //player's score
        
    public:
        GameEntry(const string& n="", int s=0); //constructor
        string getName() const;
        int getScore() const;
        void setName(string nName);
        void setScore(int nScore);
};

#endif /* GAMEENTRY_H_ */