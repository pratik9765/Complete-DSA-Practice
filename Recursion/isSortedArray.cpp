#include<iostream>
using namespace std;

bool isSorted(int arr[], int n, int i){

    if(i==n-1){
        return true;
    }

    if(arr[i]>arr[i+1]){
        return false;
    }

    return isSorted(arr,n,i+1);
}

int main(){

    int arr[] = {10};
    int n = 1;
    int i=0;

    bool ans = isSorted(arr,n,i);
    cout<<ans;
    return 0;
}