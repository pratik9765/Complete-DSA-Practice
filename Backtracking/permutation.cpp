#include <iostream>
using namespace std;

void printPermutation(string&  str, int i){
    // base call
    if(i>= str.length()){
        cout<<str<<" ";
        return; 
    }

    // swapping
    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);

        // recursive call
        printPermutation(str,i+1);

        // backtracking -> to recreate the original input
        swap(str[i],str[j]);
    }


}

int main(){
    string str = "abc";
    int i=0;
    printPermutation(str,i);

    return 0;
}