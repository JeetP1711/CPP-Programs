#include<iostream>
using namespace std;

class shape{
    protected:
    int width;
    int height;

    public:
    shape(int w, int h):width(w),height(h){}
    // This constructor takes two values w and h and uses them to set the width and height of our shape. This : part is saying "set the width to w and height to h"
    void setdimension(int w, int h){
        width=w;
        height=h;
    }

    virtual int calarea(){}
    // This virtual function means that this function can be overridden by functions in classes that inherit from this one. RIght now, this function doesn't actually do anything
};

class rect: public shape{
    // Rect inherits from the class shape. Its like calling rectange is a shape
    public:
    rect(int w, int h): shape(w,h){}
    // This line is saying that constructor rect will take values w as width and h as height and will call the shape constructor of class shape
    int calarea(){
        cout<<"Area Of Rectangle: ";
        return width*height;
    }
};

int main(){
    rect m(8,4);
    cout<<m.calarea();
    return 0;
}