#include<iostream>
using namespace std;

class student{ // Class is a user data type of a data structure
    public: 
    string name;
    int age;
};

int main(){
    student s;
    s.name = "Jeet Patel";
    s.age = 19;

    cout<<"Name: "<<s.name<<endl;
    cout<<s.age<<endl;
    return 0;
}