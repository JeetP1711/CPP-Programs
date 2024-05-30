#include<iostream>
using namespace std;

int main(){
    double num1, num2, result;
    char operation;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the operation: ";
    cin>>operation;
    cout<<"Enter the second number: ";
    cin>>num2;

    switch(operation){
        case '+':
        result=num1+num2;
        break;
        case '-':
        result=num1-num2;
        break;
        case '*':
        result=num1*num2;
        break;
        case '/':
        if(num2!=0){
            result=num1/num2;
        }
        else{
            cout<<"Division is not possible";
            return 1;
        }
        break;
        default:
        cout<<"Invalid Operation.";
        return 1;
        break;
    }   
    cout<<"Result: "<<result<<endl;
    return 0;
}