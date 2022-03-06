#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me ur age: "<<endl;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"you cannot came to my  party"<<endl;
    }
    else if(age==18){
        cout<<"you came to my party with a kid pass"<<endl;

    }
    else if(age<1){
        cout<<"you are not yet born"<<endl;
    }
     else{
         cout<<"you came to the party"<<endl;
     }
    return 0;
}