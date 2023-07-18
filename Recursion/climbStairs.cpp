#include <iostream>
using namespace std;

int climbStaris(int n){
    if(n==0 || n==1){
        return 1;
    }

    int ans = climbStaris(n-1) + climbStaris(n-2);
    return ans;
}


int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int ans = climbStaris(n);

    cout<<"Answer is : "<<ans;

    return 0;
}