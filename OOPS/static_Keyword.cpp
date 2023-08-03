#include <iostream>
using namespace std;


// static data member
// class abc{
//     public:
//     static int x,y;

//     void print() const {
//         cout<<x<<" "<<y<<endl;
//     }
// };

// int abc::x;
// int abc::y;

// int main(){

//     abc obj1;
//     abc obj2;

//     obj1.x = 1;
//     obj1.y = 2;
//     obj1.print();

//     obj1.x = 10;
//     obj1.y = 20;
//     obj1.print();
//     obj2.print();

//     return 0;
// }



// static member function

class abc{
    public:
    int x,y;
    abc() : x(0), y(0){}

    static void print(){
        // no this pointer accessible
        cout<<"In static member function"<<endl;        
    }
};

int main(){
    abc obj1;
    abc::print();

    abc obj2;
    abc::print();
    abc::print();


    return 0;
}