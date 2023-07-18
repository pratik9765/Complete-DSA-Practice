#include <iostream>
using namespace std;

int checkKey(string str, int n, int i, char key){
    if(i>=n){
        return -1;
    }

    if(str[i]==key){
        return i;
    }

    return checkKey(str,n,i+1,key);

}

int main(){

    string str = "pratikbokde";
    int n = str.length();
    char key = 'i';
    int i=0;
    int ans = checkKey(str,n,i,key);

    cout<<"Answer is : "<<ans;
    return 0;
}