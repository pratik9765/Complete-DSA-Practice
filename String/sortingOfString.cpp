#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(char first, char second){
    return first > second;
}

int main() {

    string s = "pratik";
    sort(s.begin(),s.end(),cmp);
    cout<<s<<" "<<endl;

    return 0;
}