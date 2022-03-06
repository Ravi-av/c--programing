#include<iostream>
using namespace std;

int main(){
    //what is pointer -- is a data type containanother dta type address
    int a=3;
    int *b=&a;
    //&--address operator
    
    cout<<"the address of a is"<<&a<<endl;
     cout<<"the address of a is"<<b<<endl;
     //*--derefernce operator
      cout<<"the address of a is"<<*b<<endl;



     return 0;
}