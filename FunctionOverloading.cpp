// Function Overloading
// Function Overloading is that which means we have a same name function used for many functions and assigning different tasks to all the sae name function. And this requires more time to compile.
#include<iostream>
using namespace std;
class BTech{
    public:
    void fun(int x){
        cout<<"Value is "<<x<<endl;
    }
    void fun(){
        cout<<"This is a function 2."<<endl;
    }
    void fun(char a){
        cout<<"Value Of Char is: "<<a<<endl;
    }
    void fun(int x, int y){
        cout<<"The value of x: "<<x<<" & y: "<<y<<endl;
    }
};

int main(){
    BTech it;
    it.fun(12);
    it.fun();
    it.fun('A');
    it.fun(10,22);
    return 0;
}