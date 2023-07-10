#include <iostream>
#include "string.h"
using namespace std;

int getLength(char arr[]){
    int length=0;
    int i=0;

    while(arr[i]!='\0'){
        length++;
        i++;
    }

    return length;
}

void getReverse(char arr[]){
    int s=0;
    int e=getLength(arr)-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++,e--;
    }

    cout<<arr;
}

int main(){

    char arr[100];
    cin>>arr;

    int length = getLength(arr);
    cout<<"Length is "<<length<<endl;

    // cout<<"Length of array is "<<strlen(arr)<<endl;

    // cout<<"Reverse array is "<<getReverse(arr);
    getReverse(arr);

    return 0;
}