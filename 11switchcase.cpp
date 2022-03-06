#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me ur age: "<<endl;
    cin>>age;
   //selection conyrol structure structure -- switch case
   switch (age)
   {
   case 18 :
   cout<<"the age is 18"<<endl;
       break;

        case 12 :
   cout<<"the age is 12"<<endl;
    break;

      case 17 :
   cout<<"the age is 17"<<endl;
    break;
      case 67 :
   cout<<"the age is 67"<<endl;
    break;
   
   default:
   cout<<"no match"<<endl;
       break;
   }
   cout<<"done with switch case case"<<endl;
    return 0;
}