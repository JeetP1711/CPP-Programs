#include<iostream>
#include<string>
#include<map>
using namespace std;

class login{
    private:
    map<string, string>users;

    public:
    bool registerUser(string username, string password){
        if(users.find(username)==users.end()){
            users[username]=password;
            return true;
        }
        return false;
    }
    bool authentication(string username, string password){
        if(users.find(username)!=users.end() && users[username]==password){
            return true;
        }
        return false;
    }
};

int main(){
    login id;
    id.registerUser("Jeet","Dhruvi@2110");
    string username, password;
    cout<<"Enter Username: ";
    cin>>username;
    cout<<"Enter Password: ";
    cin>>password;

    if(id.authentication(username,password)){
        cout<<"Login Successful...";
    }
    else{
        cout<<"Login Failed..";
    }
    return 0;
}