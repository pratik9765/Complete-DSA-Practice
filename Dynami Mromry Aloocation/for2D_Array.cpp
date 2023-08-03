#include <iostream>
using namespace std;


int main(){
    int col= 5;
    int row = 3;

    // for creation 2d array
    int** arr = new int*[row];

    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // de-allocate
    for(int i=0;i<row;i++){
        delete []arr[i];
    }

    delete []arr;

    return 0;
}