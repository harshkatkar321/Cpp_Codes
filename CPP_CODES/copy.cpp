#include<iostream>

using namespace std;

class oparrayadd{

    int len;
    int *ptr;

    public:
    oparrayadd(){
        cout<<"\ndefault constructor called";
        len=5;
        ptr=new int[len];
        for(int i=0;i<len;i++){
            ptr[i]=0;
        }
    }
    oparrayadd(int l){
        cout<<"\nPARAMETERIZED constructor called";
        len=l;
        ptr=new int[len];
        for(int i=0;i<len;i++){
            cout<<"Enter elements";
            cin>>ptr[i];
            if(i==len){
                break;
            }
        }
        
    }
        void display(){
            cout<<"\n";
            for(int i=0;i<len;i++){
                cout<<", "<<ptr[i];
            }
        }
        // oparrayadd (oparrayadd &m){
        //     len=m.len;
        //     ptr=new int[len];
        //     for(int i=0;i<len;i++){
        //         ptr[i]=m.ptr[i];
        //     }
        // }

        // void operator = (oparrayadd &a){
        //     delete []ptr;
        //     len=a.len;
        //     ptr=new int[len];
        //     for(int i=0;i<len;i++){
        //         ptr[i]=a.ptr[i];
        //     }
        // }

        const oparrayadd operator = (const oparrayadd &a){
            delete []ptr;
            len=a.len;
            ptr=new int[len];
            for(int i=0;i<len;i++){
                ptr[i]=a.ptr[i];
                return *ptr;
            }
        }
    

};

int main(){
    oparrayadd arr1,arr2(8),arr3;
    // arr1.display();
    // arr2.display();
    arr3.display();   
    arr1=arr2=arr3;
    arr1.display();
    // arr4.display();
    
    return 0;
}