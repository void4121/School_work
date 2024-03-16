#include "GameEntry.h"
#include <iostream>

using namespace std;

GameEntry::GameEntry(const string& n, int s) : name(n), score(s) {
} //initializer

string GameEntry::getName() const {
	return name;
}

int GameEntry::getScore() const {
	return score;
}

void GameEntry::setName(string nName) {
    name = nName;
}
void GameEntry::setScore(int nScore) {
    score = nScore;
}