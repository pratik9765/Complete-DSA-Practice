#include <iostream>
#include <limits.h>
using namespace std;


int findMax(int arr[], int n, int i, int& max){
    if(i>=n){
        return 0;
    }

    if(arr[i] > max){
        max = arr[i];
    }

    findMax(arr,n,i+1,max);
    return max;
}

int main(){

    int arr[8] = {10,30,21,44,32,17,19,66};
    int n = 8;
    int i=0;
    int max= INT_MIN;
    int ans = findMax(arr,n,i,max);
    cout<<"Maximum no is : "<<ans;
    return 0;
}