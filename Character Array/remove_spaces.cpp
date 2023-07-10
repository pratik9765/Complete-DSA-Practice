#include <iostream>
#include "string.h"
using namespace std;


void removeSpaces(char arr[]){
    int e=strlen(arr);

    for(int i=0;i<e;i++){
        if(arr[i]==' '){
            arr[i]='@';
        }
    }

    cout<<arr;
}

int main(){

    char arr[100];
    cin.getline(arr,100);

   removeSpaces(arr);


    return 0;
}