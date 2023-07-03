#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lastOccurance(vector<int>v,int target){
    int s=0;
    int e=v.size()-1;
    int mid= (s+e)/2;
    int ans=-1;

    while(s<=e){
        if(v[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(target> v[mid]){
            s=mid+1;
        }
        else if(target < v[mid]){
            e=mid-1;
        }

        mid= (s+e)/2;
    }

    return ans;

}

int main(){

    vector<int>v{1,3,3,2,4,4,4,4,6,7};
    int target = 4;

    int indexOfLastOccurance = lastOccurance(v,target);

    cout<<"Answer is at index : "<<indexOfLastOccurance<<endl;

    auto ans2= upper_bound(v.begin(),v.end(),target);
    cout<<"Ans2 is : "<<ans2-v.begin()-1<<endl;

    return 0;
}