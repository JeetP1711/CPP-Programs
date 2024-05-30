// Hybrid Inheritance means it contains all types of inheritance
#include<iostream>
using namespace std;

class vehicle{// Base Class
public:
    vehicle(){
    cout<<"This is a vehicle"<<endl;
}
};

class fourwheeler{// 2nd Base Class
    public:
    fourwheeler(){
        cout<<"It is a fourwheeler."<<endl;
    }
};

class bike: public vehicle{};// Derived class of vehicle

class car: public vehicle, public fourwheeler{// Derived class of vehicle and fourwheeler
    public:
    car(){
        cout<<"It is a car."<<endl;
    }
};

int main(){
    vehicle v;
    car c;
    bike b;
    fourwheeler f;

    return 0;
}