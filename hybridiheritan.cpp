#include<iostream>
using namespace std;
class vehicle{
     public:
     vehicle(){
          cout<<"this is a vehicle \n";
     }

};
class fare{
     public:
     fare(){
          cout<<"fare of vehicle \n ";
     }

};
//first sub class
class car : public vehicle{

};
//second sub class
class bus : public vehicle ,public fare{

};
int main(){
     bus ob1;
    
     return 0;
}