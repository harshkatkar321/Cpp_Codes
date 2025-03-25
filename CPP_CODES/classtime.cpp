#include<iostream>

using namespace std;

class time{

    int hh,mm,ss;
    public:
    time(){
        hh=1;
        mm=30;
        ss=45;
        cout<<"\nConstructor called";
    }

    void setDate(int h,int m,int s){
        if((h<=12)&&(m<=60)&&(s<=60)){
            hh=h;
            mm=m;
            ss=s;
        }
        else{
            cout<<"Invalid date";
        }
    }

    void displayTime(){
        cout<<"\n"<<hh<<":"<<mm<<":"<<ss;
    }

    ~time(){
        cout<<"\nDestructor called";
    }

};


int main(){

    time t1,t2,t3;
    int hh,mm,ss;
    cout<<"\nEnter time : ";
    cout<<"\n Enter hour";
    cin>>hh;
    cout<<"\n Enter minutes";
    cin>>mm;
    cout<<"\n Enter seconds";
    cin>>ss;
    t1.setDate(hh,mm,ss);
    t1.displayTime();
    t2.displayTime();
    t3.displayTime();
    return 0;

}