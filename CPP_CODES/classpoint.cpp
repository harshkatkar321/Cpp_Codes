#include<iostream>

using namespace std;

class point{
    double x,y;
    public:
    point(){
        x=2.9;
        y=2.9;
        cout<<"\nConstructor called";
    }

    ~point(){
        cout<<"\ndestructor called";
    }

    void setCordinates(int x_cord,int y_cord){
        if(x_cord>0.0&&y_cord>0.0){
            x=x_cord;
            y=y_cord;
        }
    }

    void displayPoint(){
        cout<<"\n("<<x<<","<<y<<")";
    }
};


int main(){

    point w1,w2,w3;
    w1.setCordinates(2.45,56.78);
    w2.setCordinates(1.1,45.78);
    w1.displayPoint();
    w2.displayPoint();
    w3.displayPoint();
    return 0;

}