#include<iostream>
using namespace std;
int main(){
    int a=4,b=5;
    cout<<"operators in c++"<<endl;
    //following are the airthemetic  operator
        cout<<"The value of a+b is"<< a+b <<endl;
        cout<<"The value of a-b is"<< a-b<<endl;
        cout<<"The value of a/b is"<< a/b<<endl;
        cout<<"The value of a%b is"<< a%b<<endl;
        cout<<"The value of a-- is"<< a--<<endl;
        cout<<"The value of a++ is"<< a++<<endl;
        cout<<"The value of --a is"<< --a<<endl;
            cout<<"The value of ++a is"<< ++a<<endl;
        


        //following are the comarision operator
            cout<<"Following are the comparision operator"<<endl;
            cout<<"the value a==b is:"<<(a==b)<<endl;
            cout<<"the value a<=b is:"<<(a<=b)<<endl;
            cout<<"the value a>=b is:"<<(a>=b)<<endl;
            cout<<"the value a>b is:"<<(a>b)<<endl;
            cout<<"the value a<b is:"<<(a<b)<<endl;
           //following are the logical operator

           cout<<" following are he logical operator "<<endl;
           cout<<"the  value of logical and operator is ((a==b) && (a<b)) is : "<<((a==b) && (a<b))<<endl;
           cout<<"the  value of logical or operator is ((a==b) || (a<b)) is : "<<((a==b) || (a<b))<<endl;
           cout<<"the  value of not operator is (!(a==b)) is : "<<(!(a==b))<<endl;
    return 0;
}