#include<iostream>
using namespace std;

int main(){
    
    int arr[]={1,2,-3,4,-5,6};
    int n= 6;
    int l=0,h=n-1;

    while(l<h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }




    return 0;
}