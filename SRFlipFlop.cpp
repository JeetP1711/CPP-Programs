// SR Flip Flop through code
#include<iostream>
using namespace std;

void SR(bool A, bool B){
    if(A==0 && B==0){
        cout<<"Previous Value";
    }
    else if(A==0 && B==1){
        cout<<"0";
    }
    else if(A==1 && B==0){
        cout<<"1";
    }
    else{
        cout<<"INVALID";
    }
}

int main(){
    bool A,B;

    cout<<"Enter A: ";
    cin>>A;

    cout<<"Enter B: ";
    cin>>B;

    SR(A,B);
    return 0;
}