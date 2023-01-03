#include<iostream>
using namespace std;
class Point{
    private:
    int x,y;
    public:
    Point(int x1 , int y1){
        x=x1;
        y=y1;

    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
};

int main(){
    Point p(10,20);
    cout<<"the value of x is " <<p.getX()<<endl;
    cout<<"the value of y is " <<p.getY()<<endl;

    
     return 0;
}