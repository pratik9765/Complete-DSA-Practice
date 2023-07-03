#include <iostream>
using namespace std;

bool binarySearchIn2DArray(int arr[][4],int rows, int cols, int target){
    int s=0;
    int e=rows*cols-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        int rowIndex = mid/cols;
        int colIndex = mid%cols;

        if(arr[rowIndex][colIndex]==target){
            cout<<"Found at ("<<rowIndex<<","<<colIndex<<")."<<endl;
            return true;
        }
        else if(arr[rowIndex][colIndex]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }

        mid = s+ (e-s)/2;
    }

    return false;

}

int main(){
    int arr[5][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}, {17,18,19,20}};
    int rows = 5;
    int cols = 4;

    int target = 191;

    bool ans = binarySearchIn2DArray(arr,rows,cols,target);

    if(ans){
        cout<<"Found."<<endl;
    }
    else{
        cout<<"Not found."<<endl;
    }






    return 0;
}











#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;




// int binarySearch(int arr[],int size,int target){
//     int start=0;
//     int end=size-1;
//     // int mid=(start+end)/2;
//     int mid = start + (end-start)/2;

//     while(start<=end){
//         int element = arr[mid];

//         if(element==target){
//             return mid;
//         }
//         else if(target > element){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }

//         // mid=(start+end)/2;
//         mid = start + (end-start)/2;
//     }

//     return -1;

// }

int main(){


    // int arr[] = {2,4,6,8,10,12,16};
    // int target = 12;
    // int size = 7;

    // int indexOfTarget= binarySearch(arr,size,target);

    // if(indexOfTarget==-1){
    //     cout<<"Element not present in array"<<endl;        
    // }

    // else{
    //     cout<<"Element found at index "<<indexOfTarget<<endl;
    //     }




    // vector<int>v{1,2,3,4,5,6,7,8,9};
    // if(binary_search(v.begin(),v.end(),41)){
    //     cout<<"Found."<<endl;
    // }
    // else{
    //     cout<<"Not Found."; 
    // }


    
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int size = 10;
    if(binary_search(arr, arr+size,41)){
        cout<<"Found."<<endl;
    }
    else{
        cout<<"Not Found."; 
    }


    return 0;
}