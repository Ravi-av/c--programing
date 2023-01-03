#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void showData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4);
    a.showData();

    return 0;
}