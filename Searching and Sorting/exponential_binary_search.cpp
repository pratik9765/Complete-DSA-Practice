#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binaer_search(int a[],int start,int end,int x){
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]>x){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int exponentialSearch(int a[], int n, int x){
    if(a[0]==x){
        return 0;
    }

    int i=1;
    while(i<n && a[i]<=x){
        i*=2;
    }

    return binaer_search(a,i/2,min(i,n-1),x);
}


int main(){

    int a[] = {3,4,5,6,11,13,14,15,56,70};
    int n = sizeof(a)/sizeof(int);
    int x=13;

    int ans = exponentialSearch(a,n,x);
    cout<<ans<<endl;


    return 0;
}