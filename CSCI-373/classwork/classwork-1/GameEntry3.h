#include <iostream>

class GameEntry3
{

    private:
    std::string name3;
    int score3;

public:
    GameEntry3(std::string n3="", int s3=0);

    std::string getName3() const;

    int getScore3() const; 

};