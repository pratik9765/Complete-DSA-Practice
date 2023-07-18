#include <iostream>
using namespace std;

void solve(int** ptr){
    **ptr = **ptr+1;
}

int main(){

    // int a=5;
    // int* p= &a;
    // int** q= &p;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;


    int x = 12;
    int* p = &x;
    int** q = &p;

    solve(q);

    cout<<x<<endl;



    return 0;
}