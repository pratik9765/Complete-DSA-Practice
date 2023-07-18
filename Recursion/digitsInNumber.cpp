#include <iostream>
using namespace std;

void printDigits(int n){
    if(n==0){
        return;
    }

    printDigits(n/10);

    int digit = n%10;
    cout<<digit<<" ";



}

int main(){

    int n=645;
    if(n==0){
        cout<<"0 ";
    }
    printDigits(n);
    return 0;
}