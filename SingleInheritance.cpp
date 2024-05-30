// Inheritance code
// Inheritance means like playing with the classes in multilevel multiple and heirarchical.
// Single heritance means just one base class and other class with public base class and no further body.
#include<iostream>
using namespace std;

class vehicle{
    public:
    vehicle(){
        cout<<"This is a vehicle"<<endl;
    }
};

class car: public vehicle{
};

int main(){
    vehicle v1;
    car v2;
    return 0;
}