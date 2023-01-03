#include <iostream>
using namespace std;
class construct
{
public:
    int a = 10;
    int b = 20;
    // //default constructor called
    // construct(){
    //     a=10;
    //     b=20;
};

int main()
{
    // default constructor called when object is created
    construct c;
    cout << "the value of a is = " << c.a << endl;
    cout << "the value of b is = " << c.b << endl;

    return 0;
}