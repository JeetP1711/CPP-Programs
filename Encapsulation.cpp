#include<iostream>
using namespace std;

// Encapsulation means the data which is only accesed by the programmer i.e. the private in the class
class encapsulation{
    private:
    int privatedata;
    // The privatedata here is only accessed by this class only and not somewhere else int the program

    public:
    void setprivatedata(int data){
        privatedata=data; // in this step we are the assigning the data of privatedata
    }
    int getprivatedata(){
        return privatedata;
        // Getting the private data from here....
    }
};

int main(){
    encapsulation e;
    e.setprivatedata(97);
    cout<<e.getprivatedata();
    return 0;
}