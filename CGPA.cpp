#include<iostream>
using namespace std;

int main(){
    int nsub;
    double totalcredits=0.0;
    double totalgrades=0.0;
    
    cout<<"Enter the total number of subjects: ";
    cin>>nsub;

    for(int i=0;i<=nsub;i++){
        double credit,grade;
        cout<<"Enter the credit for "<<i+1<<" SUBJECT "<<i+1<<" : "<<endl;
        cin>>credit;
        cout<<"Enter the grade for "<<i+1<<" SUBJECT "<<i+1<<" : "<<endl;
        cin>>grade;
        totalcredits+=credit;
        totalgrades+=credit*grade;
    }
    if(totalcredits>0){
        double cgpa=totalgrades/totalcredits;
        cout<<"Your CGPA: "<<cgpa;
    }
    else{
        cout<<"Credit can't be 0";
    }
    return 0;
}
