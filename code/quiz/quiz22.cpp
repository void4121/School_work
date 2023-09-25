#include <iostream>
using namespace std;

class Area
{
    public:

        int returnArea (int len, int bre)
        {
            return (len * bre);
        }

};

int main()
{
    int len, bre;;
    Area rectangle;

    cout << "Please enter the length: " << endl;
    cin >>len;

    cout << "Please enter the width: " << endl;
    cin >> bre;
    cout << "Area of the rectangle is: " << rectangle.returnArea (len, bre);
}
