#include <iostream>
using namespace std;

class abc{
    int x;
    int *y;
    int z;

    public:
    // abc(){
    //     x=0;
    //     y= new int(5);
    // }

    // old method of initialization
    // abc(int _x, int _y, int _z = 5){
    //     x = _x;
    //     y= new int(_y);
    //     z = _z;
    // }

    // initialization list
    abc(int _x,int _y,int _z):x(_x),y(new int (_y)),z(_z){
        cout<<"in the initialization list"<<endl;
        *y = 20;
    }

    int getX() const{
        // x = 10; // not possible
        return x;
    }
    void setX(int _val1){
        x= _val1;
    }

    int getY() const{
        int m = 10;
        // y = &m;  not possible
        return *y;
    }
    void setY(int _val2){
        *y= _val2;
    }

    int getZ() const{
        return z;
    }

};

void printABC(const abc &a){
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;
    cout<<a.getZ()<<endl;

}


int main(){

    abc a(1,2,3);
    printABC(a);

    return 0;
}

int main2(){

    // 1. basics concept
    // const int x =5;
    // cout<<x<<endl;
    // x=10   not possible


    // 2. const with pointers
    // const int* a = new int(2);  //const data, non const pointer
    // *a = 2;  not possible
    // cout<<*a<<endl;

    // int b = 5;
    // a = &b;
    // cout<<*a<<endl;


    // 3. Const pointer, but non-const data
    // int * const a = new int(2);
    // cout<<*a<<endl;
    // *a = 20;
    // cout<<*a<<endl;


    // 4. const pointer, const data
    // const int * const a = new int(2);
    // cout<<*a<<endl;
    // *a = 50;  //not possible
    // int b= 100;
    // a = &b;  //not possible


    return 0;
}