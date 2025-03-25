#include<iostream>

using namespace std;

class date{
    int dd,mm,yy;
    public:
    date(){
        cout<<"\nConstructor called";
        dd=1;
        mm=1;
        yy=1990;
    }
    ~date(){
        cout<<"\nDestructor called";
    }

    void setDate(int d,int m, int y){


        if(d<=31&&m<=12){

            if((m==2)&&((y%4==0)||(y%400==0)&&(y%100!=0))){
                if(d<=29){
                    dd=d;
                    mm=m;
                    yy=y;
                }
            }
            else{
                if(m==2&&d<=28){
                    dd=d;
                    mm=m;
                    yy=y;
                }
            }

            if(((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))&&(d<=31)){
                dd=d;
                mm=m;
                yy=y;
            }
            else{
                if((d<=30)&&(m!=2)){
                    dd=d;
                    mm=m;
                    yy=y;
                }
            }
        }
        else{
            cout<<"\nInvalid Input date";
        }
    }

    void display(){
        cout<<"\n"<<dd<<"/"<<mm<<"/"<<yy;
    }
};

int main(){

    date t1,t2,t3;

    t1.setDate(31,4,2012);
    t1.display();
    return 0;

}