#include <iostream>
using namespace std;

int factorial(int n){
    if (n ==1){
        return 1;
    }

    int ans= n * factorial(n-1);
    return ans;
}

int main(){

    int n;
    cout<<"Enter number for finding factorial : ";
    cin>>n;

    int ans = factorial(n);

    cout<<"factorial of "<<n <<" is : "<<ans;

    return 0;
}