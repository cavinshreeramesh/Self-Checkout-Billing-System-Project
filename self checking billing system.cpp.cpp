#include <iostream>

using namespace std;

class User{
    private:
        char name[50],username[50],password[50];
    public:
        void register_account();
        void login();
};
class Admin : User
{};
class Cashier : User
{};

int main(){
    int choice;
    while(true){
        cout<<"\nHello User!"<<endl<<"Are you an Admin or Cashier?"<<endl<<"Press 0 for Admin and 1 for Cashier";
        cin>>choice;
        switch(choice){
            case 0:
                cout<<"\nWelcome Admin! What would you like to do?"<<endl<<"[1] Register"<<endl<<"[2] Login"<<endl<<"[3] Exit";
                cin>>choice;
                if(choice==1){
                    //register
                    cout<<"register";
                    break;
                }else if(choice==2){
                    //login
                    cout<<"login";
                    break;
                }
                break;
            case 1:
                cout<<"\nWelcome Cashier! Please Login to bill customers!"<<endl<<"\n";
                //Login
                cout<<"login";
                break;
            default:
                cout<<"\nInvalid response"<<endl<<"Please try again"<<endl;
        }
    }
    return 0;
}
