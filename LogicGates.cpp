#include<iostream>
using namespace std;

bool AND(bool A, bool B){
    return A && B;
}

bool OR(bool A, bool B){
    return A||B;
}

bool XOR(bool A, bool B){
    return (A||B)&&!(A&&B);
}

int main(){
    bool A,B;
    cout<<"Enter A: ";
    cin>>A;

    cout<<"Enter B: ";
    cin>>B;
    cout<<"The Output of AND Gate: "<<AND(A,B)<<endl;
    cout<<"The Output of OR Gate: "<<OR(A,B)<<endl;
    cout<<"The Output of XOR Gate: "<<XOR(A,B)<<endl;
}