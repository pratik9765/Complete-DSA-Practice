#include<iostream>
using namespace std;

int main(){

    // int arr[3][3];

    // int brr[3][3] = {{1,2,3},
    //                  {4,5,6},
    //                  {7,8,9}};

    // cout<<brr[3][2];

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"Printing column wise"<<endl;

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }




    int arr[3][3];
    cout<<"Enter elements in array : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing Array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}