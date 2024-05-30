#include<iostream>
using namespace std;
int main(){
cout<<"Hello World!"<<endl;
int num;
cout<<"Enter a number: "<<endl;
cin>>num;
cout<<"You Entered Num: "<<num<<endl;
int age;
cout<<"Enter the age: "<<endl;
cin>>age;
if(age>=18){
    cout<<"You're an adult."<<endl;
}
else{
    cout<<"You are a minor."<<endl;
}
int i=0;
for(i=0;i<5;i++){
    cout<<i;
}
while(i<5){
    cout<<i;
    i++;
}
do{
    cout<<i;
    i++;
}
while(i<5);
return 0;
}