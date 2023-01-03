#include<iostream>
using namespace std;
class base{
void print(){
    cout<<"base function "<<endl;
}
};
class derived :public base{
    public:
    void print (){
        cout<<"derived function "<<endl;
    }
};

int main(){
    derived d1;
    d1.print();
    
     return 0;
}