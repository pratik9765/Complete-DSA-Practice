#include <iostream>
using namespace std;

void countReverse(int n){
    if(n==0){
        return;
    }

    cout<<n;
    countReverse(n-1);

}

int main(){

    int n;
    cout<<"Enter any number : ";
    cin>>n;

    countReverse(n);
    return 0;
}