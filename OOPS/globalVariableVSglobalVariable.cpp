#include <iostream>
using namespace std;

int x = 2; // global variable

void fun(){
    int x = 90;
    cout<<x<<endl;
    ::x =40;
    cout<<::x<<endl;
}


int main(){
    ::x = 30;         // global
    int x = 1;      //local variable to main
    cout<<x<<endl;
    cout<<::x<<endl;

    {
        int x = 10;
        cout<<x<<endl;
        cout<<::x<<endl;
    }

    fun();
    return 0;
}