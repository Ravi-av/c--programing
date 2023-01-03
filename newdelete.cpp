#include <iostream>
using namespace std;

int main()
{
    int *arr;
    int size;
    cout << "enter the size of array ";
    cin >> size;
    cout << "creating an array of size " << size << endl;
    arr = new int[size];
    cout << "dyanamic allocation of  memory for array is succesfull";
    delete arr;

    return 0;
}