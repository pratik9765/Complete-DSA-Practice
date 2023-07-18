#include <iostream>
using namespace std;

bool checkKey(string str, int n, int i, char key){
    if(i>=n){
        return false;
    }

    if(str[i]==key){
        return true;
    }

    return checkKey(str,n,i+1,key);

}

int main(){

    string str = "pratikbokde";
    int n = str.length();
    char key = 'a';
    int i=0;
    bool ans = checkKey(str,n,i,key);

    cout<<"Answer is : "<<ans;
    return 0;
}