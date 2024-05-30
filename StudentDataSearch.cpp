#include<iostream>
#include<string.h>
using namespace std;

class student{
    private:
    char name[10][50] = { "Jeet","Vaidehi","Meet","Vishakha","Arpan","Ritu","Tanisha","Rohit","Krish","Bhargvi" };
    int roll_no[10] = { 1152,1022,1005,1024,1010,1153,1151,1012,1003,1129 };
    float total[10] = { 500,500,450,480,450,400,500,450,450,400 };
    float perc;
    char newname[50];

    public:
    void details(void);
};

void student::details(void){
    cout<<"Enter Name: ";
    cin>>newname;
    bool found=false;

    for(int i=0; i<10 ; i++){
        if(strcmp(name[i],newname)==0){// strcmp etle 2 strings compare thase
            found=true;
            cout<<"Yes We have students details."<<endl;
            cout<<"Name: "<<name[i]<<endl;
            cout<<"Roll No.: "<<roll_no[i]<<endl;
            cout<<"Total: "<<total[i]<<endl;
            perc=total[i]/500*100;
            cout<<"Percentage: "<<perc<<"%"<<endl;
            break;
        }
    }

    if(!found){
        cout<<"Sorry there is no student named "<<newname<<"..."<<endl;
    }
}

int main(){
    student st;
    st.details();
    return 0;
}