// Inheritance of Class
// Multilevel Inheritance
#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eating..."<<endl;
    }
};

class Goat: public Animal{
    // public:
    // void eat(){
    //     cout<<"Eating grass";
    // }
};

int main(){
    Animal a;
    Goat g;
    a.eat();
    g.eat();
    return 0;
}