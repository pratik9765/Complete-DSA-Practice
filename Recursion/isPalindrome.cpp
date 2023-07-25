#include <iostream>
using namespace std;

bool isPalindrome(string& s, int start, int end){
    if(start>=end){
        return true; 
    }

    if(s[start] != s[end]){
        return false;
    }

    return isPalindrome(s,start+1,end-1);

}

int main(){

    string s;
    cin>>s;

    cout<<isPalindrome(s, 0, s.size()-1);
    return 0;
}