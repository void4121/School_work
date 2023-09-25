#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
    public:
    Rectangle(int, int);
    int volume();

    private:
    int length;
    int width;

};

Rectangle::Rectangle (int l, int w)
{

    length = l;
    width = w;
}

int Rectangle::volume()
{
    return (length * width);
}