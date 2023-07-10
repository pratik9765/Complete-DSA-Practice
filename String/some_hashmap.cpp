#include <iostream>
#include <map>
using namespace std;

int main(){

    // creation of map
    map<int,char>map;

    map[0]='a';
    map[1]='b';
    map[25]='z';

    cout<<"Ans is : "<<map[0]<<endl;
    cout<<"Ans is : "<<map[1]<<endl;
    cout<<"Ans is : "<<map[2]<<endl;
    cout<<"Ans is : "<<map[25]<<endl;


    return 0;
}