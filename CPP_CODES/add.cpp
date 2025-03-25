#include<iostream>
using namespace std;
class mycomplex{
    int real;
    int imag;
    public:
       mycomplex(){
        real=imag=0;
        cout<<"\n default constructor is called";
       }
       mycomplex(int a){
        real=a;
        cout<<"\n single parametrised constructor is called";
       }
       mycomplex(int a,int b){
        real=a;
        imag=b;
        cout<<"\n double parametrised constructor is called";
       }
       ~mycomplex(){
        cout<<"\n destructor is called";
       }
       mycomplex operator + (mycomplex c){
        mycomplex temp;
        cout<<"\n inside function operator +";
        temp.real = real+c.real;
        temp.imag=imag+c.imag;
        return temp;
       }
       void display(){
        cout<<"\n"<<real<<" + "<<imag<<"i";
       }
    };

    int main(){
        mycomplex c1,c2(3,5),c3(4,6);
        c1=c2+c3;
        c1.display();
        return 0;
    }