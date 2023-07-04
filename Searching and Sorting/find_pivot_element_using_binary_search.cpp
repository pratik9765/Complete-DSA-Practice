#include <iostream>
#include <vector>
using namespace std;


int findPivotIndex(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(s==e){
            return mid;
        }
        if(mid<=e && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid-1>=s && arr[mid] < arr[mid-1]){
            return mid-1;
        }

        if(arr[s]>arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){

    vector<int>v{2,4,6,8,9,10,6};

    int pivotElementIndex = findPivotIndex(v);

    cout<<"Pivot element is at index : "<<pivotElementIndex<<endl;
    cout<<"Pivot element is : "<<v[pivotElementIndex]<<endl;


    return 0;
}