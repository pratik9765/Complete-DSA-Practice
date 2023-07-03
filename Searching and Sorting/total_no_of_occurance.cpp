#include <iostream>
#include <vector>
using namespace std;

int firstOccurance(vector<int>v,int target){
    int s=0;
    int e=v.size()-1;
    int mid= (s+e)/2;
    int ans=-1;

    while(s<=e){
        if(v[mid]==target){
            ans=mid;
            e=mid-1;
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

    int indexOfFirstOccurance = firstOccurance(v,target);
    cout<<"Answer is at index : "<<indexOfFirstOccurance<<endl;

    int indexOfLastOccurance = lastOccurance(v,target);
    cout<<"Answer is at index : "<<indexOfLastOccurance<<endl;

    cout<<"Total occurance is : "<<indexOfLastOccurance-indexOfFirstOccurance+1;



    return 0;
}