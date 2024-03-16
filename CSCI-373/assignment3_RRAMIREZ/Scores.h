#include "GameEntry.h"
#include <iostream>
#include "IndexOutOfBounds.h"
#include "GENode.h"
template<typename T>


class Scores {
    private:
        int maxEntries; // Maximum number of maxEntries
        int numEntries; // actual number of numEntries
        GENode<T> *head; // Head of the list
        GENode<T> *tail; // Tail of the list
    
    public:
        Scores(int maxEnt = 10);
        ~Scores();
        void add(const GameEntry& e);
        //GameEntry remove (int i) throw(IndexOutOfBounds);
        void printall(); // prints all the game entries in the list
};