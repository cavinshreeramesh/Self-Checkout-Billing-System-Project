#include <iostream>
#include <map>

using namespace std;

class Bill{
    map <string,int> items;
    int total_price;
    public:
        void input(){
            char item_code_input[5];
            int item_quantity_input;
            cout<<"enter the item code and quantity :";
            cin>>item_code_input>>item_quantity_input;
            items.insert(pair<string, int> (item_code_input,item_quantity_input));
        }
        void output(map<string,int> database){
            total_price=0;
            map <string,int>::iterator it;
            for(it=items.begin();it!=items.end();it++){
                total_price+=(it->second)*((database.find(it->first))->second);
            }
            cout<<"\nTotal amount to be paid : "<<total_price;
        }
        void loop_input(){
            bool loop=true;
                input();
                cout<<"[1] Add items\n[2] Calculate amount\n";
                int choice;
                cin>>choice;
                if (choice==1){
                    loop_input();
                }
            }
};

class Database{
    char item_code[5];
    int item_price;
    public:
        void add_item(map<string,int> database){
            cout<<"\nenter item code and price : ";
            cin>>item_code>>item_price;
            database.insert(pair<string,int> (item_code,item_price));
        }
        void delete_item(map<string,int> database){
            cout<<"\nenter item code to delete : ";
            cin>>item_code;
            database.erase(item_code);
            cout<<item_code<<" deleted from database";
        }
        void show_item(map<string,int> database){
            cout<<"\nenter item code to view : ";
            cin>>item_code;
            cout<<"Code : "<<item_code<<"\nPrice : "<<(database.find(item_code))->second;
        }
        void show_database(map<string,int> database){
            cout<<"Code    Price"<<endl;
            map<string,int>::iterator it;
            for (it=database.begin();it!=database.end();it++){
                cout<<it->first<<"    "<<it->second<<endl;
            }
        }
        void edit_item(map<string,int> database){
            cout<<"enter item code and new price : ";
            cin>>item_code>>item_price;
            database.erase(item_code);
            database.insert(pair<string,int> (item_code,item_price));
        }
        void loop(map<string,int> database){
            cout<<"\nEdit Database : \n[1] Add items\n[2] Delete items\n[3] Show item \n[4] Show database\n[5] Edit Items\n[6] Exit"<<endl;
            int choice;
            cin>>choice;
            if (choice==1){
                add_item(database);
                loop(database);
            }else if(choice==2){
                delete_item(database);
                loop(database);
            }else if(choice==3){
                show_item(database);
                loop(database);
            }else if(choice==4){
                show_database(database);
                loop(database);
            }else if(choice==5){
                edit_item(database);
                loop(database);
            }else if (choice==6){
                cout<<"\nWelcome USer!\n[1] Bill order\n[2] Edit item database\n";
                int temp;
                cin>>temp;
                if(temp==1){
                    Bill b;
                    b.loop_input();
                    b.output(database);
                }else{
                    loop(database);
                }
            }else{
                cout<<"Invalid choice\nPress 0 to try again"<<endl;
                loop(database);
                }
            }
};

int main(){
    cout<<"Initialising item database"<<endl;
    char item_code[5];
    int item_price;
    map <string,int> item_database;
    for(int i=0;i<5;i++){
        cout<<"\nenter item code and price : ";
        cin>>item_code>>item_price;
        item_database.insert(pair<string, int> (item_code,item_price));
    }
    cout<<"Item database initialised"<<endl;
    cout<<"\nWelcome User!\n[1] Bill order\n[2] Edit item database\n";
    int choice;
    cin>>choice;
    if(choice==1){
        Bill b;
        b.loop_input();
        b.output(item_database);
    }else if(choice==2){
        Database db;
        db.loop(item_database);
    }else{
        cout<<"Invalid input\nTerminating program";
    }
    return 0;
}


