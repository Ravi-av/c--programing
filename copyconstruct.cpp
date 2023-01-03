#include <iostream>
using namespace std;
class Point
{
private:
    int x, y;

public:
    // parameterised constructor
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    // copy constructor
    Point(const Point &p1)
    {
        x = p1.x;
        y = p1.y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

int main()
{
    Point p1(10, 15); // normal constructor called
    Point p2 = p1;    // copy constructor called
    cout << "p1. x is " << p1.getX() << " "
         << "p1.y is " << p1.getY() << endl;
    cout << "p2.x is " << p2.getX() << " "
         << "p2.y is " << p2.getY() << endl;

    return 0;
}