#include<iostream>
#include<vector>
using namespace std;


int findUnique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){

    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int>array(n);

    for(int i=0;i<array.size();i++){
        cin>>array[i];
    }

    int uniqueElement = findUnique(array);
    cout<<"unique element is : ";
    cout<<uniqueElement;

    return 0;
}