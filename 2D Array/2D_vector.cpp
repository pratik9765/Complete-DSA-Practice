#include<iostream>
#include <vector>
using namespace std;

int main(){

    // vector<vector<int>>arr;

    // vector<int>a{1,2,3,5,7};
    // vector<int>b{4,5,6};
    // vector<int>c{7,8};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    int row=3, col=5;

    vector<vector<int>>arr(row,vector<int>(col,1));

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}