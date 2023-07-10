#include <iostream>
#include "string.h"
using namespace std;

void convertToUppercase(char arr[]){
    int len = strlen(arr);

    for(int i=0;i<len;i++){
        if(arr[i]>='a' && arr[i]<='z'){
        arr[i] = arr[i] - 'a' + 'A';
        }
    }

    cout<<"After uppercase conversion array is : "<<arr;
}


int main(){

    char arr[100];
    cin>>arr;

   cout<<"Array is : "<<arr<<endl;
   
   convertToUppercase(arr);



    return 0;
}