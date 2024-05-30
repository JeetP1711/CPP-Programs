#include<iostream>
using namespace std;

class vehicle{
    public:
    vehicle(){
        cout<<"This is a vehicle."<<endl;
    }
};

class bike: public vehicle{
    public:
    bike(){
        cout<<"\nIts a Two-Wheeler"<<endl;
    }
};

class car: public vehicle{
    public:
    car(){
        cout<<"\nIts a Four-Wheeler"<<endl;
    }
};

int main(){
    vehicle v1;
    bike b1;
    car c1;

    return 0;
}