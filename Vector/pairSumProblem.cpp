#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int>arr{10,20,40,60,70};
    int sum=80;

    // for 2 pair element
    // for(int i=0;i<arr.size();i++){
    //     for(int j=i+1;j<arr.size();j++){
    //         if(arr[i]+arr[j]==sum){
    //             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
    //         }
    //     }
    // }


    // for triplet
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                if(arr[i]+arr[j]+arr[k]==100){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                }
            }
        }
    }


    return 0;
}