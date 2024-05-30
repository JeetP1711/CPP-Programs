#include<iostream>
#include<map> //mapping name number, ye dino ko ek me store karega
using namespace std;

int main(){
    map<string,string>phonebook;
    cout<<"Welcome To PhoneBook"<<endl;

    while(true){
        cout<<"Menu\n."<<endl;
        cout<<"1. Add Contact."<<endl;
        cout<<"2. Search Contact."<<endl;
        cout<<"3. Display Contacts."<<endl;
        cout<<"4. Exit."<<endl;
        cout<<"Enter Your Choice: ";
        int choice;
        cin>>choice;
        switch(choice){
            case 1:{
            string name,number;
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Number: ";
            cin>>number;
            phonebook[name]=number;
            cout<<"Contact Added Successfully."<<endl;
            break;
            }

            case 2:{
            string name;
            cout<<"Enter Name: ";
            cin>>name;
            if(phonebook.find(name)!=phonebook.end()){
                cout<<"Contact Found"<<endl;
            }
            else{
                cout<<"Contact Not Found"<<endl;
            }
            break;
            }

            case 3:{
                cout<<"Contacts:"<<endl;
                for(const auto& entry:phonebook){
                    cout<<"Name: "<<entry.first<<endl<<"Number: "<<entry.second<<endl;
                }
                break;
            }
            case 4:{
                cout<<"Exiting...\nThanks for visiting PhoneBook.."<<endl;
                return 0;
            }
            default:{
                cout<<"Invalid choice."<<endl;
                break;
            }
        }
    }
    return 0;
}