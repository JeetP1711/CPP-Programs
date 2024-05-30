#include<iostream>
using namespace std;

class vehicle{
    public:
    vehicle(){
        cout<<"This is a vehicle."<<endl;
    }
};

class bike : public vehicle{};
class kawasaki: public bike{};

int main(){
    vehicle v1;
    bike v2;
    kawasaki v3;
    return 0;
}