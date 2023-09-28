#include <iostream>
using namespace std;

class Triangle
{
    public:
        float area (int, int);
        float perimeter(int, int, int);

    private:
        int x = 3;
        int y = 4;
        int z = 5;

};

float Triangle::area (int x, int y)
{
    return (1/2 * x * y);
}

float Triangle::perimeter(int x, int y, int z)
{
    return (x + y + z);
}

int main()
{
    cout << "area of the triangle is: " << Triangle::area << endl;
    cout << "perimeter of the triangle is: " << Triangle::perimeter;

}