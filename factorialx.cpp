#include <iostream>
using namespace std;
int factorial(int x);

int main()
{
    int x;
    cout << "enter a postive integer";
    cin >> x;
    cout << "factorial of " << x << " = " << factorial(x);
    return 0;
}
int factorial(int x)
{
    if (x > 1)
        return x * factorial(x - 1);
    else
        return 1;
}
