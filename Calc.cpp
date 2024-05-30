#include<iostream>
using namespace std;

int pow(int x, int y){
    if(y==0){
        return 1;
    }
    else
    return x*pow(x,y-1);
}

int main(){
    float a, b, ans;
    char task;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    cout<<"Enter task: ";
    cin>>task;

    if(task=='+'){
        ans=a+b;
    }
    else if(task=='-'){
        ans=a-b;
    }
    else if(task=='*'){
        ans=a*b;
    }
    else if(task=='/'){
        if(b!=0)
        ans=a/b;
        else
        cout<<"Error";
    }
    else if(task=='^'){
        ans=pow(a,b);
    }
    cout<<ans;
    return 0;
}