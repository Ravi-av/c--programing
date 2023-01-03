#include <iostream>
using namespace std;
// here we don''t have to write three sum function only one fumction work using default arguement
int sum(int x, int y, int z = 0, int w = 0)
{
    return (x + y + z + w);
}

int main()
{
    cout << sum(10, 20) << endl;
    cout << sum(10, 20, 30) << endl;
    cout << sum(10, 20, 30, 40) << endl;

    return 0;
}