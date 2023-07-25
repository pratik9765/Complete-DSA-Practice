#include <iostream>
#include<vector>
using namespace std;


void printSubsequences(string str, string output, int i){
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }

    // exclude
    printSubsequences(str,output,i+1);

    // include
    output.push_back(str[i]);
    printSubsequences(str,output,i+1);

}

int main(){

    string str = "abc";
    string output = "";

    int i=0;
    printSubsequences(str,output,i);

    return 0;
}