#include<iostream>
#include<vector>
#include<limits.h>

int solve(int n, int x, int y, int z){
    if(n==0){
        return 0;
    }

    if(n<0){
        return INT_MIN;
    }

    int ans1 = solve(n-x,x,y,z) + 1;
    int ans2 = solve(n-y,x,y,z) + 1;
    int ans3 = solve(n-z,x,y,z) + 1;

    int ans = std::max(ans1, std::max(ans2,ans3));

    return ans;

}

using namespace std;

int main(){

    int n=7;
    int x=5;
    int y=2;
    int z=2;


    // returns max no of segments
    int ans = solve(n,x,y,z);

    if(ans<0){
        ans = 0;
    }

    cout<<"Answer is : "<<ans;


    return 0;
}