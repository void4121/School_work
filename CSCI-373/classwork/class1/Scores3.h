#include "GameEntry3.h"

class Scores3{
private:
    int maxEntries;
    int numEntries;
    GameEntry3* entries;

public:
    void add(const GameEntry3 &e);

    ~Scores3();

    GameEntry3 remove(int i3);

    Scores3(int n3 = 7);

    void printALL();

    void printIndex(int i3);

};