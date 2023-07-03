#include<iostream>
using namespace std;


// void rowWiseSum(int arr[][3],int rows, int cols){
//     cout<<"Printing row wise sum : "<<endl;
//     for(int i=0;i<rows;i++){
//     int sum=0;
//         for(int j=0;j<cols;j++){
//             sum=sum+arr[i][j];
//         }
//         cout<<sum<<" ";
//     }
// }


// void colWiseSum(int arr[][3],int rows, int cols){
//     cout<<"Printing col wise sum : "<<endl;
//     for(int i=0;i<rows;i++){
//     int sum=0;
//         for(int j=0;j<cols;j++){
//             sum=sum+arr[j][i];
//         }
//         cout<<sum<<" ";
//     }
// }


// bool findKey(int arr[][3],int rows, int cols, int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]==key){
//                     return true;
//                 }
//         }
//     }
//     return false;
// }



int findMax(int arr[][3],int rows, int cols){
    int max=arr[0][0];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(max<arr[i][j]){
                    max=arr[i][j];
                }
        }
    }
    return max;
}



int main(){

    int arr[3][3];
    int rows=3;
    int cols=3;
    int key;

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // rowWiseSum(arr,rows,cols);
    // colWiseSum(arr,rows,cols);

    // cout<<"Enter Element to find : ";
    // cin>>key;
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // cout<<findKey(arr,rows,cols,key);


    for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cin>>arr[i][j];
            }
        }
    int max = findMax(arr,rows,cols);
    cout<<"Max element is : "<<max;

    return 0;
}