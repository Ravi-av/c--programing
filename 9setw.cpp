#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a = 34,b = 45, c = 5678;

//The value without setw function

    cout<<"The value of a is: "<<a<<endl;
     cout<<"The value of b is: "<<b<<endl;
      cout<<"The value of c is: "<<c<<endl;
      cout<<"             "<<endl;

//The value with setw

       cout<<"The value of a is: "<<setw(4)<<a<<endl;
     cout<<"The value of b is: "<<setw(4)<<b<<endl;
      cout<<"The value of c is: "<<setw(4)<<c<<endl;
      return 0;
}
