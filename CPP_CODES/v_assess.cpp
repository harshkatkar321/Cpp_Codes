#include<iostream>
using namespace std;
class numbers{
    int num1,num2;
    public:
    numbers(){
         cout<<"\ndefault construtor called";
    }
    numbers(int a,int b){
       num1=a;
       num2=b;
    }
    numbers operator + (numbers c){
        numbers temp;
        temp.num1=num1+c.num2;
        return temp;
    }
    void display(){
        cout<<"addition two numbers:-"<<num1;
    }
};

int main(){
    numbers s1(2,5),s2(2,5),s3(0,0);
    s3=s1+s2;
    s3.display();
    return 0;
}
