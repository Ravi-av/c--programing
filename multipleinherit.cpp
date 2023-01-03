#include<iostream>
using namespace std;
class vehicle {
    public:
    vehicle(){
        cout<<"this is a vehicle \n";
    }


};
class fourWheeler{
    public:
    fourWheeler(){
    
        cout<<"this is four Wheeler vehicle \n";
    }
};
class Car : public vehicle, public fourWheeler{

};
int main(){
    Car obj;
     
     return 0;
}