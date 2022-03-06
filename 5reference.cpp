#include<iostream>
using namespace std;
int c =45;

int main(){
    int a,b,c;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum of a & b is:"<<c<<endl;
    cout<<"the global value of c is"<<::c;


    //*******************reference variable

float d=45;
float &e=d;
cout<<"d"<<endl;
cout<<"e"<<endl;
    
    return 0;
}


