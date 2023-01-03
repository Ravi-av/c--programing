#include <iostream>
using namespace std;
class employee
{
    int emp_id;
    char name[];

public:
    void setData(void)
    {
        cout << "Enter the name of employee" << endl;
        cin >> name;
        cout << "Enter id of employee" << endl;
        cin >> emp_id;
    }
    void showData(void)
    {
        cout << "The name of employee is" << name << endl;
        cout << "The id of employee is" << emp_id << endl;
    }
};

int main()
{
    employee fb[5];
    for (int i = 0; i < 5; i++)
    {
        fb[i].setData();
        fb[i].showData();
    }

    return 0;
}