#include<iostream>
using namespace std;

class Jeet{
    public:
    // Declaring the strings
    string name, surname;
    
    // Default Constructor
    Jeet(){
        name="Jeet";
        surname="Patel";
    }

    // Copy Constructor
    Jeet(Jeet& j){
        name=j.name;
        surname=j.surname;
    }

    // Parametarized Constructor
    Jeet(string x, string y){
        name=x;
        surname=y;
    }

    // Destructor
    ~Jeet(){
        cout<<"\nBYE";
    }
};

int main(){
    Jeet a; //Calling default constructor
    Jeet b=a; //Calling copy constructor
    Jeet c("I am"," Jeet."); //Calling parametarized constructor

    cout<<a.name<<a.surname<<endl;
    cout<<b.name<<b.surname<<endl;
    cout<<c.name<<c.surname<<endl;
    return 0;
}