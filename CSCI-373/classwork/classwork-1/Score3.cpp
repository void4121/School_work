#include "Scores3.h"

Scores3::Scores3(int n3): maxEntries(n3), numEntries(0),
entries(new GameEntry3[maxEntries]){}


Scores3::~Scores3(){
    delete[] entries;
}

void Scores3::add(const GameEntry3 &e)
{

    int ns3 = e.getScore3();

    if(numEntries ==maxEntries){
        if(ns3 <= entries[maxEntries-1].getScore3()){
            return;
        }
    }
    else{
        numEntries++;
    }

    int i = numEntries -2;

    while(i>= 0 && ns3 > entries[i].getScore3()){
        entries[i+1] = entries[i];
        i--;
    }
    entries[i+1] = e;
}