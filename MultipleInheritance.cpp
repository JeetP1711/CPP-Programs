#include<iostream>
using namespace std;

// 1st Base Class
class vehicle{
    public:
    vehicle(){
    cout<<"This is vehicle."<<endl;
    }
};

// 2nd Base Class
class fourwheeler{
    public:
    fourwheeler(){
    cout<<"This is a fourwheeler."<<endl;
    }
};

// Derived Class of both vehicle and fourwheeler
class car: public vehicle, public fourwheeler{};

int main(){
    car c;

    return 0;
}