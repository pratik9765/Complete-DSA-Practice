#include <iostream>
#include <limits.h>
using namespace std;

int findMin(int arr[], int n, int i, int& min){
    if(i>=n){
        return 0;
    }
    
    if(arr[i]<min){
        min = arr[i];
    }

    findMin(arr,n,i+1,min);
    return min;
}

int main(){

    int arr[] = {10,20,4,9,36,19};
    int n = 6;
    int i=0;
    int min = INT_MAX;
    int ans = findMin(arr,n,i,min);
    cout<<ans;
    return 0;
}