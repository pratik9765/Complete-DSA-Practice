#include <iostream>
using namespace std;

class A{
    public:
    int physics;
    A(){
        physics = 20;
    }
};

class B{
    public:
    int physics;
    B(){
        physics = 40;
    }
};

class C:public A, public B{
    public:
    int Maths;
};

int main(){

    C c1;
    cout<<c1.A::physics<<" "<<c1.B::physics<<" "<<c1.Maths<<endl;


    return 0;
}