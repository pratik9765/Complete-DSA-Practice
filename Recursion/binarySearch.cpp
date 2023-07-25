#include<iostream>
#include <vector>
using namespace std;



int binarySearch(vector<int>v, int target, int s, int e){

    int mid = s + (e-s)/2;

    if(s>e){
        return -1;
    }

    if( v[mid] == target){
        return mid;
    }


    // left search
    if(v[mid] > target){
        return binarySearch(v,target,s,mid-1);
    }
    else{
        // rigght search
        return binarySearch(v,target,mid+1,e);
    }


}
int main(){

    vector<int>v{10,20,30,40,50,60,99};
    int n = v.size();

    int target = 99;

    int s=0;
    int e=n-1;

    int ans = binarySearch(v,target,s,e);

    cout<<"Answer is : "<<ans;
    return 0;
}