#include<iostream>
#include<cstring>

using namespace std;

class Student{
    int age;
    char** name;
    public:

    Student(int a,char* s){
        age=a;
        name=new char*[strlen(s)];
    }
    ~Student(){
        delete []name;
    }
    // Student operator =(Student &s){

    //     delete []name;
        
    //     age=s.age;
    //     int i;
    //     name=new char*[strlen(s.name)];
    //     for(i=0;s.name[i]!='\0';i++){
    //         name[i]=s.name[i];
    //     }
    //     name[i]='\0';
    //     return *this;
    // }


    // Student(Student &c){
    //     age=c.age;
    //     name=new char*[strlen(c.name)];
    //     strcpy(name,c.name);
    // }

    void displaystud(){
        cout<<"\nThe age of student is : "<<age;
        cout<<"\n The name of student is : "<<name;
    }
};


int main(){

    char str1[10];
    char str2[10]="space";

    
    for(int i=0;i<10;i++){
        cout<<"Enter str";
        cin>>str1[i];
    }
    Student st1(12,str1);
    st1.displaystud();
    
    return 0;
}