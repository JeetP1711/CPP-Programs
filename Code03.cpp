#include<iostream>
#include<string>
using namespace std;

class child{
    private: // private ma apde personal details nakhi sakiye jenathi aene access just apdej kari sakiye
    string name;
    int age;
    public:
    child(string N, int A){
        name=N;
        age=A;
    }

    void display(){ // from this function we can display the name and age which is in private
        cout<<"Name: "<<name<<" & age is: "<<age<<endl;
    }
};

int main(){
    child a("Jeet Patel",19); // calling the child class and function to display
    a.display();
    return 0;
}