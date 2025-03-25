#include<iostream>

using namespace std;

class abc{
    int a;

    public:
    abc(int a1){
        a=a1;
    }
    const abc &operator = (const abc &m){
        a=m.a;
        return *this;
    }

    abc operator + (abc &m){
        abc temp(4);
        temp.a=a+m.a;
        return temp;
    }
    ~abc(){
        cout<<"destructor called";
    }
};


int main(){

    abc m1(5),m2(6),m3(1);
    m3=m1+m2;
    return 0;
}