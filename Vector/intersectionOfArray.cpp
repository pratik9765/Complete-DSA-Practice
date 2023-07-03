#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;




int main(){
    int n,m;
    cout<<"Enter size of first arrays : ";
    cin>>n;
    cout<<"Enter size of second arrays : ";
    cin>>m;

    vector<int>arr(n);
    vector<int>brr(m);

    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    for(int i=0;i<brr.size();i++){
        cin>>brr[i];
    }

    vector<int>Union;

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                brr[j]=-1;
            Union.push_back(arr[i]);
        }
    }
    }

sort(Union.begin(),Union.end());

     for(int i=0;i<Union.size();i++){
        cout<<Union[i]<<" ";
    }


 return 0;  
    }
 