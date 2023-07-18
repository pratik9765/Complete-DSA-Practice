#include <iostream>
using namespace std;


void solve(int& val){
    val++;
}

int main(){

    // int a= 5;
    // int& b= a;

    // cout<<a<<endl;
    // cout<<b<<endl;
    // cout<<&a<<endl;
    // cout<<&b<<endl;

    int a = 5;
    solve(a);
    cout<<a<<endl;

    return 0;
}