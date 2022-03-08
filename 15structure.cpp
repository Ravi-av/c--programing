#include<iostream>
using namespace std;
struct employee{
int eId;
char fav;
int salary;
};

int main(){
    struct employee ravi;
    ravi.eId=23;

    ravi.fav='t';
    ravi.salary=7894957;

    cout<<"the id of ravi is="<<ravi.eId<<endl;
     cout<<"the fav char of ravi  is="<<ravi.fav<<endl;
      cout<<"the salary of ravi is="<<ravi.salary<<endl;
       




   
    
    
     return 0;
}