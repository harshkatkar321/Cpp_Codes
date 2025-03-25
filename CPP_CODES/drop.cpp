#include<iostream>
#include<cstring>
using namespace std;

// int main(){

//     int n=5;
//     char str1[5];


//     cout<<"enter str";
//     for(int i=0;i<n;i++){
        
//         cin>>str1[i];
//     }
//     for(int i=0;i<n;i++){
//         // cout<<"enter str";
//         cout<<str1[i];
//     }


//     cout<<"\n"<<strlen(str1);
//     return 0;
// }


int main(){
    int arr[5][5];

    int i,j;
    arr[0][0]=1;
    for(i=1;i<=5;i++){
        
        for(j=1;j<=5;j++){
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}