#include <iostream>
using namespace std;

// void lastOccuranceLTR(string& s, char x, int i, int& ans){

//     if(i >= s.size()){
//         return;
//     }

//     if(s[i] == x){
//         ans = i;
//     }

//     lastOccuranceLTR(s,x,i+1,ans);

// }


void lastOccuranceRTL(string& s, char x, int i, int& ans){

    if(i < 0 ){
        return;
    }

    if(s[i] == x){
        ans = i;
        return;
    }

    lastOccuranceRTL(s,x,i-1,ans);

}

int main(){

    string s;
    cin>>s;
    cout<<endl;

    int ans = -1;

    char x;
    cin>>x;

    int i = s.size() - 1;

    // lastOccuranceLTR(s,x,i,ans);

    lastOccuranceRTL(s,x,i,ans);
    cout<<ans;

    return 0;
}