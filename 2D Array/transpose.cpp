#include<iostream>
using namespace std;



void findTranpose(int arr[][3], int r, int c,int transpose[][3]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            transpose[i][j] = arr[j][i];
        }
    }

}



int main(){

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows=3,cols=3;
    cout<<"Before transpose : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int transpose[3][3];
    findTranpose(arr,rows,cols,transpose);

    
    cout<<"After transpose : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}