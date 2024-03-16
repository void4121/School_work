#ifndef GENODE_H_
#define GENODE_H_
#include <iostream>
#include <string.h>

using namespace std;
template<typename T>
class Scores;

template<typename T>

class GENode {
    private:
        GameEntry elem; //Game entry stored in the GENode
        GENode<T>* next; //Pointer to the next item in the 
    
    public:
    
    friend class Scores<T>;
};

 #endif /* GENODE_H_ */