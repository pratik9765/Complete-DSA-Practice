#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


int main(){

    vector<int>arr{0,1,0,1,1,0,1,0,1,1};
    int start=0, end=arr.size()-1;

    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]==0){
    //         swap(arr[i],arr[start]);
    //         start++;
    //     }
    //     else{
    //         swap(arr[i],arr[end]);
    //         end--;
    //     }
    // }

    int i=0;
    int n = arr.size();
    while(i != end){
        if(arr[i]==0){
            swap(arr[i],arr[start]);
            start++;
            i++;
        }
        else if(arr[i]==1){
            swap(arr[i],arr[end]);
            end--;
        }

        // i++;
    }


    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}