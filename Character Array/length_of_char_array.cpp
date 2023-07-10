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

int main(){

    char arr[100];
    cin>>arr;

    int length = getLength(arr);
    cout<<"Length is "<<length<<endl;

    cout<<"Length of array is "<<strlen(arr)<<endl;


    return 0;
}