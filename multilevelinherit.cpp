#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
        cout<<"this is a vehicle \n ";
    }
};
class fourWheeler : public vehicle{
    public:
     fourWheeler(){
         cout<<"this ais fourwheeler vehicle \n";

    }
};
class car :public fourWheeler{
    public:
    car(){
        cout<<"this a fourwheeler car \n";
    }
};
int main(){
    car obj;
     return 0;
}