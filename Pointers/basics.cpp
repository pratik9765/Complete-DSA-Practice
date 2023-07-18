#include <iostream>
using namespace std;

int main(){

    // int a=5;
    // int b=5;
    // cout<<a<<endl;
    // cout<<&a<<endl;

    // cout<<b<<endl;
    // cout<<&b<<endl;

    int a = 5;
    int* ptr = &a;

    cout<<"Address of a : "<<&a<<endl;
    cout<<"value stored in ptr : "<<ptr<<endl;

    cout<<"value ptr is pointing to : "<<*ptr<<endl;
}