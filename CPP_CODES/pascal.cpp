#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        int val=1;
        for(int j=1;j<5-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<" "<<val;
            val=val*(i-k)/(k+1);
        }
        cout<<"\n";
    }
    return 0;
}