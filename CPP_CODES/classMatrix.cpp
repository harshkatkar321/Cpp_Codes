#include<iostream>

using namespace std;

class mymatrix{
    int row,col;
    int **ptr;

    public:
        // Default constructor function
        mymatrix(int r,int s){
            row=r; //value assign
            col=s; //value assign
            ptr=new int*[row];
            for(int i=0;i<row;i++){
                ptr[i]=new int[col]; // creation of arrays of int on heap memory
            } // end of for i
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    ptr[i][j]=0; // setting value 0 to all array elements
                }
            }
        }

        // Destructor function
        ~mymatrix(){
            for(int i=0;i<row;i++){
                delete []ptr[i]; // deletion of array of int
            }
            delete []ptr; // deletion of array of pointers
        }

        void setmatrix(int r,int s){
            // Deletion of previous defined matrix
            for(int i=0;i<row;i++){
                delete []ptr[i];   //deletion of array of int
            }
            delete []ptr;  // deletion of array of pointers

            row=r;
            col=s;
            ptr=new int*[row];  // creation of array of pointers on heap memory
            cout<<"Enter the elements ";
            for(int i=0;i<row;i++){
                ptr[i]=new int[col]; // creation of array of int on heap memory
            }
            // Nested loop for matrix elements insertion 
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cout<<"Enter elements :";
                    cin>>ptr[i][j];  // assigning user defined values in matrix 
                }
            }
        }
        // Copy Constructor
        mymatrix(mymatrix &m){

            row=m.row;
            col=m.col;
            ptr=new int*[row];
            for(int i=0;i<row;i++){
                ptr[i]=new int[col];
            }
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    ptr[i][j]=m.ptr[i][j];
                }
            }
        }

        // Assignmnt opertor overloading
        const mymatrix &operator = (const mymatrix &m){
            for(int i=0;i<row;i++){
                delete []ptr[i];
            }
            delete []ptr;

            row=m.row;
            col=m.col;
            ptr=new int*[row];
            for(int i=0;i<row;i++){
                ptr[i]=new int[col];
            }
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    ptr[i][j]=m.ptr[i][j];
                }
            }
        }
        // int* operator[](int i){
        //     return ptr[i];
        // }
        // display function
        void displaymat(){
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cout<<" "<<"\t"<<ptr[i][j];
                } // end of for j
                cout<<"\n";
            } // end of for i
        }


        // Addiiton operator overloading
        mymatrix operator + (mymatrix &m){
            mymatrix temp(row,col);
            if((row==m.row)&&(col==m.col)){
                
                for(int i=0;i<row;i++){
                    for(int j=0;j<col;j++){
                        temp.ptr[i][j]=ptr[i][j]+m.ptr[i][j];  // made mistake and considered object as matrix
                    }
                }
            }
            else{
                cout<<"\n Not possible dusto size mismatch";
            }

            return temp;
        }



};


int main(){
    mymatrix mat1(5,5),mat2(4,4),mat3(2,2);
    mat1.setmatrix(3,3);
    mat2.setmatrix(3,3);
    mat1.displaymat();
    // mat1=mat2;
    mat3=mat1+mat2;
    mat3.displaymat();
    
    return 0;
}