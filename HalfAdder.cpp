#include<iostream>
using namespace std;

bool CARRY(bool A, bool B){
    return A && B;
}
bool SUM(bool A, bool B){
    return A^B;
}

int main(){
    bool A,B;
    cout<<"Enter A: ";
    cin>>A;
    cout<<"Enter B: ";
    cin>>B;
    cout<<"Half Adder Sum is: "<<SUM(A,B)<<" and Carry is: "<<CARRY(A,B)<<endl;
    return 0;
}