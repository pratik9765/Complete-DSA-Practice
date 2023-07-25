#include <iostream>
#include <vector>
using namespace std;

void printSubarray_util(vector<int>&arr, int start, int end){
    
    if(end >= arr.size()){
        return;
    }

    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    printSubarray_util(arr,start,end+1);

} 

void printSubarray(vector<int>&arr){
    for(int start = 0; start<arr.size();start++){
        int end = start;
        printSubarray_util(arr,start,end);
    }
}


int main(){
    vector<int>arr{1,2,3,4,5};

    printSubarray(arr);


    return 0;
}