#include <iostream>
using namespace std;
void print(int i)
{
    cout << "here is integer value : " << i << endl;
}
void print(double f)
{
    cout << "here is float value : " << f << endl;
}
void print(char const *c)
{
    cout << "here is char * " << c << endl;
}

int main()
{
    print(10);
    print(10.10);
    print("ten");

    return 0;
}