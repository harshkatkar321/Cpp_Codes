#include<iostream>

using namespace std;

int main()
{
    int ch,q,price,total_bill=0;

    do{
        printf("\n1. Snacks");
        printf("\n2. Beverages");
        printf("\n3. Hot drinks ");
        printf("\n4. Ice creams ");
        printf("\n5. Bisleri ");

        cout<<"\nEnter your choice please";
        cin>>ch;
        if((!(ch>=1)&&(ch<=6)))
        {
            cout<<"\nInvalid input [1-6]";
        }
        switch(ch){

            case 1:

            do{
                printf("\n1. Vadapav 15");
                printf("\n2. Samosa 15");
                printf("\n3. Fries 40");
                printf("\n4. Kachori 25");
                printf("\n5. Bhel 15 ");
                printf("\nE. Exit");
                cout<<"\nEnter your choice";
                cin>>ch;
                if((!(ch>=1)&&(ch<=6))){
                    cout<<"\nInvalid choice[1-6]";
                }
                if(ch==1){
                    cout<<"\nEnter quantity";
                    cin>>q;
                    price=15;
                    total_bill=q*price;
                }
                else if(ch==2){
                    cout<<"\nEnter quantity";
                    cin>>q;
                    price=15;
                    total_bill=q*price;

                }
                else if(ch==3){
                    cout<<"\nEnter quantity";
                    cin>>q;
                    price=40;
                    total_bill=q*price;
                }
                else if(ch==5){
                    cout<<"\nEnter quantity";
                    cin>>q;
                    price=25;
                    total_bill=q*price;
                }
                else{
                    break;
                }
            }while(ch!=7);

            case 2:

            do{
                printf("\n1. Cocacola 20");
                printf("\n2. Sprite 20");
                printf("\n3. lime-juice 15");
                printf("\n4. Soda 25");
                printf("\n5. Ice-Tea 35 ");
                printf("\nE. Press E for Exit");
                cout<<"\nEnter your choice";
                cin>>ch;
                if((!(ch>=1)&&(ch<=5))){
                    cout<<"\nInvalid choice[1-6]";
                }
                if(ch==1){
                    cout<<"\nEnter quantity";
                    cin>>q;
                    price=20;
                    total_bill=q*price;
                }
                else if(ch==2){
                    cout<<"\nEnter quantity";
                    cin>>q;
                    price=15;
                    total_bill=q*price;

                }
                else if(ch==3){
                    cout<<"\nEnter quantity";
                    cin>>q;
                    price=40;
                    total_bill=q*price;
                }
                else if(ch==5){
                    cout<<"\nEnter quantity";
                    cin>>q;
                    price=25;
                    total_bill=q*price;
                }
                else{
                    break;
                }
            }while(ch!=7);


        }
    }while(ch!=6);

    cout<<"\nYour total bill is"<<total_bill;
    return 0;
}