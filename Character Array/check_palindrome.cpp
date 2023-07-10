#include <iostream>
#include "string.h"
using namespace std;


bool checkPalindrome(char arr[]){
    int s=0;
    int e=strlen(arr)-1;

    while(s<=e){
        if(arr[s]!=arr[e]){
            return false;
        }
        else{

        s++,e--;
        }
    }

    return true;
}

int main(){

    char arr[100];
    cin>>arr;

   bool isPalindrome = checkPalindrome(arr);

   if(isPalindrome){
    cout<<"It is a Palindromic array ";
   }
   else{
    cout<<"It is not a Palindromic array ";
   }


    return 0;
}