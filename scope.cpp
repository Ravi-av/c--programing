#include <iostream>
using namespace std;
int num = 20; // global variable

int main()
{
    int num = 100; // local variable
    cout << "the value of local variable is " << num;
    cout << "\n the value of global variable is " << ::num; // use of scope resolution operator we can access global variable
    return 0;
}