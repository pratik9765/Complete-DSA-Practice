#include <iostream>
#include "string.h"
using namespace std;

void convertToLowercase(char arr[]){
    int len = strlen(arr);

    for(int i=0;i<len;i++){
        if(arr[i]>='A' && arr[i]<='Z'){
        arr[i] = arr[i] + 'a' - 'A';
        }
    }

    cout<<"After lowercase conversion array is : "<<arr;
}


int main(){

    char arr[100];
    cin>>arr;

   cout<<"Array is : "<<arr<<endl;
   
   convertToLowercase(arr);



    return 0;
}