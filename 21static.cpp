#include<iostream>
using namespace std;
class employee{
     int id;
    static int count;
     public:
     void setData(void){
          cout<<"ente the id"<<endl; 
          cin>>id;
          count++;

     }
     void getData(void){
          cout<<"the id of this employee is "<<id <<"and this employee number "<<count<<endl;
     }

     

};
int employee :: count=1000;
int main(){
    employee harry ,rohan ,louis;

   harry.setData();
   harry.getData();

   rohan.setData();
   rohan.getData();

   louis.setData();
   louis.getData();


}