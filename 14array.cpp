#include<iostream>
using namespace std;

int main(){
    int marks []= {23,55,66,67};
   int mathMarks[4]={2345,67455,7869,9076};
   cout<<"these are mathMarks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    //these are marks
    cout<<"these are marks"<<endl;
   
    //  cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    //  marks[2]=234;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    
    for (int i = 0; i<4; i++)
    {
      cout<<"the value of marks is "  <<i <<marks[i]<<endl;
    }
    //array using pointer
    int*p = marks;
    cout<<"The value of *(p) is "<<*(p)<<endl;
     cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
      cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
       cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    
     return 0;
}

